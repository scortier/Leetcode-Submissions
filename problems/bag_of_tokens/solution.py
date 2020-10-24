class Solution:
    def bagOfTokensScore(self, tokens: List[int], P: int) -> int:
        if not tokens:
            return 0

        tokens.sort()

        point = 0
        while tokens:
            if P < tokens[0]:
                if point and len(tokens) > 1:
                    P += tokens.pop()
                    point -= 1
                else:
                    break
            else:
                P -= tokens.pop(0)
                point += 1

        return point
