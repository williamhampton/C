/* make a function that prints out every number that is greater than the
second in an array */
#include <stdio.h>
#define length(x)  sizeof(x)/sizeof(x[0]);
  int arr2[5];
int main(){
  int i;
  int array[5] = {1,4,5,6,7};
  int counter = 0;
  for (i = 0; i<5; i++){
    if(array[i]>= array[1]){
      arr2[counter] = array[i];
      counter++;
    }
  }
  int q = length(arr2);
  int j;
    for (j = 0; j<q-1; j++){
      printf("%d\n",arr2[j]);
    }

    return 0;
  };
