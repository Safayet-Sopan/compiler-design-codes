#include <iostream>
#include <string>
using namespace std;

string names[4] = {"count", "price", "total", "active"};
string types[4] = {"int", "float", "float", "bool"};

string getType(string varName) {
    for (int i = 0; i < 4; i++) {
        if (names[i] == varName) return types[i];
    }
    return "undeclared";
}

string findResultType(string type1, string type2) {
    if (type1=="bool" || type2=="bool") return "error";
    if (type1=="float" || type2=="float") return "float";
    return "int";
}

bool checkAssignment(string variableType, string resultType) {
    if (resultType == "error") return false;
    if (variableType == resultType) return true;
    if (variableType=="float" && resultType=="int") return true;
    return false;
}

int main() {
    string leftVar, op1, arithOp, op2;
    cout << "Enter: leftVar op1 arithOp op2  (e.g. total price + count)" << endl;
    cin >> leftVar >> op1 >> arithOp >> op2;

    string varType = getType(leftVar);
    string type1 = getType(op1);
    string type2 = getType(op2);

    if (varType=="undeclared" || type1=="undeclared" || type2=="undeclared") {
        cout << "Semantic error: undeclared identifier" << endl;
        return 0;
    }

    if (type1=="bool" || type2=="bool") {
        cout << "Semantic error: bool cannot be used with '" << arithOp << "'" << endl;
        return 0;
    }

    string resultType = findResultType(type1, type2);

    if (checkAssignment(varType, resultType))
        cout << "Semantically valid; expression type is " << resultType << endl;
    else
        cout << "Semantic error: cannot assign " << resultType << " result to " << varType << endl;

    return 0;
}