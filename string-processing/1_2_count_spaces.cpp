#include <iostream>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    int spaces = 0;
    for (char ch : text) {
        if (ch == ' ') spaces++;
    }
    cout << "Spaces = " << spaces << endl;
    return 0;
}