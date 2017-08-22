/* Create a program that returns the average of a list of numbers */
#include<stdio.h>
#include <stdlib.h>
#include<errno.h>

int main(){
  int array[64];
  int length =0;
  printf("\nInput a number: ");
  char number[64];
  scanf("%s", number);
  while(atoi(number) ==errno){
    printf("I need at least 1 number...  ");
    scanf("%s", number);
  }
  int num =  atoi(number);
  array[length] = num;
  length = length +1;
  while(length<64){
    printf("\nInput another Number: ");
    scanf("%s", number);
    if (atoi(number) != errno){
      int num =  atoi(number);
      array[length] = num;
      length = length +1;
    }
    if (atoi(number)== errno){
      int total = 0;
      for(int i = 0; i<=length-1; i++){
        total = total +array[i];
      }
      total = total/length;
      printf("\nYour average is: %d\n",total);
      return 0;
    }


  }
}
