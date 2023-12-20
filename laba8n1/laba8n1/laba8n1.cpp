#include <iostream>
#include <string>
/*
 * Л/р 8 Строки
 * Пислегин Евгений Константинович ИВТ - 32
 * Дана строка. Преобразовать в ней
 * все прописные латинские буквы в строчные.
*/

using namespace std;

void change(string& str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = tolower(str[i]);
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