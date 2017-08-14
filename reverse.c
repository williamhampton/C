/* reverse an array */

#include <stdio.h>
#define len(x)  sizeof(x)/sizeof(x[0]);
int array[5] = {1,2,3,4,5};

int main(){
    int q = len(array);
    int i;
    for(i = q-1; i>=0;i--){
      printf("%d\n", array[i]);
    }
}
