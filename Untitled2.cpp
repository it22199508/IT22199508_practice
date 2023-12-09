#include<iostream>
#include<iomanip>
using namespace std;

class Student {
 private :
   int StudentNo;
   int marks1;
   int marks2;
   int marks3;
   int width;
 public: 
   void setStudentNo(int no);
   void assignMarks(int n1, int n2, int n3);
   float calcAvg();
};

void Student::setStudentNo(int no) {
  width = no;
}
void Student :: assignMarks(int n1, int n2, int n3);{
  marks1 = n1;
  marks2 = n2;
  marks3 = n3;
}
float Student ::calcAvg() {
 float average = (marks1+marks2+marks3)/3.0;
 return average;
}
