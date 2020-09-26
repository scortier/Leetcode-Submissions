let findPoisonedDuration = (A, K, hi = -1, total = 0) => {
    for (let x of A) {
        let i = Math.max(hi, x),
            j = x + K;
        total += j - i;
        hi = Math.max(hi, j);
    }
    return total;
};