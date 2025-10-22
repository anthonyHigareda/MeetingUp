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

#include <algorithm>
#include <string>

using namespace std;

Student::Student(string name, int birthdate) {
  this -> name = replaceUnderscores(name);
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
  if (birthdate != 0 && otherStu -> getBirthdate() == birthdate) {
    return true;
  }
  for (char letter : name) {
    if (letter != ' ') {
      if (otherStu -> getName().find(tolower(letter)) != string::npos ||
          otherStu -> getName().find(toupper(letter)) != string::npos) {
        return true;
      }
    }
  }
  return false;
}

string Student::getName() const {
  return name;
}

int Student::getBirthdate() const {
  return birthdate;
}

string Student::replaceUnderscores(string s) {
  while (s.find('_') != string::npos) {
    s[s.find('_')] = ' ';
  }
  return s;
}

Pool::Pool() {}

Pool::Pool(string studentName, int studentBirthdate) {
  add(studentName, studentBirthdate);
}

void Pool::add(string n, int b) {
  if (numStudents < 20) {
    studentsInPool[numStudents++] = new Student(n, b);
  }
}

void Pool::readStudents() {
  string studentName;
  int studentBirthdate;
  cin >> studentName >> studentBirthdate;
  while (cin && studentName != "END") {
    add(studentName, studentBirthdate);
    cin >> studentName >> studentBirthdate;
  }
}
void Pool::printMatches(Student *stu) {
  for (int i = 0; i < numStudents; i++) {
    if (stu -> matches(studentsInPool[i])) {
      cout << "A perfect match for " <<  stu -> printableDescription() << ": "
        << studentsInPool[i] -> printableDescription() << endl;
    }
  }
}
void Pool::printMatches(Pool *otherPool) {
  for (int i = 0; i < numStudents; i++) {
    otherPool -> printMatches(studentsInPool[i]);
  }
}
bool Pool::empty() const {
  return numStudents == 0;
}
