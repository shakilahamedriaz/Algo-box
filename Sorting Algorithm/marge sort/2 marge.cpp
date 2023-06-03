#include<bits/stdc++.h>
using namespace std;

void mergeSort(int arr[],int l, int r)
{
    if(l<r)
    {
        int nid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}



int main()
{
     
}