class Solution {
public:
    int maxDepth(string s) {
        int output=0;
        int depth = 0;
        for(int i=0;i<s.length();++i){
            
            if(s[i]=='('){
                depth++;
                output=max(output,depth);
            }
            else if(s[i]==')'){
                depth--;
            }
        }
        return output;
    }
};