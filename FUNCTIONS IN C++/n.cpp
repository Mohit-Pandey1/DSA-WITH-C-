#include <iostream>
using namespace std;

void printNum(int n){
    cout<<"Numbers from 1 to "<< n<< " ";
    for(int i = 0; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;
}

int Sum(int n){
    int sum = 0;
    for(int i = 1; i<)
}

int main(){
    int n;
    
    cout<<"Enter a +ve integer: ";
    cin>>n;

    if(n<=0){
        cout<<"Please enter a +ve integer: "<<endl;
        return 1;
    }

    printNum(n);
    int sum = Sum(n);

    cout<<n<<" = "<<sum<<endl;

    return 0;
}