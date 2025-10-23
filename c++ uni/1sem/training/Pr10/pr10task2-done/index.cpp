// libraries
#include <iostream>
#include "windows.h"
#include <cmath>
#include <string>
using namespace std;


// function declaring
//
struct student
{
	int group;
	string firstname;
	string lastname;
	string speciality;
	bool budget;
	double averageNote;
};


int main()
{
	// main code
	//
	cout << "Student with average note higher than 7:" << endl;

	student array[4] =
	{
		{3,"Danial", "Ken", "Computer Science", true, 9.1},
		{1, "Anna", "Petrenko", "Litherature", false, 6.9},
		{4, "Ivan", "Vasylenko", "Chemistry", true, 5.5},
		{2, "Kate", "Smith", "Psychology", true, 7.1}
	};

	int k = 1;

	for (int i = 0; i < 4; ++i)
	{
		if (array[i].averageNote > 7) {
			cout << k << ". " << array[i].firstname << " " << array[i].lastname << endl;
			k++;
		}
	}


	// ending
	cout << endl;
	system("pause");
	return 0;
}


// function body
//

//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Student {
//    int groupNumber;
//    string firstName;
//    string lastName;
//    string specialty;
//    bool isPayer; // true для платника, false для державника
//    double averageGrade;
//};
//
//int main() {
//    Student students[] = {
//        {101, "Ivan", "Petrenko", "Computer Science", true, 8.2},
//        {102, "Olha", "Shevchenko", "Mathematics", false, 7.5},
//        {103, "Andriy", "Koval", "Physics", true, 7.1},
//        {104, "Daria", "Kryvonos", "Engineering", true, 6.8},
//        {105, "Larysa", "Tymchuk", "Biology", false, 8.7}
//    };
//
//    int n = 5;
//
//    cout << "Payers with average grade > 7:\n";
//    for (int i = 0; i < n; ++i) {
//        if (students[i].isPayer && students[i].averageGrade > 7.0) {
//            cout << students[i].firstName << " " << students[i].lastName << " (Group: "
//                << students[i].groupNumber << ", Specialty: " << students[i].specialty
//                << ", Grade: " << students[i].averageGrade << ")\n";
//        }
//    }
//
//    return 0;
//}