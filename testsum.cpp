#include<bits/stdc++.h>
#define LL long long
#define M 1000000007LL
using namespace std;
 
int t,p,q,r;
int A[100005], B[100005], C[100005];
LL preA[100005], preC[100005], a, b, ans;
 
LL go(int y){
    a = upper_bound(A+a,A+p, y)-A;    
    b = upper_bound(C+b,C+r, y)-C;
    LL C = a*b%M;
    return (C*y + b*preA[a-1] + a*preC[b-1])%M * y%M + preA[a-1]*preC[b-1]%M;
}
 
int main() {
ios::sync_with_stdio(false);
	cin >> t;
	while(t--){
	    a = b = ans = 0;
	    cin >> p >> q >> r;
        for(int i=0;i<p;i++) cin >> A[i];
        for(int i=0;i<q;i++) cin >> B[i];
        for(int i=0;i<r;i++) cin >> C[i];
        sort(A,A+p);  sort(B, B+q); sort(C,C+r);
        preA[0] = A[0];  preC[0] = C[0];
        for(int i=1; i<p; i++) preA[i]=(preA[i-1]+A[i])%M;
        for(int i=1; i<r; i++) preC[i]=(preC[i-1]+C[i])%M;
        LL tmp = 0;
        for(int y=0; y<q;y++){
            if(y && B[y] == B[y-1]) (ans += tmp)%=M;
            else{
                tmp = go(B[y])
;                (ans += tmp)%=M;
            }
            cout << B[y-1];
        }
        cout << ans << endl;
	}
	return 0;
}
  