#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> multiply(const vector<vector<int>>& key, const vector<vector<int>>& text) {
    int rows = key.size(), cols = text[0].size();
    vector<vector<int>> result(rows, vector<int>(cols, 0));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < 2; k++) {
                result[i][j] += key[i][k] * text[k][j];
            }
            result[i][j] %= 26;
        }
    }
    return result;
}

string encrypt(const string& s, const vector<vector<int>>& key) {
    string text = s;
    if (text.length() % 2 != 0) text += 'x';

    int n = text.length() / 2;
    vector<vector<int>> arr(2, vector<int>(n));

    for (int i = 0; i < n; i++) {
        arr[0][i] = text[2 * i] - 'a';
        arr[1][i] = text[2 * i + 1] - 'a';
    }

    vector<vector<int>> encrypted = multiply(key, arr);
    
    string cipherText;
    for (int i = 0; i < n; i++) {
        cipherText += (char)(encrypted[0][i] + 'a');
        cipherText += (char)(encrypted[1][i] + 'a');
    }
    return cipherText;
}

int main() {
    vector<vector<int>> key(2, vector<int>(2));
    string text;

    cout << "Enter 2x2 key matrix (4 numbers):\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> key[i][j];

    cout << "Enter text to encrypt: ";
    cin >> text;

    cout << "Encrypted text: " << encrypt(text, key) << endl;

    return 0;
}
