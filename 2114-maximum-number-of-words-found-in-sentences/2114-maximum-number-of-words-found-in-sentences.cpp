class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxs=0;
        for(string s : sentences){
            stringstream ss(s);
            string word;
            
            int count=0;
            while(ss>>word){
                count++;
            }
            maxs=max(maxs,count);
        }
        return maxs;
    }
};