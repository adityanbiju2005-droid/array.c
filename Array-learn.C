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
  struct employee e1 = {101, "Satyam", 50000.0, "IT"};\

  printf("emplyee details: \n", e1.id, e1.name, e1.salary, e1.dept);

  int array1[5] = {20,30,40,2,5};
  int array[3] = {10,5,23};
  float array[3] = {1.23,2.34,3.2};

  int x = 10;
  int *y= &x;

  printf("First element of array 1:%d\n", array1[0]);
  printf("First element of array 2:%d\n", array2[0]);
  printf("First element of array 3:%d\n", array3[0]);

  printf("value of x: %d\n", *y);
  printf("address of x: %d\n", y);

  return 0;
  

  
