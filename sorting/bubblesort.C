#include <stdio.h>

int main(){
  int con = 1;
  int array[10] = {1,7,4,5,2,9,4,7,8,3};
  while (con == 1){
    con = 0;
    for(int ii = 0; ii< 9; ii ++){
      if (array[ii] > array[ii+1]){
        int temp = array[ii];
        array[ii] = array[ii+1];
        array[ii+1] = temp;
        con = 1;
      }
    }
  }
  printf("\n");
  for(int x =0; x<10;x++){
    printf("%d ", array[x]);
  }
}
