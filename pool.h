/****************************************
 *  CSC2210 003
 *  Dr. Hasker
 *  Fall 2025
 *
 *  Anthony Higareda, Jr.
 *  Created 9 Oct 2025
 *
 *  pool.h
 *  Header file for pool.cpp
 ****************************************/

#ifndef MEETINGUP_POOL_H
#define MEETINGUP_POOL_H

#include <string>

using namespace std;

class Student {
public:
  Student(string name);
  Student(string name, int birthdate);

  string printableDescription();
  bool matches(Student *otherStu);
};

class Pool {
public:
  Pool();
  Pool(string studentName, int studentBirthdate = 0);

  void add(string s);
  void add(string s, int n);
  void readStudents();
  void printMatches(Student *stu);
  void printMatches(Pool *otherPool);
  bool empty();
};

#endif //MEETINGUP_POOL_H