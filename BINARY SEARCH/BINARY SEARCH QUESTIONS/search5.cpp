#include <iostream>
using namespace std;

int findRotationCount(int arr[], int n){
  int low = 0, high = n-1;

  while(low<=high){
    if(arr[low] <= arr[high]){
      return low;
    }

    int mid = low+(high - low)/2;
    int next = (mid+1)%n;
    int prev = (mid-1+n)%n;

    if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]){
      return mid;
    }

    if(arr[mid] > arr[high]){
      low = mid + 1;
    }

    else{
      high = mid - 1;
    }
  }
  return 0;
}


int main(){
  int arr[] = {6, 7, 8, 9, 1, 2, 3, 4, 5};
  int n = sizeof(arr)/sizeof(arr[0]);

  int rotationCount = findRotationCount(arr, n);
  cout<<"No. of times the array has been rotated: "<< rotationCount << endl;

  return 0;
}