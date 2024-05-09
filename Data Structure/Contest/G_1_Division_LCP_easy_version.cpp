#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> calculate_LCP(const string& s) {
    int n = s.length();
    vector<int> lcp(n, 0);
    for (int i = 1; i < n; ++i) {
        int j = lcp[i - 1];
        while (j > 0 && s[i] != s[j]) {
            j = lcp[j - 1];
        }
        if (s[i] == s[j]) {
            j++;
        }
        lcp[i] = j;
    }
    return lcp;
}

vector<int> find_max_LCP(const string& s, int l, int r) {
    vector<int> max_lcp;
    vector<int> lcp = calculate_LCP(s);

    for (int i = l - 1; i < r; ++i) {
        max_lcp.push_back(lcp[i]);
    }

    return max_lcp;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        string s;
        cin >> s;
        vector<int> result = find_max_LCP(s, l, r);
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
