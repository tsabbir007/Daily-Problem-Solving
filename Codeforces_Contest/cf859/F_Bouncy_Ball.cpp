#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define MOD 1000000007
#define inf 1000000010
#define endl "\n"
#define ull unsigned long long
#define con (f?"YES":"NO")

#define Dpos(n) fixed << setprecision(n)

#define CLR(a) memset(a, -1, sizeof(a))
#define CLN(a) memset(a, 0, sizeof(a))

#define max3(a,b,c) max(max(a,b),c)
#define min3(a,b,c) min(min(a,b),c)
#define max4(a,b,c,d) max(a,max3(b,c,d))
#define min4(a,b,c,d) min(a,min3(b,c,d))
#define max5(a,b,c,d,e) max(max4(a,b,c,d),e)
#define min5(a,b,c,d,e) min(min4(a,b,c,d),e)

#define sortn(a,x,y) sort(a+x, a+x+y)
#define sortv(s) sort(s.begin(), s.end())
#define reversev(s) reverse(s.begin(), s.end())
#define reversesortv(s) sortv(s); reversev(s)

#define lowerbound(v,x) lower_bound(v.begin(), v.end(), x)-v.begin()+1
#define upperbound(v,x) upper_bound(v.begin(), v.end(), x)-v.begin()

#define pb push_back
#define loj(i,j) "Case "<<i<<": "<<j
#define gap " "

#define auto(x,a) for (auto& x : a)

int main() {
   ios_base::sync_with_stdio(false); cin.tie(0),cout.tie(0);

    long long t;
    cin >> t;
    while (t--) {
        long long n,m,x1,y1,x2,y2;
        string s;
        cin>>n>>m>>x1>>y1>>x2>>y2>>s;

        long long a[n+2][m+2];

        long long i=x1, j=y1, cnt=0, fnt=0;
        bool f=false;

        if(i==x2 && j==y2){
            cout<<0<<endl;
            continue;
        }

        while(1){
            bool g= false;

            if(i==1 && s[0]=='U'){
                s[0]='D';
                g=true;
            }
            else if(i==n && s[0]=='D'){
                s[0]='U';
                g=true;
            }
            if(j==1 && s[1]=='L'){
                s[1]='R';
                g=true;
            }
            else if(j==m && s[1]=='R'){
                s[1]='L';
                g=true;
            }

            if(g){
                cnt++;
                continue;
            }


            if(s[0]=='U') i--;
            else i++;

            if(s[1]=='L') j--;
            else j++;

            if(i==x2 && j==y2) break;



            if(i==x1 && j==y1){
                fnt++;
                if(fnt==4){
                    f=true;
                    break;
                }
            }
        }
        if(f) cout<<-1<<endl;
        else cout<<cnt<<endl;
    }
}