#include<iostream>
using namespace std;
/* simple function to show the largest of a set of prompted numbers */
int main(){
  int num1, num2, num3, max;
  cin>>num1;
  cin>>num2;
  cin>>num3;
  max=num1;
  if(num2>max){
    max=num2;
  }
  if (num3>max){
    max=num3;
  }
  cout<<"Largest Number is: "<< max<<"\n";
  return 0;
}
