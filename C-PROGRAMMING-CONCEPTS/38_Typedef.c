//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Typedef
// Description: typedef <previouse_name> <new_name> typedef is used to redefine keywords in c language

//*****************************************************************************************************

#include <stdio.h>

// typedef can also be used along with sturctures to cast them into a name of our choise

typedef struct student
{
  int marks, id;
  char fav_char;
} std;

int main(void)
{

  // struct student ali, haider;
  std ali, haider;

  ali.marks = 99;
  ali.id = 98;
  ali.fav_char = 'a';

  haider.marks = 93;
  haider.id = 77;
  haider.fav_char = 'w';

  printf("Ali's marks are: %d\n", ali.marks);
  printf("Ali's id is: %d\n", ali.id);
  printf("Ali's favorite character is: %c\n", ali.fav_char);

  printf("Haider's marks are: %d\n", haider.marks);
  printf("Haider's id is: %d\n", haider.id);
  printf("Haider's favorite character is: %c\n", haider.fav_char);

  // It can also be used

  typedef unsigned long ul;

  ul a = 19;

  typedef int integer;

  integer a = 10;

  printf("values of a is %d\n", a);

  return 0;
}