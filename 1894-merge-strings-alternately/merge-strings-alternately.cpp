class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int intWord1 = word1.length();
        int intWord2 = word2.length();

        int max = std::max(intWord1, intWord2);
        string merge = "";

        for(int i = 0; i < max; i++){
            if(i < intWord1){
                merge += word1[i];
            }
            
            if(i < intWord2){
                merge += word2[i];
            }
        }

        return merge;
    }
};