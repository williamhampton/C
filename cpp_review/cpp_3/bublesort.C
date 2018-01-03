#include<iostream>
using namespace std;
int main(){
  int array[5]={7,3,2,1,10};
  bool repeat = true;
  while(repeat ==true){
    repeat = false;
    for (int i=0; i<5; i++){
      if (array[i]<array[i+1]){
        int temp= array[i];
        array[i]= array[i+1];
        array[i+1]= temp;
        repeat=true;
      }
    }
  }
  for(int i=0; i<5;i++){
    printf("%d ",array[i]);
  }

}
