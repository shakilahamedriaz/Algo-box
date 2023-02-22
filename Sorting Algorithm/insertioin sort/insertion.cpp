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

//the main part of insertion sort is here;
for(int i=1; i<n; i++)
{
    int temp=i;
    int j=i-1;
    while(j>=0 && arr[j]>temp)
    {
        arr[j+1]=arr[j];
        j--;
    }

    arr[j+1]=temp;
}


cout<<endl;
cout<< "The sorted array is : "<<endl;

for(int i=0; i<n; i++)
{
    cout<<arr[i]<< " ";
}
cout<<endl;




    return 0;

}