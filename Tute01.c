/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() // function main begins the program execution 

{ 
  float mark1,mark2,sum,avg ; 
	
	printf ("Enter mark 1 : ")  ;  // Enter subject mark 1 
	scanf ("%f",&mark1) ;
	
	printf ("Enter mark 2 : ") ;  // Enter subject mark 2 
	scanf ("%f",&mark2) ; 
	
	sum = mark1 + mark2 ;  // calculate the sum 
	
	avg = sum / 2 ;  // calculate the average 
	printf ("Average of two subjects : %.2f",avg) ; 
  
  return 0;
}

