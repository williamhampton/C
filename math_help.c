// given two numbers, return x in the function y = mx + b when y = 0
// (y-b)/m = x

#include <stdio.h>
#define len(x)  sizeof(x)/sizeof(x[0]);
int variables(int b, int m){
  printf("%d\n", ((0-b)/m));
  return 0;
}
int main(){
  variables(4,2);
  variables(-4,4);
  return 0;
}
