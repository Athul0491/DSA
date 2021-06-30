class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> umap;
        for(int i=0;i<paths.size();++i){
            umap.insert(paths[i][0]);
        }
        for(int i=0;i<paths.size();++i){
            if(umap.find(paths[i][1])==umap.end()){
                return paths[i][1];
            }
        }
        return "";
    }
};