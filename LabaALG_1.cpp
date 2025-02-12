#include <iostream>
#include <set>
#include <string>

using namespace std;

void printset(set <char> S) {
    cout << "Найденные символы: ";
    for (char ch : S) {
        cout << ch << "  ";
    }
    return;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    string promt;
    set <char> S;
    
    cout << "Введите НЕПУСТУЮ строку (БЕЗ ПРОБЕЛОВ): ";
    getline(cin, promt);
    if (promt.empty()) { cout << "Вы ввели пустую строку!!" << endl; return -1; }
    else {
        for (char ch : promt) {
            if (isspace(ch)) { cout << "В строке был встречен пробел!!";  return -1; }
        } 
    }

    for (char ch : promt) {
        if ((ch == '+' || ch == '*' || ch == '-' || ch == '%' || ch == '/') || (ch >= 'E' && ch <= 'N') || (ch >= 'e' && ch <= 'n')) {
            S.insert(ch);
        }
    }

    printset(S);

    return 0;
}
