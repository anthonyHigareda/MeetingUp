/****************************************
 *  CSC2210 003
 *  Dr. Hasker
 *  Fall 2025
 *
 *  Anthony Higareda, Jr.
 *  Created 9 Oct 2025
 *
 *  pool.cpp
 ****************************************/

#include "pool.h"
#include <string>

using namespace std;

Student::Student(string name) {}
Student::Student(string name, int birthdate) {}

string Student::printableDescription() { return "Student"; }
bool Student::matches(Student *otherStu) { return false; }



Pool::Pool() {}
Pool::Pool(string studentName, int studentBirthdate) {}

void Pool::add(string s) {}
void Pool::add(string s, int n) {}
void Pool::readStudents() {}
void Pool::printMatches(Student *stu) {}
void Pool::printMatches(Pool *otherPool) {}
bool Pool::empty() { return false; }
