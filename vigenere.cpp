#include <iostream>
#include <string>
using namespace std;

string Vigenere(const string& message, const string& key) {
    string Message;
    int keyLength = key.length();

    for (int i = 0; i < message.length(); ++i) {
        char currentChar = message[i];
        char keyChar = key[i % keyLength];
        char encryptedChar = ((currentChar + keyChar - 2 * 'A') % 26) + 'A';
        Message += encryptedChar;
    }

    return Message;
}

int main() {
    string message = "HELLO";
    string key = "KEY";

    string Message = Vigenere(message, key);
    cout << "Encrypted message: " << Message << endl;

    return 0;
}
