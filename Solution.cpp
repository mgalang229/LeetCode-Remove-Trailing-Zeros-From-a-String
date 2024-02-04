class Solution {
public:
    string removeTrailingZeros(string num) {
        int n = num.size();
        int stop = n;
        for (int i = n - 1; i >= 0; i--) {
            if (num[i] != '0') {
                stop = i;
                break;
            }
        }
        string ans = "";
        for (int i = 0; i <= stop; i++) {
            ans += num[i];
        }
        return ans;
    }
};
