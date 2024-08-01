class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> stringOne(s.begin(), s.end());
        vector<char> stringTwo(t.begin(), t.end());

        sort(stringOne.begin(), stringOne.end());
        sort(stringTwo.begin(), stringTwo.end());

        if(stringOne == stringTwo){
            return true;
        }else{
            return false;
        }
    }
};