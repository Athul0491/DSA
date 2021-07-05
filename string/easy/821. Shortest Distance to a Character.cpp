class Solution {
public:
    
    vector<int> shortestToChar(string s, char c) {
        
        vector<int> res;
        int m = -1;
        int n = 0;
        
        for(int i=0;i<s.size();i++) {
            n = find(s.begin()+i,s.end(),c) - s.begin();
            if(n == s.size()) {
                res.push_back(abs(m-i));
            }
            else {
                if(m==-1) {
                    res.push_back(abs(n-i));    
                    }
                else {
                    res.push_back(min(abs(m-i),abs(n-i)));
                }
            }
            if(i==n) {
                m = n;
            }
            
        }
        return res;
    }
};