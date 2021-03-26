// getinfо. срр — ввод и вывод
#include<iostream>
int main()
{
	using namespace std;
	int carrots;
	cout << "How many carrots do you have?" << endl;
	cin >> carrots; // ввод С++
	cout << "Here are two more. ";
	carrots = carrots + 2;
	// следующая строка выполняет конкатенацию вывода
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}
