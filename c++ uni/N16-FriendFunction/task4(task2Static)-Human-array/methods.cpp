#include "headers.h"
#include <iostream>

int Human::m_idCount = 0;
Human* Human::s_array[100];
int Human::s_arrayCount = 0;

Human::Human(std::string s, std::string n, std::string p) : 
	m_surname(s), m_name(n), m_paternal(p), m_id(++m_idCount) {
	s_array[s_arrayCount] = this;
	++s_arrayCount;
};

int Human::getId() { return m_id; }
std::string Human::getSurname() { return m_surname; }
void Human::print() {
	std::cout << m_surname << " " << m_name << " " << m_paternal << std::endl;
}

void Human::findPerson(std::string surname) {
	for (int iii = 0; iii < s_arrayCount; ++iii) {
		if (s_array[iii]->getSurname() == surname) {
			s_array[iii]->print();
			return;
		}
	}std::cout << "There`s no person with such surname :(" << std::endl;
}
void Human::findPerson(int id) {
	for (int iii = 0; iii < s_arrayCount; ++iii) {
		if (s_array[iii]->getId() == id) {
			s_array[iii]->print();
			return;
		}
	}
	std::cout << "There`s no person with such ID :(" << std::endl;
}