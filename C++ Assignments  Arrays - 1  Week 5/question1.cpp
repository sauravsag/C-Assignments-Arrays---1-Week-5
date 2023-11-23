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
    int sum = 1;
    for (int i = 0; i <= n-1; i++)
    {
        sum *= arr[i];
        
    }
    cout<<"product of elements = "<<sum;
}