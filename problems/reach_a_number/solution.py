class Solution:
    def reachNumber(self, target: int) -> int:
        target = ((target > 0) - (target < 0)) * target

        n = int((2 * target) ** 0.5)

        while (n * (n + 1) / 2) < target:
            n += 1

        if target % 2 == 0:
            while (n * (n + 1) / 2) % 2 != 0:
                n += 1
        elif target % 2 != 0:
            while (n * (n + 1) / 2) % 2 == 0:
                n += 1

        return n

