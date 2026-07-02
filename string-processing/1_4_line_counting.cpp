#include <iostream>
using namespace std;

int main() {
    string line;
    int count = 0;
    while (true) {
        getline(cin, line);
        if (line == "`") break;
        count++;
    }
    cout << "Total Lines = " << count << endl;
    return 0;
}