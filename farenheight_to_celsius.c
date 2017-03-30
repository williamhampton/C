/* create a function that converts a number from farenheight to celsius*/
#include <stdio.h>
#define length(x)  sizeof(x)/sizeof(x[0]);
#define ftoc(x) ((x-32)*5/9);
int main(){
  int r = ftoc(75);
  printf ("%d\n",r);
  return ftoc(r);
};
