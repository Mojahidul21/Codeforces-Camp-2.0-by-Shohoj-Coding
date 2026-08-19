// Title: Course Wishes
// Problem: https://codeforces.com/problemset/problem/2216/A
// Solution: https://codeforces.com/contest/2216/submission/387709825

#include<bits/stdc++.h>
 
using namespace std;
 
#define tourist int main(){ios::sync_with_stdio(0);cin.tie(0);  // tourist - fast input output
#define Ace_Azimuth_Aviator return 0;}                          // Ace_Azimuth_Aviator - return 0;
 
#define css <<' '                                               // css - continuous single space
#define cnl <<'\n'                                              // cnl - continuous new line
#define pnl cout<<'\n';                                         // pnl - print new line
#define tcl int t;cin>>t;while(t--){                            // tcl - test case loop
#define tnl if(t)pnl}                                           // tnl - testcase new line
 
#define pno cout<<"NO";                                         // pno - print NO
#define pye cout<<"YES";                                        // pye - print YES
#define pny ?cout<<"NO":cout<<"YES";                            // pny - print NO/YES
#define pyn ?cout<<"YES":cout<<"NO";                            // pyn - print YES/NO
 
#define pze cout<<0;                                            // pze - print 0
#define pon cout<<1;                                            // pon - print 1
#define pzo ?cout<<0:cout<<1;                                   // pzo - print 0/1
#define poz ?cout<<1:cout<<0;                                   // poz - print 1/0
 
#define pmo cout<<-1;                                           // pmo - print minus one
 
#define bat bool ans=true;                                      // bat - boolean answer true
#define baf bool ans=false;                                     // baf - boolean answer false
#define atb {ans=true;break;}                                   // atb - answer true break
#define afb {ans=false;break;}                                  // afb - answer false break
 
#define lli long long                                           // lli - long long
#define imx INT_MAX                                             // imx - INT_MAX
#define imn INT_MIN                                             // imn - INT_MIN
#define con const int c=1e9                                     // con - constant
#define mod 998244353                                           // mod - modular arithmetic
 
#define vin(a,n) vector<int>a(n);for(auto&x:a)cin>>x;           // vin - vector int input
#define vlo(a,n) vector<lli>a(n);for(auto&x:a)cin>>x;           // vlo - vector long long input
 
#define all(a) a.begin(),a.end()                                // all(a) - all elements of the container a
#define rall(a) a.rbegin(),a.rend()                             // rall(a) - all elements of the container a in reverse order
#define allc(a) a.cbegin(), a.cend()                            // allc(a) - all elements of the const container a
#define rallc(a) a.crbegin(), a.crend()                         // rallc(a) - all elements of the const container a in reverse order
 
#define pub(a,x) a.push_back(x)                                 // pub(a,x) - push back x in container a
#define emb(a,...) a.emplace_back(__VA_ARGS__)                  // emb(a,...) - emplace back argument(s) in the container a
 
#define lob lower_bound                                         // lob - lower_bound
#define upb upper_bound                                         // upb - upper_bound

tourist
tcl

int n,k;
cin>>n>>k;

vector<int>capacity(k+2);
capacity[k+1]=n;
for(int i{1};i<=k;++i)
    cin>>capacity[i];

vector<vector<int>>frq(k+2);
for(int i{1},j;i<=n;++i)
    cin>>j,emb(frq[j],i);

int m{};
vector<int>ans;
bool freeze{false};
while(m<1001&&!freeze){
    freeze=true;
    for(int i{k};m<1001&&i;--i){
        for(int j{(int)frq[i].size()-1},mn{min(capacity[i+1]-(int)frq[i+1].size(),(int)frq[i].size())};m<1001&&mn;--j,--mn,++m){
            emb(ans,frq[i].back());
            emb(frq[i+1],frq[i].back());
            frq[i].pop_back();
            freeze=false;
        }
    }
}

if(m<1001){
    cout<<m<<'\n';
    for(const auto&i:ans)cout<<i<<' ';
}
else
    pmo

tnl
Ace_Azimuth_Aviator
