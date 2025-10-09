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

#include <string>

using namespace std;

class Student {
public:
  Student(string name) {}
  Student(string name, int birthdate) {}

  string printableDescription() { return "Student"; }
  bool matches(Student *otherStu) { return false; }
};

class Pool {
public:
  Pool() {}
  Pool(string studentName, int studentBirthdate) {}

  void add(string s) {}
  void add(string s, int n) {}
  void readStudents() {}
  void printMatches(Student *stu) {}
  void printMatches(Pool *otherPool) {}
  bool empty() { return false; }
};