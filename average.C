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
  while(atoi(number)!= errno & length<64){
    printf("\nInput another Number: ");
    scanf("%s", number);
    int num =  atoi(number);
    array[length] = num;
    length = length +1;
  }
  int total = 0;
  for(int i = 0; i<length-1; i++){
    total = total +array[i];
  }
  length = length +1;
  total = total/length;
  printf("%d",total);
}
