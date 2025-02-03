class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        long long int n = arr.size();

        vector<int>pre_xor(n);
        pre_xor[0] = arr[0];

        for(long long int i = 1; i < n; i++) {
            pre_xor[i] = pre_xor[i - 1] ^ arr[i];
        }
        // for(auto x: pre_xor) cout << x << ' ';
        // cout << endl;
        //  return pre_xor;

        vector<int>ans(queries.size());
        for(long long int i = 0; i < queries.size(); i++) {
            int first_idx = queries[i][0];
            int sec_idx = queries[i][1];

            if(first_idx == 0) {
                ans[i] = pre_xor[sec_idx];
            }
            else {
                ans[i] = pre_xor[sec_idx] ^ pre_xor[first_idx - 1];
            }
        }
        return ans;
    }
};