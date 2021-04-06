#include<iostream>

int main()
{
	using namespace std;
	int donuts = 6;
	double cups = 4.5;

	cout << "donuts value = " << donuts;
	cout << " and donuts adress = " << &donuts << endl;

	cout << "cups value = " << cups;
	cout << " and cups adress = " << &cups << endl; 
	return 0;
}