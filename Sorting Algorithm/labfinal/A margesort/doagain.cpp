#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int lb, int mid, int ub )
{
    int b[ub-lb+1];
     int i=lb, j=mid+1, k=0;

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
     while(i<=mid)
     {
            b[k]=a[i];
            i++;
            k++;
     }
     while(j<=ub)
     {
            b[k]=a[j];
            j++;
            k++;
     }

     for(int p=0; p<k; p++)
     {
            a[lb+p]=b[p];
     }
}

void margesort(int a[], int lb, int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        margesort(a, lb, mid);
        margesort(a, mid+1, ub);       
        merge(a,lb,mid,ub);
    }
}

int main()
{
    cout<< "Enter the size of the array: ";
    int n; cin>>n;
    int a[n];

    cout<< "Enter the elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    margesort(a, 0,  n-1);
        cout<< "The sorted array : ";
        for(int i=0; i<n; i++)
        {
            cout<<a[i] << " ";
        }
    
}