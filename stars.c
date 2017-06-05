/* test for printing *'s in a function,
assuming the window is 50 characters long, print  *'s
x number of *'s to the left, x to the right in another line
and x in the center on the third line */

#include <stdio.h>

#include <stdlib.h>
#define MAX_LEN 50
int main (int argc, char *argv[])
{
  char number[MAX_LEN];

  printf ("Enter a Number: ");
  scanf("%s", number);
  int num = atoi(number);
  while (num>50){
    printf("\nEnter a valid number less than 50: ");
    scanf("%s", number);
    num = atoi(number);
  }
  num = atoi(number);
  /* printing with x number of  0's to the left*/
  int i;
  for (i = 0; i<num; i++){
    printf("*");
  };
  int s = 50 - num;
  for( i = 0; i < s; i++){
    printf(" ");
  };
  printf("\n");
  /* stars to the right */
  for( i = 0; i < s; i++){
    printf(" ");
  };
  for (i = 0; i<num; i++){
    printf("*");
  };
  printf("\n");
  /*stars to the center */
  for( i = 0; i < s/2; i++){
    printf(" ");
  };
  for (i = 0; i<num; i++){
    printf("*");
  };
  printf("\n");
  return 0;
}
