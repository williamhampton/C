#include<iostream>
using namespace std;

float square(float x){
  x = x*x;
  return x;
}
int main(){
  float q;
  cout<<"pick a number to square: ";
  cin>>q;
  cout<<"the square is: "<<square(q)<<endl;
  return 0;

}
