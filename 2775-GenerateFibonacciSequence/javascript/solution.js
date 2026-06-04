// Last updated: 3/6/2026, 12:39:53 AM
var fibGenerator = function () {
    let current = 0;
    let next = 1;

    return {
        next: function () {
            const result = current;
            [current, next] = [next, current + next];
            return { value: result, done: false };
        }
    };
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */