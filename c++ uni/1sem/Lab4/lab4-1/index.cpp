// libraries
#include <iostream>
#include "windows.h"
#include <fstream>
#include <cstring>
using namespace std;


// function declaring
//
struct student
{
    char lastName[20];
    char firstName[20];
    int birth;
    int uniYear;
    int grades[5];
    float avg;
};

void avgGrade(student& s);

void sortStudents(student* students, int n);


int main()
{
	// main code
	//
    student students[100];
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    ofstream out("students.dat", ios::binary);
    for (int i=0; i<n; i++) 
    {
        cout << "Enter last name: ";
        cin >> students[i].lastName;
        cout << "Enter first name: ";
        cin >> students[i].firstName;
        cout << "Enter birth year: ";
        cin >> students[i].birth;
        cout << "Enter enrollment year: ";
        cin >> students[i].uniYear;
        cout << "Enter 5 grades: ";
        for (int j=0; j<5; j++) 
        {
            cin >> students[i].grades[j];
        }
        avgGrade(students[i]);
        out.write((char*)&students[i], sizeof(student));
    }
    out.close();

    sortStudents(students, n);

    ofstream sort("sort", ios::binary);
    for (int i=0; i<n; i++) 
    {
        sort.write((char*)&students[i], sizeof(student));
    }
    sort.close();

    cout << "Data is sorted and written to 'sort'.\n";


	// ending
	cout << endl;
	system("pause");
	return 0;
}


// function body
//
void avgGrade(student& s)
{
    int sum = 0;
    for (int i=0; i<5; i++) 
    {
        sum += s.grades[i];
    }
    s.avg = sum / 5.0;
}

void sortStudents(student* students, int n)
{
    for (int i=0; i<n-1; i++) 
    {
        for (int j=i+1; j<n; j++) 
        {
            if (strcmp(students[i].lastName, students[j].lastName) > 0) 
            {
                student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}