/* Create a program that given an list of numbers will sort them for you */

#include<stdio.h>
#include <stdlib.h>
#include<errno.h>

int request(){
  int array[64];
  int length =1;
  printf("\nInput a number: ");
  char number[64];
  scanf("%s", number);
  while(atoi(number) ==errno){
    printf("I need at least 1 number...  ");
    scanf("%s", number);
  }
  int num = atoi(number);
  array[length-1] = num;
  length +=1;
  while(atoi(number)!= errno & length < 64){
    printf("\nInput a number: ");
    char number[64];
    scanf("%s", number);
    if(atoi(number) ==errno){
      int temp;
      for(int i = 0; i < length; i++){
        temp = i;
        for(int q = i; q<length ; q++){
          if (array[temp] > array[q]){
            temp = q;
          }
          if (q == length-1){
            int placement = array[i];
            array[i] = array[temp];
            array[temp] = placement;
          }
        }
      }
      printf("The result is: ");
      for(int i = 0; i< length-1; i++){
        printf("%d ",array[i]);
      }
      printf("\n");
      return 0;
    }
    int num = atoi(number);
    array[length-1] = num;
    length +=1;
  }

}
int main(){
  request();

}
