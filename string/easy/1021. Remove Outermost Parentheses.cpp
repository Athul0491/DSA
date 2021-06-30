class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string output;
        for(int i=0;i<s.length();++i){
            if(s[i]==')'){
                count--;
                if(count!=0){
                    output += s[i];
                } 
            }
            else if(s[i]=='('){
                count++;
                if(count!=1){
                    output += s[i];
                }
                
            }
            
        }
        return output;
    }
};