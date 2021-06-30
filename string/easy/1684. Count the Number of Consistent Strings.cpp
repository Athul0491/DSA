class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int output = 0;
        unordered_map <char,bool> umap;        
        for(int i =0;i<allowed.length();++i){
            umap[allowed[i]]=true;
        }
        for(int i=0;i<words.size();++i){
            bool valid=true;
            for(int j=0;j<words[i].length();++j){
                if (umap.find(words[i][j]) == umap.end()){
                    valid=false;
                    
                }
                
                
            }
            if(valid==true){
                output++;
            }
        }
        return output;
    }
};

//could be optimised by using set