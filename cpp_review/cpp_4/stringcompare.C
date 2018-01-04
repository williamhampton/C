#include<iostream>
#include<string>
using namespace std;

int main(){
  cout<<"input two sentences"<<endl;
  string string1,string2;
  getline(cin,string1);
  getline(cin,string2);
  if (string1==string2){
    cout<<"they are equal!!";
  }
  else if(string1>string2){
    cout<<string1<< " "<<string2<<endl;
  }
  else{
    cout<<string2<< " "<< string1<<endl;
  }
  return 0;
}
