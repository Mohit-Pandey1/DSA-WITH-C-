#include <iostream>
#include <climits>
using namespace std;

int findMin(int arr[], int n){
  int low =0, high = n-1;

  while(low<high){
    int mid = low+(high-low)/2;

    if(arr[mid]>arr[high]){
      low = mid+1;
    } 
    else{
      high = mid;
    }
  }
  return arr[low];
}

int main(){
  int arr[] = {9, 10, 11, 5, 6, 7, 8};
  int n = sizeof(arr)/sizeof(arr[0]);

  int result = findMin(arr, n);
  cout<<"The minimum element is: "<< result << endl;
  return 0;
}