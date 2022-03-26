class Solution {
    public int[][] merge(int[][] intervals) {
        if (intervals == null || intervals.length == 0)
            return new int[][]{};
        if (intervals.length == 1)
            return intervals;
        Arrays.sort(intervals, (a, b) -> a[0] - b[0]);
        List<int[]> result = new ArrayList<>();
        int[] current = intervals[0];
        result.add(current);
        for (int i = 1; i < intervals.length; i++){
            int currStart = current[0];
            int currEnd = current[1];
            int nextStart = intervals[i][0];
            int nextEnd = intervals[i][1];
            if (currEnd >= nextStart)
                current[1] = Math.max(currEnd, nextEnd);
            else{
                current = intervals[i];
                result.add(current);
            }
        }
        return result.toArray(new int[result.size()][2]);
    }
}