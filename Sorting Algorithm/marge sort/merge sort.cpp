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
    int i,j,k,mid,lb,up;
       mid=n/2;
       i=lb;
       j=mid+1;
       k=lb;
       

   //main part of the code .
    while(i<=mid && j<=up)
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
    }


    //print array
    cout<<endl;
    for(int i=0; i<n ; i++)
    {
        cout<<a[i]<< " ";
    }
    
    return 0;
}
