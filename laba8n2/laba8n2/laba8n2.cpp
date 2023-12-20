#include <string>
#include <iostream>

/*
 * Л/р 8 Строки
 * Пислегин Евгений Константинович ИВТ - 32
 * Дана строка-предложение на английском языке.
 * Преобразовать строку так, чтобы каждое слово
 * начиналось с заглавной буквы. Словом считать 
 * набор символов, не содержащий пробелов и ограниченный
 * пробелами или началом/концом строки.
 * Слова, не начинающиеся с буквы, не изменять.
*/

using namespace std;

void change(string& str)
{
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = toupper(str[0]);
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' || isspace(str[i]))
        {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                str[i+1] = toupper(str[i+1]);
            }
        }
    }
}

int main()
{
    string str;
    getline(cin, str);
    change(str);
    cout << str;
}
