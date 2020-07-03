class Solution:
    def prisonAfterNDays(self, cells: List[int], N: int) -> List[int]:
        N %= 14
        if not N:
            N = 14
        for _ in range(N):
            cells = [0] + [cells[i-1] ^ cells[i+1] ^ 1 for i in range(1,7)] + [0]
        return cells