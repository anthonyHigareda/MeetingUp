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

Student::Student(string name, int birthdate) {
  this -> name = name;
  this -> birthdate = birthdate;
}

string Student::printableDescription() const {
  if (birthdate > 0) {
    return name + " born on day " + to_string(birthdate);
  } else {
    return name;
  }
}

bool Student::matches(Student *otherStu) const {
  if (this -> birthdate != 0 && otherStu->birthdate == this -> birthdate) {
    return true;
  }
  for (char letter : this -> name) {
    if (otherStu -> name.find(letter) != string::npos && letter != '_') {
      return true;
    }
  }
  return false;
}

Pool::Pool() {}

Pool::Pool(string studentName, int studentBirthdate) {
  Student *newStu = new Student(studentName, studentBirthdate);
  studentsInPool[this -> numStudents++] = newStu;
}

void Pool::add(string s) {
  if (numStudents < 20) {
    studentsInPool[this -> numStudents++] = new Student(s);
  }
}

void Pool::add(string s, int n) {
  if (numStudents < 20) {
    studentsInPool[this -> numStudents++] = new Student(s, n);
  }
}

void Pool::readStudents() {
  string studentName;
  int studentBirthdate;
  cin >> studentName >> studentBirthdate;
  while (cin && studentName != "END") {
    add(studentName, studentBirthdate);
  }
}
void Pool::printMatches(Student *stu) {}
void Pool::printMatches(Pool *otherPool) {}
bool Pool::empty() { return false; }
