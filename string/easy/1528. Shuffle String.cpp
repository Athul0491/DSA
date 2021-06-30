class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string t;
        unordered_map <int,char> umap;
        for(int i=0;i<n;++i){
            umap[indices[i]]=s[i];
        }
        for(int i=0;i<n;++i){
            
            t+=umap.at(i);
        }
        return t;
    }
};