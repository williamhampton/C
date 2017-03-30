/* Test function */

#include <stdio.h>

int start(int end){
  return end * 2;
};
int main(){
  printf("Double %d is %d",5,start(5));
}
