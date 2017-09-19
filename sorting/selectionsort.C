#include <stdio.h>
/* simple selection sort algorithm written in C*/
int main(){
  int array[10] = {1,7,3,5,9,3,2,0,3,2};
  for(int i = 0; i<10; i++){
    for(int q = i+1; q<10; q++){
      if (array[i]> array[q]){
        int temp = array[i];
        array[i] = array[q];
        array[q] = temp;
      }
    }
  }
  printf("\n");
  for(int i = 0; i< 10; i++){
    printf("%d", array[i]);
  }
  printf("\n");
  return 0;
}
