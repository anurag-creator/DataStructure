class Solution {
public:
    string sortSentence(string s) {
         if( s.empty() ) return "";
        istringstream str_(s);
        string word;
        vector<pair<int,string>> vpr;
        while( str_ >> word ){
            int priority = word[word.length()-1];
            word = word.substr(0, word.length()-1);
            vpr.push_back({priority, word});
        } std::sort(vpr.begin(), vpr.end());
        string res;
        for(auto& pr : vpr){
            res += pr.second + ' ';
        } return res.substr(0, res.length()-1);
    }
};