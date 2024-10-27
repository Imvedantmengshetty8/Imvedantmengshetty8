1.primary data types 

//program for primary datatype float//
#include<stdio.h>

int main() 
{
     float i;
     i=18.8;
     
     printf("%f", i);
     return 0;
     
     }




output:

18.799999
[Process completed - press Enter]




2. Derived data types

// Program to take 7 values from the user and store them in an array
// Print the elements stored in the array

#include <stdio.h>

int main() {

  int values[7];

  printf("Enter 7 integers: ");

  // taking input and storing it in an array
  for(int i = 0; i < 7; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  // printing elements of an array
  for(int i = 0; i < 7; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}


Output:

Enter 7 integers: 1
37
-5
0
2
3
7
Displaying integers: 1
37
-5
0
2
3
7

[Process completed - press Enter]







