#include <iostream>
#include <string>
using namespace std;

char normalChar[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char codedChar[] = {'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'Z', 'X', 'C', 'V', 'B', 'N', 'M'};

string encrypt(const string &s) {
string encrypted = "";
for (char c : s) {
if (c >= 'a' && c <= 'z') {
encrypted += codedChar[c - 'a'];
} else {
encrypted += c;
}
}
return encrypted;
}

string decrypt(const string &s) {
string decrypted = "";
for (char c : s) {
if (c >= 'A' && c <= 'Z') {
for (int i = 0; i < 26; i++) {
if (c == codedChar[i]) {
decrypted += normalChar[i];
break;
}
}
} else {
decrypted += c;
}
}
return decrypted;
}

int main() {
string str;
cout << "Enter plain text : ";
getline(cin, str);

string encrypted = encrypt(str);
cout << "Encrypted text: " << encrypted << endl;

string decrypted = decrypt(encrypted);
cout << "Decrypted text: " << decrypted << endl;

return 0;
}
