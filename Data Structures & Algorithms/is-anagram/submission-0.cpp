class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;

        }
        unordered_map<char,int>map1;
        for(char c : s){
            map1[c]++;
        }
        for(char c : t){
            if(map1[c]==0)
            return false;
            map1[c]--;
        }
        return true;
        
    }
};
