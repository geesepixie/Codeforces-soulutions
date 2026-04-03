#include <bits/stdc++.h>
using namespace std ;
 
int main() {
    ios::sync_with_stdio(false) ;
    cin.tie(nullptr) ;
 
    int t ;
    cin >> t ;
 
    while ( t-- ) {
        int n ;
        cin >> n ;
 
        vector <int> a(n) ;
        for ( int i = 0 ; i < n ; i++ ) cin >> a[i] ;
 
        int odd_parity = a[0] % 2 ;
        int even_parity = a[1] % 2 ;
 
        bool ok = true ;
 
        for ( int i = 0 ; i < n ; i++ ) {
            if ( i % 2 == 0 ) {
                if ( a[i] % 2 != odd_parity ) {
                    ok = false ;
                    break ;
                }
            } else {
                if ( a[i] % 2 != even_parity ) {
                    ok = false ;
                    break ;
                }
            }
        }
 
        cout << ( ok ? "YES\n" : "NO\n") ;
    }
 
    return 0 ;
}
