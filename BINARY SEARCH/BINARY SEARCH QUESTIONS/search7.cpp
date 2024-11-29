#include <iostream>
using namespace std;

int squareRoot(int n) {
    int start = 0,end =n, ans = -1;

    while (start <= end) {
        int mid = start + (end - start) /2;

        if (mid * mid== n) {
            return mid;
        } 
        else if (mid * mid < n) {
            ans = mid;
            start = mid + 1;
        } 
        else {
            end = mid -1;
        }
    }
    return ans;
}

int main() {
    int n;
    cout <<"Enter a number: ";
    cin >>n;

    cout <<"Square root of " << n <<" is: " << squareRoot(n) <<endl;
    return 0;
}
