#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size = ";
    cin>>n;
    int arr[n] ;
    cout<<"enter element = ";
  //input
    for (int i = 0; i <= n-1; i++)
    {
        cin>>arr[i];
    }
    bool flag = false;
   for (int i = 0; i <= n-1; i++)
   {
    for (int j = i+1; j < n; j++)
    {
        if(arr[i] == arr[j]) flag = true;
    }
    
   }
   if (flag == true)
   {
    cout<<"duplicate is availabe";
   }
   else cout<<"duplicate is  not availabe";
}