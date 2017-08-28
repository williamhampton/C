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
    int number = array[0];
    int mode = number;
    int count = 1;
    int countMode = 1;

    for (int i=1; i<truelen; i++){
      if (array[i] == number){
         ++count;
      }
      else{
        if (count > countMode){
          countMode = count;
          mode = number;
        }
      count = 1;
      number = array[i];
    }
  }
    printf("Mode: %d", mode);
    return 0;
}
