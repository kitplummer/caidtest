// Caiden Plummer - Project2 - LU: 9/18/18 16:08

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	int id, i;
	string name, employeetype;
	double salary, raz, newsalary;
	char rating;
	ifstream inf;
	ofstream outf;
	inf.open("project2.dat");
	outf.open("project1.ot");
	outf.setf(ios::fixed);
	outf.precision(2);
	outf << "Employee Rating/Raise Chart, September 2018" << endl << endl << "id" << setw(10) << "Name" << setw(17) << "Employee Type" << setw(10)  << "Salary" << setw(15) << "Rating" << setw(10) << "Raise" << setw(15) << "New Salary" << endl;

	for (i = 0; i < 79; i++) outf << "-";
	outf << endl;

	for (i = 1; i <= 14; i++)
	{
		inf >> id >> name >> employeetype >> salary >> rating;

		if (employeetype == "Staff")
		{
			if (rating == 'F')
				raz = 0;
			else if (rating == 'G')
				raz = 0.015;
			else
				raz = 0.03;
		}
		else if (employeetype == "Faculty")
		{
			if (rating == 'F')
				raz = 0.01;
			else if (rating == 'G')
				raz = 0.02;
			else
				raz = 0.04;
		}
		else if (employeetype == "Management")
		{
			if (rating == 'G')
				raz = 0.25;
			else
				raz = 0.04;
		}

		newsalary = (salary * raz) + salary;

		outf << left << setw(7) << id << setw(10) << name << setw(15) << employeetype << setw(18) << salary << setw(10) << rating << setw(10) << raz << setw(10) << endl;
	}
}
