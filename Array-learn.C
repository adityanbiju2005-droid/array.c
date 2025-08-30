# include <studio.h>
#include <string.h>

struct student{
  int rollno;
  char name;
  float marks;
}

struct employee{
  int id;
  char name;
  float salary;
  char dept;
}

int main()
  struct student s1;
  s1.rollno = 1;
  strcpy(s1.name, "satyam");
  s1.marks = 90.4;

  struct student s2 = {2, "danish", 93.2};
  
