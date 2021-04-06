#include<iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable guests[2]
	{
		{"Bumbi", 0.5f, 21.99},
		{"Godzila", 2000.0f, 565.99} 
	};
	cout << "The guests " << guests[0].name << " and " << guests[1].name 
		<< "\nhave a combined volume of "
		<< guests[0].volume + guests[1].volume << " cubic feet.\n";
	return 0;
}