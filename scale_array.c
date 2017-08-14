// print an array multiplying every number by a number

#include <stdio.h>
#define len(x)  sizeof(x)/sizeof(x[0]);
int multiplyer(int num1, int num2){
  printf("%d\n", num1*num2);
  return 0;
}
int arr[5] = {1,2,3,4,5};
int main(){
  int q;
  int z = len(arr);
  for( q = 0; q<z; q++){
    multiplyer(arr[q], 5);
  }
  return 0;
}
