class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {

        vector<vector<int>> result;

        int start = newInterval[0];
        int end = newInterval[1];

        for (auto interval : intervals) {
            int s = interval[0];
            int e = interval[1];

            // Case 1: Current interval is completely before newInterval
            if (e < start) {
                result.push_back(interval);
            }

            // Case 2: Current interval is completely after newInterval
            else if (s > end) {
                result.push_back({start, end});

                start = s;
                end = e;
            }

            // Case 3: Overlapping intervals
            else {
                start = min(start, s);
                end = max(end, e);
            }
        }

        // Add the final merged interval
        result.push_back({start, end});

        return result;
    }
};