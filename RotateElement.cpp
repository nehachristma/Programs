#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
void leftRotate(int arr[], int n, int d)
{
    d=d%n;
    int i;
    int temp[d];
    //storing d elements in temp
    for(i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
//move till d steps ~ SHIFTING
    for(i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }

//put it back 
    for(i=n-d;i<n;i++)
    {
        arr[i]=temp[i-(n-d)];
    }

}
int main() {
    //Write your code here
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int d;
    cin>>d;

    leftRotate(arr,n,d);
   for(i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
}