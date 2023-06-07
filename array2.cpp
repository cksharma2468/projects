#include<iostream>
#include<climits>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 int MaxNo=INT_MIN;
 int MinNo=INT_MAX;

 for(int j=0;j<n;j++){
    MaxNo=max(MaxNo,arr[j]);
    MinNo=min(MinNo,arr[j]);
 }
 cout<<MaxNo<<" "<<MinNo<<endl;

 return 0;
}