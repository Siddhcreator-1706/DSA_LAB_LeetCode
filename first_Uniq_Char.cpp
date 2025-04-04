class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> umpp;
        int n=s.size();
        for(int i=0;i<n;i++){
            umpp[s[i]]++;
        }
        for(int i=0;i<n;i++){
            if(umpp[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};
