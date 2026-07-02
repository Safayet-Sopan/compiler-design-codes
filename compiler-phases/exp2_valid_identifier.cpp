#include <iostream>
#include <string>
using namespace std;

bool isKeyword(string word) {
    string keywords[] = {"int","float","double","char","bool","class","return",
        "if","else","for","while","void","string","true","false"};
    int total = 16;
    for (int i = 0; i < total; i++) {
        if (word == keywords[i]) return true;
    }
    return false;
}

bool isValidIdentifier(string name) {
    if (name.length() == 0) {
        cout << "Invalid: empty name" << endl; return false;
    }

    char first = name[0];
    bool firstOk = (first >= 'a' && first <= 'z') || (first >= 'A' && first <= 'Z') || first == '_';
    if (!firstOk) {
        cout << "Invalid: the first character cannot be a digit" << endl; return false;
    }

    for (int i = 1; i < (int)name.length(); i++) {
        char ch = name[i];
        bool ok = (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
                  (ch >= '0' && ch <= '9') || ch == '_';
        if (!ok) {
            cout << "Invalid: contains an illegal character" << endl; return false;
        }
    }

    if (isKeyword(name)) {
        cout << "Invalid: reserved keyword" << endl; return false;
    }

    cout << "Valid variable name" << endl;
    return true;
}

int main() {
    string name;
    getline(cin, name);
    isValidIdentifier(name);
    return 0;
}