#include<bits/stdc++.h>
#include<cmath>
using namespace std;
const int n=1000000;
bool prime[n+1];
vector<int>v;

void sieve(){
   
   for(int i=4; i<=n; i+=2){
      
      prime[i]=true;

   }
   
   for(int i=3; i*i<=n; i+=2){
         if(prime[i]==false){

            for(int j=i*i; j<=n; j+=i+i){
                prime[j]=true;
            }
         }
   }

   for(int i=2; i<=n; i++){

       if(prime[i]==false) v.push_back(i);
   }
   


}


int main(){
   
   sieve();

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<v[n-1]<<endl;
    }
}

