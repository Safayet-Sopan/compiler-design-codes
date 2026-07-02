#include <iostream>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    for (char &ch : text) {
        if (isupper(ch)) {
            ch = 'A' + (ch - 'A' + 3) % 26;
        }
        else if (islower(ch)) {
            ch = 'a' + (ch - 'a' + 3) % 26;
        }
    }
    cout << text << endl;
    return 0;
}