
#include <iostream>
#include <string>
using namespace std;
int main()
{

	string name;
	float Salary ,Sale,Precent,A,P =0.0;

	cout << "Enter name :";
	cin >> name ;
	cout << "Enter Salary :";
	cin >> Salary;
	cout << "Enter Sale :";
	cin >> Sale;
	cout << "Enter Commission Precent :";
	cin >> Precent;
	
	
	P = (Sale*Precent)/100;
	A = P+ Salary;

	cout << "\nYour name :" << name << endl;
	cout << "Total Revenue :" << A << " Bath" << endl;
		
		system ("pause");
	cout << "Saranchai Siriwongtrakul" << endl;
		system ("pause");
		return 0;
}
