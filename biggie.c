/* create a function that changes all positive numbers to "big"
and returns the same array*/

#include <stdio.h>
#define len(x)  (sizeof(x)/sizeof(x[0]));
int i;

int biggie(int arr[],int alen) {
  for(i = 0; i< alen; i++) {
    if(arr[i]>0){
      arr[i] = 999;
    }
  }
  return 0;
}
int array[5] = {-1,10,-5,4,2};
int main(){
  int q = len(array);
  biggie(array,q);
  for(i = 0; i<q; i++){
    printf("%d\n",array[i]);
  }
  return 0;
}
