#include <stdio.h>

int array[5];
int main(){
  array[0] = 1;
  array[1]= 2;
  array[2] = 3;
  array[3] = 4;
  array[4] = 5;
  int i;
  for (i = 0;i<5;i++){
    printf("%d\n", array[i]);
  }
  return 0;
}
