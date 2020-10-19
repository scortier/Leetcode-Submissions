class Solution:
    def minDominoRotations(self, A: List[int], B: List[int]) -> int:
        a, b = A[0], B[0]

        def count_rotations(value, base_line, other_line):
            rotations = 0

            for i in range(len(base_line)):
                if value != base_line[i] and value != other_line[i]:
                    return -1
                if value != base_line[i] and value == other_line[i]:
                    rotations += 1

            return rotations

        valid_result = []
        for v, base, other in [(a, A, B), (a, B, A), (b, A, B), (b, B, A)]:
            res = count_rotations(v, base, other)
            if res >= 0:
                valid_result.append(res)

        return min(valid_result) if valid_result else -1
