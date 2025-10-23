#ifndef HEADER_H
#define HEADER_H
#include <string>

class Human {
private:
	std::string m_surname;
	std::string m_name;
	std::string m_paternal;
	int m_id;
	static int m_idCount;
	static Human* s_array[100];
	static int s_arrayCount;
public:

	Human(std::string s, std::string n, std::string p);

	int getId();
	std::string getSurname();
	void print();

	static void findPerson(std::string surname);
	static void findPerson(int id);
};

#endif