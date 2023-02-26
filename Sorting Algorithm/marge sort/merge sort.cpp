#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<< "Enter the size of the array : ";
    int n; cin>>n;
    int a[n+1];
    int b[n+1];

    cout<< "please input elements in array: ";
    for(int i=0; i<n; i++){

        cin>>a[i];
    }

    //main part
    int i,j,k,mid,lb,ub;

        mid=(0+n-1);
       lb=0;
       ub=n-1;
       i=lb;
       j=mid+1;
       k=lb;


   //main part of the code .
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }

    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }


    //for copy to b->a..again.
    for(k=lb; k<ub; k++)
    {
        a[k]=b[k];
        cout<<a[k]<< " ";
    }

    //print array
    for(int i=0; i<n; i++)
    {

        cout<<a[i]<< " ";
    }


    return 0;
}
