class Solution:
    def strongPasswordChecker(self, s: str) -> int:

        def isdigit(char):
            return char.isdigit()

        def missingTypes(s):
            needUpper = 1
            needLower = 1
            needNum = 1

            for c in s:
                if ord('a') <= ord(c) and ord(c) <= ord('z'):
                    needLower = 0
                if ord('A') <= ord(c) and ord(c) <= ord('Z'):
                    needUpper = 0
                if ord('0') <= ord(c) and ord(c) <= ord('9'):
                    needNum = 0

            return needUpper + needLower + needNum

        def countRepeat(s):
            count = 1
            ret = []
            for i in range(1, len(s)):
                print(s[i])
                print(s[i-1])
                if s[i] == s[i-1] :
                    count += 1
                else:
                    if count >= 3:
                        ret.append(count)
                    count = 1
            if count >= 3:
                ret.append(count)
            return ret

        n = len(s)
        missTypes = missingTypes(s)
        repeats = countRepeat(s)

        if n < 6:
            #TODO: need check repest?
            return max(missTypes, 6 - n)

        elif n >= 6 and n <= 20:
            # We only need to check repeats
            removeRepeat = 0
            for repeat in repeats:
                removeRepeat += repeat // 3
            return max(removeRepeat, missTypes)

        else:
            needRemove = n - 20

            # make 3k to 3k+2
            idx = 0
            while idx < len(repeats) and needRemove > 0:
                l = repeats[idx]
                if l % 3 == 0:
                    needRemove -= 1
                    repeats[idx] = l - 1
                idx += 1

            # make 3k + 1 to 3k+2
            idx = 0
            while idx < len(repeats) and needRemove > 0:
                l = repeats[idx]
                if l % 3 == 1 and needRemove > 1:
                    needRemove -= 2
                    repeats[idx] = l - 2
                idx += 1

            idx = 0
            while idx < len(repeats) and needRemove > 0:
                l = repeats[idx]
                while l >= 3 and needRemove >= 3:
                    l -= 3
                    needRemove -= 3
                repeats[idx] = l
                idx += 1

            replace = 0
            for repeat in repeats:
                replace += repeat // 3
            return max(missTypes, replace) + n - 20