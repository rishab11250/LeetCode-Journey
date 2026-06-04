const fs = require("fs");
const path = require("path");

const ROOT = path.resolve(__dirname, "../..");

const EXT_TO_LANG = {
    ".js": "JavaScript",
    ".ts": "TypeScript",
    ".py": "Python",
    ".cpp": "C++",
    ".c": "C",
    ".java": "Java",
    ".sql": "SQL",
    ".rs": "Rust",
    ".go": "Go",
};

const LANG_EMOJI = {
    JavaScript: "🟨",
    TypeScript: "🔷",
    Python: "🐍",
    "C++": "⚙️",
    C: "🔧",
    Java: "☕",
    SQL: "🗄️",
    Rust: "🦀",
    Go: "🐹",
};

// Scan all problem folders with new language subdirectory structure
const entries = fs.readdirSync(ROOT, { withFileTypes: true });
const problems = [];
const langCount = {};
const problemLangs = {};  // Track languages per problem

for (const entry of entries) {
    if (!entry.isDirectory()) continue;
    const match = entry.name.match(/^(\d+)-(.+)/);
    if (!match) continue;

    const id = parseInt(match[1], 10);
    const name = match[2];
    const problemPath = path.join(ROOT, entry.name);

    // New structure: problem folder contains language subdirectories
    let languagesForProblem = [];
    let problemFiles;

    try {
        problemFiles = fs.readdirSync(problemPath, { withFileTypes: true });
    } catch {
        continue;
    }

    // Check for language subdirectories or direct solution files (backward compat)
    for (const item of problemFiles) {
        if (item.isDirectory()) {
            // New structure: language subdirectory
            const langDir = path.join(problemPath, item.name);
            const langFiles = fs.readdirSync(langDir);

            for (const file of langFiles) {
                const ext = path.extname(file).toLowerCase();
                if (EXT_TO_LANG[ext]) {
                    const lang = EXT_TO_LANG[ext];
                    if (!languagesForProblem.includes(lang)) {
                        languagesForProblem.push(lang);
                        langCount[lang] = (langCount[lang] || 0) + 1;
                    }
                    break;  // One file per language subdirectory
                }
            }
        } else if (item.isFile()) {
            // Old structure: solution file directly in problem folder (backward compat)
            const ext = path.extname(item.name).toLowerCase();
            if (EXT_TO_LANG[ext]) {
                const lang = EXT_TO_LANG[ext];
                if (!languagesForProblem.includes(lang)) {
                    languagesForProblem.push(lang);
                    langCount[lang] = (langCount[lang] || 0) + 1;
                }
            }
        }
    }

    // Only add problem if it has solutions
    if (languagesForProblem.length > 0) {
        languagesForProblem.sort();  // Alphabetical order
        problemLangs[id] = languagesForProblem;
        problems.push({ id, name, langs: languagesForProblem, folder: entry.name });
    }
}

// Sort problems by ID
problems.sort((a, b) => a.id - b.id);

const total = problems.length;

// Build language table rows sorted by count
const langRows = Object.entries(langCount)
    .sort((a, b) => b[1] - a[1])
    .map(([lang, count]) => {
        const emoji = LANG_EMOJI[lang] || "📄";
        const pct = ((count / total) * 100).toFixed(1);
        return `| ${emoji} ${lang} | ${count} | ${pct}% |`;
    })
    .join("\n");

// Build problems table with all languages
const problemRows = problems
    .map((p) => {
        const langEmojis = p.langs
            .map(lang => `${LANG_EMOJI[lang] || "📄"} ${lang}`)
            .join(", ");
        const displayName = p.name.replace(/([A-Z])/g, " $1").trim();
        return `| ${p.id} | ${displayName} | ${langEmojis} |`;
    })
    .join("\n");

// Generate README
const readme = `<div align="center">

# 🧠 LeetCode Journey

**A curated collection of my LeetCode solutions — building consistency, one problem at a time.**

[![LeetCode](https://img.shields.io/badge/LeetCode-FFA116?style=for-the-badge&logo=leetcode&logoColor=black)](https://leetcode.com/u/rishab11250/)
![Problems Solved](https://img.shields.io/badge/Problems%20Solved-${total}-brightgreen?style=for-the-badge)
![Languages](https://img.shields.io/badge/Languages-${Object.keys(langCount).length}-blue?style=for-the-badge)

</div>

---

## 📊 Language Breakdown

| Language | Problems | Percentage |
|:---------|:--------:|:----------:|
${langRows}

---

## 📁 Repository Structure

Each problem can have multiple language solutions organized in subdirectories:

\`\`\`
{ProblemNumber}-{ProblemName}/
├── cpp/
│   └── solution.cpp
├── javascript/
│   └── solution.js
└── python/
    └── solution.py
\`\`\`

---

## 📝 All Solved Problems

| # | Problem | Languages |
|--:|:--------|:----------|
${problemRows}

---

## 🔗 Connect

- **LeetCode:** [rishab11250](https://leetcode.com/u/rishab11250/)
- **GitHub:** [rishab11250](https://github.com/rishab11250)

---

<div align="center">
  <sub>⭐ Star this repo if you find it helpful!</sub>
  <br>
  <sub>📊 This README auto-updates on every push via GitHub Actions</sub>
</div>
`;

fs.writeFileSync(path.join(ROOT, "README.md"), readme);
console.log("README updated: " + total + " problems across " + Object.keys(langCount).length + " languages");
