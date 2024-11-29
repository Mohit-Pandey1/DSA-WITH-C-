#include <iostream>
#include <cmath>
using namespace std;

double nthRoot(double m, int n, double precision = 1e-7){
  double low = 0, high = max(1.0, m);
  double mid;

  while(high - low > precision){
    mid = (low+high)/2.0;

    if(pow(mid,n)<m){
      low = mid;
    }
    else{
      high = mid;
    }
  }
  return mid;
}

int main(){
  double m;
  int n;

  cout<<"Enter the number m: ";
  cin>>m;
  cout<<"Enter the root n: ";
  cin>>n;

  double result = nthRoot(m,n);
  cout<<"The "<<n <<"th root of "<<m<<" is: "<< result<< endl;

  return 0;
}