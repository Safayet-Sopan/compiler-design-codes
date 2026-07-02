#include <iostream>
#include <string>
using namespace std;

int main() {
    char statement[200];
    cin.getline(statement, 200);

    int i = 0;
    while (statement[i] != '\0') {
        char ch = statement[i];

        if (ch == ' ' || ch == '\t') { i++; continue; }

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch == '_') {
            string token = "";
            while ((statement[i] >= 'a' && statement[i] <= 'z') ||
                   (statement[i] >= 'A' && statement[i] <= 'Z') ||
                   (statement[i] >= '0' && statement[i] <= '9') ||
                   statement[i] == '_') {
                token += statement[i];
                i++;
            }
            cout << token << " -> IDENTIFIER" << endl;
        }
        else if (ch >= '0' && ch <= '9') {
            string token = "";
            while (statement[i] >= '0' && statement[i] <= '9') {
                token += statement[i];
                i++;
            }
            cout << token << " -> INTEGER_LITERAL" << endl;
        }
        else if (ch == '=') {
            cout << "= -> ASSIGNMENT_OPERATOR" << endl; i++;
        }
        else if (ch=='+'||ch=='-'||ch=='*'||ch=='/') {
            cout << ch << " -> ARITHMETIC_OPERATOR" << endl; i++;
        }
        else if (ch=='('||ch==')') {
            cout << ch << " -> PARENTHESIS" << endl; i++;
        }
        else if (ch==';') {
            cout << "; -> SEMICOLON" << endl; i++;
        }
        else {
            cout << "Lexical error at " << ch << endl; i++;
        }
    }
    return 0;
}