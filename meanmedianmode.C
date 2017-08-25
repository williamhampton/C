#include <stdio.h>
#include <stdlib.h>
#include<errno.h>
#define length(x)  sizeof(x)/sizeof(x[0]);
int array[16] = {1,1,2,3,4,4,5,5,5,6,7,8};
int main(){
    int mean = 0;
    int i;
    int len = length(array);
    int truelen = 0;
    for (i =0; i<len; i++){
      if(array[i] != NULL){
        truelen +=1;
        mean = mean + array[i];
      }
    }
    mean = mean/truelen;
    int len2 = truelen/2;
    int median = array[len2];
    printf("Mean: %d\n", mean);
    printf("Median: %d\n",median);
    int array2[16];
    int counter = 0;
    int q;
    for (q = 0; q< len; q++){
      if (array[i] == array[i+1]){
        array2[counter] = array[i];
        counter +=1;
      }
    }
    int array3[counter];
    int finalcounter = 0;
    for (q= 0; q<counter; q++){
      if( array2[q] == array2[q+1]){
        array3[finalcounter] = array2[q];
        finalcounter += 1;
      }
    }
    for (i =0; i< finalcounter; i++){
      printf("%d ", array3[finalcounter]);

    }


    return 0;
}
