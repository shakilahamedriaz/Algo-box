#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key){

       for(int i=0; i<n; i++){
           
           if(arr[i]==key){
        
           return i;

           }
       }

       return -1;

}



int main(){

    int n;
    cout<< "Enter the size of the array : ";
    cin>>n;

    int arr[n+1];
    cout<< "Enter the elements of the array : ";
    for(int i=0; i<n; i++){

        cin>>arr[i];
    }
    int key;
    cout<< "Enter the element that you want to search : ";
    cin>>key;

    int result=linearSearch(arr,n,key);

    if(result == -1){
        cout<< "Element is not found !"<<endl;
    }
    else{

        cout<< "Element is found at position: "<<result<<endl;

    }


}