#include<iostream>
using namespace std;

int main(){
  int array[5];
  int i = 0;
  while(i<5){
    cin>>array[i];
    i++;
  }
  i=0;
  int q=0;
  int holder;
  while(i<5){
    q=0;
    while(q<5){
      if (array[i]<array[q]){
        holder=array[i];
        array[i]=array[q];
        array[q]=holder;
        q++;
      }
      else{
        q++;
      }
    }
    i++;
  }
  i=0;
  while(i<5){
    cout<<array[i]<<" ";
    i++;
  }
  return 0;
}
