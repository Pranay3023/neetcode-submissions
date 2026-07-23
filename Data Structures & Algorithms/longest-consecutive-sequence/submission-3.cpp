class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> stt;

        for (int i = 0; i < nums.size(); i++) {
            stt.insert(nums[i]);
        }

        int max1 = 0;

        for (auto k : stt) {

            // Start only from the beginning of a sequence
            if (stt.find(k - 1) == stt.end()) {

                int current = k;
                int count = 1;

                while (stt.find(current + 1) != stt.end()) {
                    current++;
                    count++;
                }

                max1 = max(max1, count);
            }
        }

        return max1;
    }
};