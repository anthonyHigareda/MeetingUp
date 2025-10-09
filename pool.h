//
// Created by higaredajra on 10/9/2025.
//

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
  Pool(string studentName, string studentBirthdate);

  void add(string s);
  void add(string s, int n);
  void readStudents();
  void printMatches(Student *stu);
  void printMatches(Pool *otherPool);
  bool empty();
};

#endif //MEETINGUP_POOL_H