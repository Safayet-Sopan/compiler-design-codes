#include <iostream>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    int vowels = 0, consonants = 0, digits = 0;

    for (char ch : text) {
        char lower = ch;
        if (ch >= 'A' && ch <= 'Z') {
            lower = ch + 32;
        }

        if (lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u') {
            vowels++;
        }
        else if ((lower >= 'a' && lower <= 'z')) {
            consonants++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
    }

    cout << "Vowels = " << vowels << ", Consonants = " << consonants
         << ", Digits = " << digits << endl;
    return 0;
}