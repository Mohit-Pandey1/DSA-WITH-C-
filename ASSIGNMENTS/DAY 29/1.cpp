#include <iostream>
using namespace std;

int main()
{
  int n; 
  cout<<"Enter the number of elements: ";
  cin>>n;

  int arr[n];
  cout<<"Enter the elements of the array: ";
  for(int i =0;i<n;i++){
    cin>>arr[i];
  }

  for(int i =1; i<n;i++){
    int key = arr[i];
    int j = i-1;

    while(j>=0 && arr[j] < key){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = key;
  }

  cout<<"Sorted array in decreasing order: ";
  for(int i = 0;i <n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  return 0;
}