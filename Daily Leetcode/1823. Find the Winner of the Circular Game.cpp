class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> circular_arr;
        for (int i = 1; i <= n; ++i) {
            circular_arr.push_back(i);
        }
        int cur_ind = 0;

        // for(auto x : circular_arr)
        // {
        //     cout << x << " ";
        // }

        while (circular_arr.size() > 1) {
            int next_to_remove = (cur_ind + k - 1) % circular_arr.size();
            circular_arr.erase(circular_arr.begin() + next_to_remove);
            cur_ind = next_to_remove;
        }

        return circular_arr[0];
    }
};