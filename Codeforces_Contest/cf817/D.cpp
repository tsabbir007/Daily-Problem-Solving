
//بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include<bits/stdc++.h>
using namespace std;
#define FastRead ios_base::sync_with_stdio(false); cin.tie(0),cout.tie(0);
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

#define sortn(a,n,m) sort(a+m, s+m+n)
#define sortt(s) sort(s.begin(), s.end())
#define reversee(s) reverse(s.begin(), s.end())
#define reversesortt(s) sortt(s); reversee(s)
#define pb push_back
#define loj(i,j) "Case "<<i<<": "<<j
#define gap " "

// for (auto& x : a) cin >> x;

int main() {
    FastRead

    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        
        string s;
        cin>>s;
        long long cnt=0;

        vector<long long>p, pp;

        for(long long i=0;i<n;i++){
            long long ab=n-i-1;
            if(s[i]=='R'){
                cnt+=ab;
                if(ab<i) p.push_back((i-ab));
                //cout<<ab<<" ";
            }
            else{
                cnt+=i;
                if(ab>i) p.push_back((ab-i));
                //cout<<i<<" ";
            }

        }
        //cout<<endl;
        
        reversesortt(p);

        //for(int i=0;i<p.size();i++) cout<<p[i]<<" ";
        // //cout<<endl<<cnt<<endl;
        int gg=p.size();
        
        for(int i=1;i<=(n-gg);i++) p.push_back(0);
        long long tem=0;
        for(int i=0;i<n;i++){
            if(i==0){
                cout<<p[i]+cnt<<" ";
                tem=p[i]+cnt;
            }
            else{
                cout<<p[i]+tem<<" ";
                tem=p[i]+tem;
            }

        }
        cout<<endl;
    }
}