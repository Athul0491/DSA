class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> umap;
        unordered_map<char, int>:: iterator itr;
        int output;
        for(int i=0;i<jewels.length();++i){
            char key = jewels[i];
            umap[key]=1;
        }
        for(int i=0;i<stones.length();++i){
            if (umap.find(stones[i]) == umap.end()){
                break;
            }
            else{
                output++;
            }
        }
        
        return output;
    }
};