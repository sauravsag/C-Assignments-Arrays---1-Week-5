#include<iostream>
#include<climits>
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
   int x = INT_MAX;
   
   for (int i = 0; i <= n-1; i++)
   {
    if (x>arr[i])
    {
        x = arr[i];
    }
   }
   cout<<"LEAST element = "<<x;
}