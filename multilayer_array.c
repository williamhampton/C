#include <stdio.h>



int main(){
  int i;
  char array[][5] = {
    {1,2,3,4,5},
    {11,22,33,44,55}
  };
  for (i = 0; i<2; i++){
    int k;
    for (k = 0; k<5; k++){
      printf("%d\n",array[i][k]);
    }
  }
  return 0;
}
