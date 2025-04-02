class Solution {
    public:
        vector<int> partitionLabels(string s) {
            unordered_map<char, int> last_ocr;
            for(int i = 0; i < s.size(); i++) {
                last_ocr[s[i]] = i;
            }
            vector<int>ans;
            int size = 1, end = 0;
    
            for(int i = 0; i < s.size(); i++) {
                end = max(end, last_ocr[s[i]]);
    
                if(end == i) {
                    ans.push_back(size);
                    size = 0;
                    end = 0;
                }
                size++;
            }
    
            return ans;
        }
    };
    
    
    