#include <iostream>
#include <set>
#include <string>
#include <Windows.h>

using namespace std;

void printset(set <char> S) {
    cout << "Найденные символы: ";
    for (char ch : S) {
        cout << ch << "  ";
    }
    cout << "\nКоличество элементов: " << S.size();
    return;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    string promt;
    set <char> S;
    
    cout << "Введите НЕПУСТУЮ строку (БЕЗ ПРОБЕЛОВ И КИРИЛЛИЦЫ - ОНИ ЛОМАЮТ МНЕ ЖИЗНЬ!!!): ";
    getline(cin, promt);
    if (promt.empty()) { cout << "Вы ввели пустую строку!!\n"; return -1; }
    else {
        for (char ch : promt) {
            if ((isspace(ch)) || (ch >= 'А' && ch <= 'Я' || ch >= 'а' && ch <= 'я')) { cout << "В строке был встречен пробел или кириллица!!";  return -1; }
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
