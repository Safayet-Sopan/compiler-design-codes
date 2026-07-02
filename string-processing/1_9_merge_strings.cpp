#include <iostream>
using namespace std;

int main() {
    string word;
    string result = "";
    bool first = true;

    while (cin >> word) {
        if (!first) {
            result += " ";
        }
        result += word;
        first = false;
    }

    cout << result << endl;
    return 0;
}