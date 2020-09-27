class Solution:
    def calcEquation(self, equations: List[List[str]], values: List[float], queries: List[List[str]]) -> List[float]:
        result = []
        numbers = defaultdict(list)
        for index, equation in enumerate(equations):
            numbers[equation[0]] += [(equation[1], values[index])]
            numbers[equation[1]] += [(equation[0], 1 / values[index])]
        for querie in queries:
            if querie[0] == querie[1] and querie[0] in numbers:
                result.append(1)
                continue
            queue = []
            visited = set()
            visited.add(querie[0])
            number = -1
            queue.append((querie[0], 1))
            while queue:
                key, value = queue.pop(0)
                if key == querie[1] and key in numbers:
                    number = value
                    break
                for k, v in numbers[key]:
                    if k in visited:
                        continue
                    queue.append((k, value * v))
                    visited.add(k)
            result.append(number)
        return result