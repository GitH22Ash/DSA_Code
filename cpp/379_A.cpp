    /*Ayush Bijalwan 
    Newbie  
    28-01-2026*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
void solve(){
    int a,b;
    cin>>a>>b;
    int hrs = 0;
    int burnt = 0;
    while(a>0){
        hrs += a;
        burnt+=a;
        a = burnt/b;
        burnt = burnt%b;
    }
    cout<<hrs;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

// int t;
// cin >> t;
// while (t--)
// {
// solve();
// }
solve();
return 0;
}


