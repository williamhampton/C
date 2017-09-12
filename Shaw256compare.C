#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main(){
  printf ("\nFirst shaw256sum:\n ");
  string sum1;
  getline(cin, sum1);
  printf ("\nSecond shaw256sum:\n ");
  string sum2;
  getline(cin, sum2);
  if (sum1.compare(sum2) != 0){
    printf("\nNOT A VALID HASH!!!\n");
  }
  if (sum1.compare(sum2) == 0){
    printf("\nVAlID HASH!\n");
  }
}
