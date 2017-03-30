// learning about malloc

#include <stdio.h>
#include <stdlib.h>
#define len(x)  (sizeof(x)/sizeof(x[0]));
int *ir = NULL;
int il = 10;
int main(){
  ir = (int *)malloc(il*sizeof(int));
  int ii;
  for(ii = 0; ii < il; ii++){
    ir[ii] = ii*ii;
  }
  for(ii = 0; ii < il; ii++){
    printf("ii = %d val = %d\n",ii,ir[ii]);
  }
  return 0;
}
