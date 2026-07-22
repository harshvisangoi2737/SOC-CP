class Solution {
public:
    vector<string> ans;

    void solve(string &s, int index, int parts, string temp) {

        if (parts == 4 && index == s.size()) {
            temp.pop_back();
            ans.push_back(temp);
            return;
        }

        if (parts == 4)
            return;

        for (int len = 1; len <= 3; len++) {

            if (index + len > s.size())
                break;

            string part = s.substr(index, len);

            if (part.size() > 1 && part[0] == '0')
                continue;

            if (stoi(part) > 255)
                continue;

            solve(s, index + len, parts + 1,
                  temp + part + ".");
        }
    }

    vector<string> restoreIpAddresses(string s) {
        solve(s, 0, 0, "");
        return ans;
    }
};