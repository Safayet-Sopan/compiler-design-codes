#include <iostream>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    int count = 0;
    for (char ch : text) {
        if (ch != ' ') count++;
    }
    cout << "Character Count = " << count << endl;
    return 0;
}