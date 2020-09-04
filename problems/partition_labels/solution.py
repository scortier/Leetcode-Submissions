class Solution:
    def partitionLabels(self, S: str) -> List[int]:
        last = {char: idx for idx, char in enumerate(S)}

        ans = []
        j = anchor = 0
        for i, c in enumerate(S):
            j = max(j, last[c])
            if i == j:
                ans.append(j - anchor + 1)
                anchor = i + 1

        return ans