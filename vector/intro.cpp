#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  //create vector, declare 
  vector<int>v;
  vector<int>v1(5,1);
  //size and capacity
  // cout<<"Size of v : "<<v.size()<<endl;
  // cout<<"Capacity of v: "<<v.capacity()<<endl;
  // v.push_back(2);
  // v.push_back(5);
  // v.push_back(10);
  // cout<<"Size of v : "<<v.size()<<endl;
  // cout<<"Capacity of v: "<<v.capacity()<<endl;
  
  //update value
  // v[1] = 5;
  // cout<<"Size of v1 : "<<v1.size()<<endl;
  // cout<<"Capacity of v1 : "<<v1.capacity()<<endl;
  // v1.push_back(8);
  // cout<<"Size of v1 : "<<v1.size()<<endl;
  // cout<<"Capacity of v1 : "<<v1.capacity()<<endl;
  
  //delete value from vector
  vector<int>m;
  m.push_back(55);
  m.push_back(44);
  m.push_back(4);
  m.push_back(45);
  m.push_back(455);
  // m.pop_back();
  // cout<<"Size of m is : "<<m.size()<<endl;
  // cout<<"Capacity of m is : "<<m.capacity()<<endl;

  // m.erase(m.begin()+1);
  // cout<<"Size of m : "<<m.size()<<endl;
  // cout<<"capacity of m : "<<m.capacity()<<endl;
  // for(int i=0;i<m.size();i++)
  // cout<<m[i]<<" ";
  // m.insert(m.begin()+1,50); //insert value
  // cout<<endl;

  // m[1]=37;
  // for(int i = 0;i<m.size(); i++)
  // cout<<m[i]<<" ";

  // m.clear();


  // vector <int>arr;
  // arr.push_back(2);
  // arr.push_back(32);
  // arr.push_back(45);
  // arr.push_back(11);
  // cout<<arr[0]<<endl;
  // cout<<arr.front()<<endl;
  // cout<<arr[arr.size()-1]<<endl;
  // cout<<arr.back()<<endl;

  // vector <int>a;

  //copy value of 1 vector to another
  // a = arr;
  // cout<<a.size();
  // cout<<endl;
  // for(auto it = arr.begin(); it!= arr.end(); it++)
  // {
  //   cout<<*it<<" ";
  // }
  // cout<<endl;
  // for(auto i: arr)
  // cout<<i<<" "; 

  vector <int>ans;
  ans.push_back(220);
  ans.push_back(54);
  ans.push_back(545);
  ans.push_back(50);
  ans.push_back(550);

  //sort in  increasing order
  // sort(ans.begin(), ans.end());
  // for(int i=0; i<ans.size();i++)
  // cout<<ans[i]<<" ";
  // cout<<endl;

  //sort in decreasing order
  // sort(ans.begin(), ans.end(), greater<int>()); //1st method
  // sort(ans.rbegin(), ans.rend());  //2nd method
  // for(int i=0;i<ans.size();i++)
  // cout<<ans[i]<<" ";


  //SEARCH USING BINARY SEARCH AND FIND'
  cout<<binary_search(ans.begin(), ans.end(), 55)<<endl;
  cout<<find(ans.begin(), ans.end(), 54)-ans.begin()<<endl;
}