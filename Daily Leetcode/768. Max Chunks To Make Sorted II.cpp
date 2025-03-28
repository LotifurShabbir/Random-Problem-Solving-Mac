class Solution {
    public:
        int maxChunksToSorted(vector<int>& arr) {
            long long int sum1 = 0, sum2 = 0 , ans = 0;
            vector<int>sorted = arr;
            sort(sorted.begin(), sorted.end());
            for(int i = 0; i < arr.size(); i++) {
                sum1 += arr[i];
                sum2 += sorted[i];
                if(sum1 == sum2) ans++;
            }
            return ans;
        }
    };