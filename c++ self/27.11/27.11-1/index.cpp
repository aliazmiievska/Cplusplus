#include <iostream>
#include <fstream>
using namespace std;

int maіn() {
	ofstream out ("my.txt");
	if (!out) {
		cout << "Неможливо відкрити файл для виведення.\n";
		return 1;
	}
	char str[80];
	cout << "Запис рядків на жорсткий диск. Для припинення роботи введіть знак оклику.\n";
	do {
		cout << ": ";
		cin >> str;
		out << str << endl;
	} while (*str != '!');
	out.close();
	return 0;
}