#include <iostream>
using namespace std;

int main() 
{
  int age;
  cout<<"Enter the age of the person: ";
  cin>>age;
  if(age >= 13 && age <=19){
    cout<<"Teenager";
  }
  else{
    cout<<"Not a Teenager";
  }
}