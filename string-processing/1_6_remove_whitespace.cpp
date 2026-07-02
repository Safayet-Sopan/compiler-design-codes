#include <iostream>
using namespace std;

int main() {
    string text, result;
    getline(cin, text);
    for (char ch : text) {
        if (ch != ' ') result += ch;
    }
    cout << result << endl;
    return 0;
}