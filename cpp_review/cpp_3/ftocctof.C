#include<iostream>
using namespace std;

int main(){
  cout<<"What are you converting to? f for farenheight c for celsius"<<endl;
  string x;
  cin>>x;
  while(x!="c" && x!="f"){
    cout<<"that is not a valid choice, please chose again";
    cin>>x;
  }
  if(x=="c"){
    cout<<"what is the number of degrees? ";
    int f,resultc;
    cin>>f;
    resultc=((f-32)*5/9);
    cout<<resultc<<" degrees celsius"<<endl;
  }
  if(x=="f"){
    cout<<"what is the number of degrees? ";
    int c,resultf;
    cin>>c;
    resultf=c*9/5+32;
    cout<<resultf<<" degrees farenheight"<<endl;
  }
  return 0;
}
