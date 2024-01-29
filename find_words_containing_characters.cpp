#include <iostream>
#include <vector>

using namespace std;

vector<int> findWordsContaining(string word[], int n, char x) {
    vector<int> indices;

    for (int i = 0; i < n; i++) {
        if (word[i].find(x) != string::npos) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    int n;
    char target;
    cin >> n;
    cin >> target;

    string word[n];
    for (int i = 0; i < n; i++) {
        cin >> word[i];
    }

    vector<int> arr = findWordsContaining(word, n, target);

    cout << "Indices of words containing '" << target << "': ";
    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}
