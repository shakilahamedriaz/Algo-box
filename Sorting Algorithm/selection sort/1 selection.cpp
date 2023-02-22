#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cout<< "Enter the size of the array : ";
cin>>n;
int arr[n+1];
cout<< "Enter the elements of the array  : "<<endl;
for(int i=0; i<n; i++)
{
    cout<< "arr["<<i<<"] : ";
    cin>>arr[i];
}

cout<<endl;

//the main part of selection sort is here;

for(int i=0; i<n-1; i++)
{
    int min=i;
    for(int j=i+1; j<n; j++)
    {
        if(arr[j]<arr[min])
        {
            min=j;
        }
    }
    
    if(min != i)
    {
        swap(arr[i],arr[min]);
    }

}

cout<<endl;
cout<< "The sorted array is : "<<endl;

for(int i=0; i<n; i++)
{
    cout<<arr[i];
}





    return 0;

}