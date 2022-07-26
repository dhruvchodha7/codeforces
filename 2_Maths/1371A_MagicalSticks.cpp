#include<bits/stdc++.h>


using namespace std;
int main() {
  long long t,n;
  cin>>t;
  while(t--){
   cin>>n;
   if(n&1 == 0) cout<<n/2<<endl;
   else cout<<(n+1)/2<<endl;
  }
  return 0;
}