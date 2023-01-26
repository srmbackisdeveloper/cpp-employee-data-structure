#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

struct Worker // Structure description
{
	string name;
	int age;
	string surname;

	string gender;
	string address;
	string specialist;
};

int main()
{
	// For cyrillic characters use
	// setlocale(LC_ALL, "Russian");

	int const n = 10; // Number of records

	Worker COMPANY[n];
	Worker change;

	int i, j;

	for (i = 0; i < n; i++) // Entering data
	{
		cout << "Name: ";
		cin >> COMPANY[i].name;

		cout << "Age: ";
		cin >> COMPANY[i].age;

		cout << "Surname: ";
		cin >> COMPANY[i].surname;

		cout << "Gender: ";
		cin >> COMPANY[i].gender;

		cout << "Address: ";
		cin >> COMPANY[i].address;

		cout << "Current position: ";
		cin >> COMPANY[i].specialist;

		cout << endl;
	}


	for (i = 0; i < n; i++) // Sorting
		for (j = 0; j < n - 1; j++)
			if (COMPANY[j + 1].age < COMPANY[j].age)
			{
				change.name = COMPANY[j].name;
				COMPANY[j].name = COMPANY[j + 1].name;
				COMPANY[j + 1].name = change.name;

				COMPANY[j].age = COMPANY[j].age - COMPANY[j + 1].age;
				COMPANY[j + 1].age = COMPANY[j + 1].age + COMPANY[j].age;
				COMPANY[j].age = COMPANY[j + 1].age - COMPANY[j].age;

				change.surname = COMPANY[j].surname;
				COMPANY[j].surname = COMPANY[j + 1].surname;
				COMPANY[j + 1].surname = change.surname;



				change.gender = COMPANY[j].gender;
				COMPANY[j].gender = COMPANY[j + 1].gender;
				COMPANY[j + 1].gender = change.gender;

				change.address = COMPANY[j].address;
				COMPANY[j].address = COMPANY[j + 1].address;
				COMPANY[j + 1].address = change.address;

				change.specialist = COMPANY[j].specialist;
				COMPANY[j].specialist = COMPANY[j + 1].specialist;
				COMPANY[j + 1].specialist = change.specialist;

			}

	cout << endl << endl;
	cout << setw(15) << "Name" << setw(15) << "Age" << setw(15) << "Surname" << setw(15) << "Gender" << setw(15) << "Address" << setw(15) << "Current position" << endl;




	cout << "____________________________________________________________________________________________" << endl;
	for (i = 0; i < n; i++)
		cout << setw(15) << COMPANY[i].name << setw(15) << COMPANY[i].age << setw(15) << COMPANY[i].surname << setw(15) << COMPANY[i].gender << setw(15) << COMPANY[i].address << setw(15) << COMPANY[i].specialist << endl;
	cout << endl << endl;
	cout << "Enter a request by 'Current position': " << endl;
	cin >> change.specialist; // Entering a request
	cout << endl << endl;
	j = 0;

	for (i = 0; i < n; i++)
	{
		if (change.specialist == COMPANY[i].specialist)
		{
			j++;
			if (j == 1) // Colum names output (only 1 time)
			{
				cout << setw(15) << "Name " << setw(15) << "Age " << setw(15) << "Surname " << setw(15) << "Gender " << setw(15) << "Address " << setw(15) << "Current position " << endl;
				cout << "____________________________________________________________________________________________" << endl;
			}




			cout << setw(15) << COMPANY[i].name << setw(15) << COMPANY[i].age << setw(15) << COMPANY[i].surname << setw(15) << COMPANY[i].gender << setw(15) << COMPANY[i].address << setw(15) << COMPANY[i].specialist << endl; //Вывод рейсов по запросу
		}
	}


	if (j == 0)	// If no employees are found on request
	{
		cout << "There are no such employees!";
	}

	cout << endl << endl;
	cout << "____________________________________________________________________________________________" << endl;
	cout << "The oldest employee: " << endl;

	int max;

	max = COMPANY[0].age;

	for (i = 0; i < n; i++)

	{

		if (COMPANY[i].age > max)

			max = COMPANY[i].age;

	}


	for (i = 0; i < n; i++)

	{

		if (COMPANY[i].age == max)

		{

			cout << "| Name : " << COMPANY[i].name << "  |  Age : " << COMPANY[i].age << " |" << endl;
			cout << "____________________________________________________________________________________________" << endl;


		}
	}

	cout << endl << endl;
	cout << "____________________________________________________________________________________________" << endl;
	cout << "Average age of employees: " << endl;
	cout << (COMPANY[0].age + COMPANY[1].age + COMPANY[2].age + COMPANY[3].age + COMPANY[4].age + COMPANY[5].age + COMPANY[6].age + COMPANY[7].age + COMPANY[8].age + COMPANY[9].age) / 10;
	cout << endl;
	cout << "____________________________________________________________________________________________" << endl;

}
