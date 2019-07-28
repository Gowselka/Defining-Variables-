//Kevin Gowsell
//CIS 1111 Sinclair Community College
//1-20-2019

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string studentName = "Kevin Gowsell";
	string studentMajor = "Computer Software Development";
	int creditHours = 9;
	double creditHourTuitionRate = 146.28;

	cout << "My name is "<<studentName<<endl;
	cout << "My major is "<<studentMajor<<endl;
	cout << "I'm taking "<<creditHours<<" credit hours"<<endl;
	cout << "I'm paying "<<creditHourTuitionRate<<" per credit hour"<<endl;

	system("pause");
	return 0;
}