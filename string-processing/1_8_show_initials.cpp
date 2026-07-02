#include <iostream>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    string initials = "";
    bool newWord = true;

    for (char ch : text) {
        if (ch == ' ') {
            newWord = true;
        } else {
            if (newWord) {
                if (ch >= 'a' && ch <= 'z') {
                    ch = ch - 32;
                }
                initials += ch;
                newWord = false;
            }
        }
    }

    cout << initials << endl;
    return 0;
}