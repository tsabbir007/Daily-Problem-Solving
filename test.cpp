//بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
#include<bits/stdc++.h>
using namespace std;
#define FastRead ios_base::sync_with_stdio(false);cin.tie(NULL)
#define pi acos(-1)
#define MOD 1000000007
#define inf 1000010
#define endl "\n"
#define ull unsigned long long
#define con (f?"YES":"NO")

#define CLR(a) memset(a, -1, sizeof(a))
#define CLN(a) memset(a, 0, sizeof(a))
 
#define max3(a,b,c) max(max(a,b),c)
#define min3(a,b,c) min(min(a,b),c)
#define max4(a,b,c,d) max(a,max3(b,c,d))
#define min4(a,b,c,d) min(a,min3(b,c,d))
#define max5(a,b,c,d,e) max(max4(a,b,c,d),e)
#define min5(a,b,c,d,e) min(min4(a,b,c,d),e)
 
#define sortt(s) sort(s.begin(), s.end())
#define reversee(s) reverse(s.begin(), s.end())
#define reversesortt(s) sortt(s); reversee(s)
#define pb push_back
#define loj(i,j) "Case "<<i<<": "<<j
#define gap " "
 
// for (auto& x : a) cin >> x;
long long  modPow(long long b, long long p)
{
    long long r=1;
    while(p){
        if(p&1) r=(r*b)%MOD;
        b=(b*b)%MOD;
        p>>=1;
    }
    return r;
}


int main(){
    long long fact[20005];
    fact[0]=1;
    for(long long i=1;i<=20003;i++){
        fact[i]=(fact[i-1]%MOD*i)%MOD;
    }
  long long t;
  cin>>t;
  for(long long i=1;i<=t;i++){
    long long n,k;
    cin>>n>>k;
    long long ans=fact[n+k-1];
    long long r=(fact[k-1]*fact[n])%MOD;
    ans= (ans*(modPow(r,MOD-2)))%MOD;
    cout<<loj(i,ans)<<endl;
  }
}
