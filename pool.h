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
  string getName() const;
  int getBirthdate() const;

private:
  string replaceUnderscores(string s);
  string name;
  int birthdate;
};

class Pool {
public:
  Pool();
  Pool(string studentName, int studentBirthdate = 0);

  void add(string n, int b = 0);
  void readStudents();
  void printMatches(Student *stu);
  void printMatches(Pool *otherPool);
  bool empty() const;

private:
  int numStudents = 0;
  Student *studentsInPool[20];
};

#endif //MEETINGUP_POOL_H