/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2, total;
  float average;

printf("Enter mark 1 :");
scanf("%d", &mark1);//get the mark1 from the user

printf("Enter Mark 2 ");
scanf("%d", &mark2);//get the mark2 from the user

total = mark1 + mark2;
average=total/2;

printf("Average is %.2f", average);
  
  return 0;
}

