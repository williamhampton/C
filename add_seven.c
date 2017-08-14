/* create a function that accepts an array and adds 7 to it
  and returns all of the numbers except the first */

#include <stdio.h>
#define len(x)  sizeof(x)/sizeof(x[0]);

int array[5] = {1,2,3,4,5};

int main(){
  int i;
  int q = len(array);
  for(i=1; i<q ; i++ ){
    printf("%d\n", array[i]+7);
  }
}
