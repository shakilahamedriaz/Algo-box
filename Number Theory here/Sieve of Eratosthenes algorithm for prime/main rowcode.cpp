#include<bits/stdc++.h>
using namespace std;

int main(){


int n; cin>>n;

  for(int i=2; i<sqrt(n); i++){
    cout<<i<< " ";
        cout<<endl;
            for(int j=i*i; j<=n; j+=i)
            {
                cout<<j<< "  ";
            }
            cout<<endl;
        
    }
    return 0;
}
