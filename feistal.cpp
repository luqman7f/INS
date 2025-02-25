#include <iostream>
#include <vector>

using namespace std;

unsigned int roundFunction(unsigned int halfBlock, unsigned int key) {
    return halfBlock ^ key;
}

pair<unsigned int, unsigned int> feistelEncrypt(unsigned int left, unsigned int right, vector<unsigned int> keys, int rounds) {
    for (int i = 0; i < rounds; i++) {
        unsigned int temp = right;
        right = left ^ roundFunction(right, keys[i]);
        left = temp;
    }
    return {left, right};
}

pair<unsigned int, unsigned int> feistelDecrypt(unsigned int left, unsigned int right, vector<unsigned int> keys, int rounds) {
    for (int i = rounds - 1; i >= 0; i--) {
        unsigned int temp = left;
        left = right ^ roundFunction(left, keys[i]);
        right = temp;
    }
    return {left, right};
}

int main() {
    unsigned int left = 0x1234, right = 0xABCD;
    vector<unsigned int> keys = {0x1111, 0x2222, 0x3333, 0x4444};
    int rounds = keys.size();

    cout << "Original: L=" << hex << left << " R=" << hex << right << endl;

    auto encrypted = feistelEncrypt(left, right, keys, rounds);
    cout << "Encrypted: L=" << hex << encrypted.first << " R=" << hex << encrypted.second << endl;

    auto decrypted = feistelDecrypt(encrypted.first, encrypted.second, keys, rounds);
    cout << "Decrypted: L=" << hex << decrypted.first << " R=" << hex << decrypted.second << endl;

    return 0;
}