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

#include <iostream>
#include <string>

using namespace std;

class Student {
public:
  Student(string name, int birthdate = 0);
  string printableDescription() const;
  bool matches(Student *otherStu) const;

private:
  string name;
  int birthdate;
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

private:
  Student *studentsInPool[20];
  int numStudents = 0;
};

#endif //MEETINGUP_POOL_H