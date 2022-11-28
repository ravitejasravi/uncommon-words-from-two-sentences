class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        unordered_map<string, int> common;
        vector<string> result;

        CountString(common, s1);
        CountString(common, s2);

        for(auto i=common.begin(); i != common.end(); i++) 
            if(i -> second == 1)
                result.push_back(i -> first);

        return result;
    }

    void CountString(unordered_map<string, int> &common, string s1) {

        string word = "";

        for(int i = 0; i < s1.length(); i++) {
            if(s1[i] == ' '){ 
                common[word] += 1;
                word = "";
            }
            else
                word += s1[i];
        }
        common[word] += 1;

    } 
};