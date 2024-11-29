#include <iostream>
using namespace std;

int singleElement(int nums[], int size){
  int left =0, right = size-1;

  while(left < right){
    int mid = left + (right-left)/2;
    if(mid%2==1) mid-- ;

    if(nums[mid] == nums[mid+1]){
      left = mid+2;
    } else{
      right = mid;
    }
  }
  return nums[left];
}

int main(){
  int nums[] = {5, 2, 2, 6, 6, 9, 9, 7, 7};
  int size = sizeof(nums) / sizeof(nums[0]);

  cout<<"Single element is: " << singleElement(nums, size) << endl;
  return 0;
}