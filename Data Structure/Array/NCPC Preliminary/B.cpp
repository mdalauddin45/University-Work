#include<bits/stdc++.h>
using namespace std;
void process_queries(const vector<vector<string>>& test_cases) {
    for (int case_num = 0; case_num < test_cases.size(); ++case_num) {
        cout << "Case " << case_num + 1 << ":\n";
        vector<string> B;
        int X = 0;

        for (const string& query : test_cases[case_num]) {
            istringstream iss(query);
            string query_type;
            iss >> query_type;

            if (query_type == "1") {
                string S, f_str;
                int f;
                iss >> S >> f_str;
                f = stoi(f_str);
                for (char c : S) {
                    int char_count = c - 'a' + X;
                    char_count = (char_count % 26 + 26) % 26;  // Handling negative modulo
                    B.insert(B.end(), f, string(1, 'a' + char_count));
                }
            } else if (query_type == "2") {
                string S, f_str;
                int f;
                iss >> S >> f_str;
                f = stoi(f_str);
                vector<string> temp_B;
                while (f > 0 && !B.empty()) {
                    string current = B.front();
                    B.erase(B.begin());
                    int char_count = current[0] - 'a' + X;
                    char_count = (char_count % 26 + 26) % 26;  // Handling negative modulo
                    int current_count = current.size();
                    if (f >= current_count) {
                        f -= current_count;
                    } else {
                        temp_B.push_back(string(f, 'a' + char_count));
                        f = 0;
                    }
                }
                B.insert(B.end(), temp_B.begin(), temp_B.end());
            } else if (query_type == "3") {
                string S1, S2;
                iss >> S1 >> S2;
                S1[0] = (S1[0] - 'a' + X) % 26 + 'a';
                S2[0] = (S2[0] - 'a' + X) % 26 + 'a';
                sort(B.begin(), B.end());
                int count = count_if(B.begin(), B.end(), [&](const string& str) {
                    return S1[0] <= str[0] && str[0] <= S2[0];
                });
                cout << count << '\n';
                X = count;
            }
        }
    }
}

int main() {
    int T;
    cin >> T;
    vector<vector<string>> test_cases;

    for (int i = 0; i < T; ++i) {
        int Q;
        cin >> Q;
        vector<string> queries(Q);
        for (int j = 0; j < Q; ++j) {
            cin >> queries[j];
        }
        test_cases.push_back(queries);
    }
    process_queries(test_cases);

    return 0;
}
