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
//emni
cout<< "The unsorted array  is : ";
for(int i=0; i<n; i++){
    cout<<arr[i]<< " ";

}
cout<<endl;

//main part of the code : bubble sort algorithm:

int round=0;               //for calculate total iterairon;
for(int i=0; i<n-1; i++){
     round++;
    bool flag=false;
    for(int j=0; j<n-1-i; j++){

        if(arr[j]>arr[j+1]){

            int temp= arr[j];      //now arr[j] is empty
            arr[j]=arr[j+1];       //arr[j] takes arr[j+1] now arr[j+1] is empty
            arr[j+1]= temp;        //swap done

            flag=true;


        }
    }

      if(flag==false) break;


}

cout<< "Total iteration : "<<round<<endl;
//print the sorted array :
cout<<endl<< "The sorted arry is : "<<endl;

for(int i=0; i<n; i++)
{

    cout<< arr[i]<< " ";
}

return 0;
}


