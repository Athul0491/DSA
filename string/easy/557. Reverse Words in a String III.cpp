class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int current = 0;
        while(true){
            if(s[current] != ' '){
                if(current == s.length() - 1){
                    reverseWord(s, start, current);
                    break;
                }
                else{
                    current ++;
                }
            }
            else{
                reverseWord(s, start, current - 1);
                start = current + 1;
                current = start;
            }
        }
        return s;
    }
    void reverseWord(string &s, int start, int end){
        std::cout<<start<<" "<<end<<std::endl;
        int n = (end - start + 1)/2;
        for(int i = 0; i < n; i++){
            char tmp = s[start + i];
            s[start + i] = s[end - i];
            s[end - i] = tmp;
        }
    }
};