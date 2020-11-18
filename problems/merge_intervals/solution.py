class Solution(object):
    def sort(self, intervals):
        for i in range(1, len(intervals)):
            key = intervals[i]
            j = i-1
            while j >=0 and key[0] < intervals[j][0] : 
                    intervals[j+1] = intervals[j] 
                    j -= 1
            intervals[j+1] = key 
        return intervals
    
    def merge(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: List[List[int]]
        """
        if not intervals:
            return []
        intervals = self.sort(intervals)
        
        result_intervals = []
        current_interval = intervals[0]
        for i in range(len(intervals)):
            if current_interval[1] >= intervals[i][0]:
                current_interval = [min(current_interval[0], intervals[i][0]),
                                    max(current_interval[1], intervals[i][1])]
            else:
                result_intervals.append(current_interval)
                current_interval = intervals[i]
        result_intervals.append(current_interval)
        
        return result_intervals