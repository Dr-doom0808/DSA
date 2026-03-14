class Solution {
public:
    void generate(int n, string current, vector<string>& result) {
        if(current.length() == n){
            result.push_back(current);
            return;
        }

        for(char c : {'a','b','c'}){
            if(current.empty() || current.back() != c){
                generate(n, current + c, result);
            }
        }
    }

    string getHappyString(int n, int k) {
        vector<string> result;
        generate(n, "", result);

        if(k > result.size())
            return "";

        return result[k-1];
    }
};