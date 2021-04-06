#include<iostream>

int main()
{
	char CTOR[30];
	using namespace std;
	int higgens = 5;
	int* pt = &higgens;

	cout << "Value of higgens = " << higgens
		<< "; Adress of higgens = " << &higgens << endl;
	cout << "Value of *pt= " << *pt
		<< "; Adress of *pt= " << pt << endl;
	return 0;
}