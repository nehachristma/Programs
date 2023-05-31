#include<iostream>
using namespace std;
int main()
{
    int arr[7]={14,7,9,10,-8,-4,6};
   int found=0;
    
     int n,i;
    cout<<"enter the element you want to find "<<endl;
    cin>>n;
    cout<<endl;

for(i=1;i<=7;i++)
{
    if(arr[i]==n)
     {
       found++;
     }
     
}

if(found)
{
     cout<<" FOUNDD";
       
}
     else{
        cout<<"element NOT PRESENT ";
     }

}