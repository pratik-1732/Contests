#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<int>> find_permutation(int T, vector<pair<int, vector<int>>> test_cases) {
    vector<vector<int>> results;
    for (int t = 0; t < T; ++t) {
        int N = test_cases[t].first;
        vector<int>& A = test_cases[t].second;

        unordered_map<int, int> occurrence_count;
        for (int num : A) {
            occurrence_count[num]++;
        }

        vector<int> sorted_keys;
        for (auto it = occurrence_count.begin(); it != occurrence_count.end(); ++it) {
            sorted_keys.push_back(it->first);
        }
        sort(sorted_keys.begin(), sorted_keys.end(), [&](int a, int b) {
            return occurrence_count[a] < occurrence_count[b];
        });

        vector<int> permutation;
        for (int key : sorted_keys) {
            permutation.push_back(key);
        }

        // Shuffle the permutation to satisfy the condition
        random_shuffle(permutation.begin(), permutation.end());

        results.push_back(permutation);
    }
    return results;
}

int main() {
    int T;
    cin >> T;
    vector<pair<int, vector<int>>> test_cases(T);
    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        vector<int> A(2 * N);
        for (int i = 0; i < 2 * N; ++i) {
            cin >> A[i];
        }
        test_cases[t] = make_pair(N, A);
    }

    vector<vector<int>> results = find_permutation(T, test_cases);
    for (const auto& permutation : results) {
        for (int i = 0; i < permutation.size(); ++i) {
            cout << permutation[i];
            if (i != permutation.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
