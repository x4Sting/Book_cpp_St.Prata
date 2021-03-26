//carrots.cpp -- программа по технологии производства пищевых продуктов 
// использует и отображает переменную 

#include <iostream>

int main()
{
	using namespace std;

	int carrots; // обявление переменной целочисленного типа

	carrots = 25; // присваивание значения переменной
	cout << "I have ";
	cout << carrots;
	cout << " carrots";
	cout << endl;
	carrots = carrots - 1;
	cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
	return 0;
}