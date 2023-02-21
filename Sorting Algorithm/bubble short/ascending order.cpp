#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cout<< "Enter the array size : ";
cin>>n;

cout<< "Entet the array elements : "<<endl;
int arr[n];

for(int i=0; i<n; i++)
{
    cout<< "arr["<<i<< "] : ";

    cin>>arr[i];
}

cout<< "The unsorted array  is : ";
for(int i=0; i<n; i++){
    cout<<arr[i]<< " ";

}
cout<<endl;

//main part of the code : bubble sort algorithm:


for(int i=0; i<n-1; i++){

    int flag=0;
    for(int j=0; j<n-1-i; j++){

        if(arr[j]>arr[j+1]){

            int temp= arr[j];      //now arr[j] is empty
            arr[j]=arr[j+1];       //arr[j] takes arr[j+1] now arr[j+1] is empty
            arr[j+1]= temp;        //swap done

            flag=1;


        }
    }

      if(flag==1) break;


}

//print the sorted array :
cout<<endl<< "The sorted arry is : "<<endl;
for(int i=0; i<n; i++)
{

    cout<< arr[i]<< " ";
}

return 0;
}

