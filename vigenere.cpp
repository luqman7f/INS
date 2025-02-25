#include <bits/stdc++.h>
using namespace std;
int main() {
    char val[26][26];
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            val[i][j] = (i + j) % 26 + 'a';
        }
    }
    string pt = "code";
    string key = "pass";
    string ck = "";
    for (int i = 0; i < pt.size(); i++) {
        ck += val[pt[i] - 'a'][key[i % key.size()] - 'a'];
    }
    cout << "Vigenère Cipher Encrypted: " << ck << endl;
    return 0;
}