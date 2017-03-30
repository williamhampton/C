#include <stdio.h>
#include <string.h>

int main(){
  char hello[7] = "Hello ";
  char world[6] = "World";
  printf("%s\n", hello);
  strncat(hello,world,5);
  printf("%s",hello);
}
