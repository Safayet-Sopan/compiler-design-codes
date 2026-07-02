#include <iostream>
#include <string>
using namespace std;

bool isIdentifier(string value) {
    if (value.length() == 0) return false;
    char first = value[0];
    if (!((first >= 'a' && first <= 'z') || (first >= 'A' && first <= 'Z') || first == '_'))
        return false;
    for (int i = 1; i < (int)value.length(); i++) {
        char ch = value[i];
        bool ok = (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
                  (ch >= '0' && ch <= '9') || ch == '_';
        if (!ok) return false;
    }
    return true;
}

bool isNumber(string value) {
    if (value.length() == 0) return false;
    for (int i = 0; i < (int)value.length(); i++) {
        if (!(value[i] >= '0' && value[i] <= '9')) return false;
    }
    return true;
}

bool isOperand(string value) {
    return isIdentifier(value) || isNumber(value);
}

bool hasValidAssignmentSyntax(string tokens[]) {
    if (!isIdentifier(tokens[0])) {
        cout << "Syntax error: expected identifier at start" << endl; return false;
    }
    if (tokens[1] != "=") {
        cout << "Syntax error: expected '=' after identifier" << endl; return false;
    }
    if (!isOperand(tokens[2])) {
        cout << "Syntax error: expected operand after '='" << endl; return false;
    }
    if (!(tokens[3]=="+"||tokens[3]=="-"||tokens[3]=="*"||tokens[3]=="/")) {
        cout << "Syntax error: expected an arithmetic operator" << endl; return false;
    }
    if (!isOperand(tokens[4])) {
        cout << "Syntax error: expected second operand" << endl; return false;
    }
    if (tokens[5] != ";") {
        cout << "Syntax error: expected ';' at end" << endl; return false;
    }
    return true;
}

int main() {
    string tokens[6];
    cout << "Enter 6 tokens separated by spaces (identifier = operand operator operand ;):" << endl;
    for (int i = 0; i < 6; i++) cin >> tokens[i];

    if (hasValidAssignmentSyntax(tokens))
        cout << "Syntax is valid" << endl;
    else
        cout << "Invalid assignment syntax" << endl;

    return 0;
}