#include<iostream>
using namespace std;

const int N=1e5+10;
int a[N],b[N],n,ans;

int prime(int u){
    if(u<=1) return 0;
    for(int i=2;i<=u/i;i++) if(u%i==0) return 0;
    return 1;
}

int maiin(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(prime(a[i])) ans+=a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]%2==0) ans+=b[i];
    }
    cout<<ans;
}
