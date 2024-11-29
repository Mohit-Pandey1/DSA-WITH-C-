#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int findMax(const vector<int>& arr){
    if(arr.size()<2){
        return 0;
    }

    int n = arr.size();
    int maxDiff = INT_MIN;
    int runMax = arr[n-1];

    for(int i = n-2; i>=0;i--){
        maxDiff = max(maxDiff, runMax - arr[i]);

        runMax = max(runMax, arr[i]);
    }

    return maxDiff;
}

int main(){
    vector<int> arr = {8, 10, 5, 7, 6, 9, 11};
    cout<<"Maximum difference: " << findMax(arr)<<endl;
    return 0;
}