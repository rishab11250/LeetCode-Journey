// Last updated: 3/6/2026, 12:45:49 AM
/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function (s, t) {
    return s.split(" ").join().split("").sort().join() == t.split(" ").join().split("").sort().join()
};