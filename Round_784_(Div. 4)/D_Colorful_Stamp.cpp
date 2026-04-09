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
        string s ;
        cin >> s ;

        bool ok = true ;

        for ( int i = 0 ; i < n ; ) {
            if ( s[i] == 'W' ) {
                i++ ;
                continue ;
            }

            int j = i ;
            int r = 0 , b = 0 ;

            while ( j < n && s[j] != 'W' ) {
                if ( s[j] == 'R' ) r++ ;
                if ( s[j] == 'B' ) b++ ;
                j++ ;
            }

            int len = j - i ;

            if ( len == 1 || r == 0 || b == 0 ) {
                ok = false ;
                break ;
            }

            i = j ;
        }

        cout << ( ok ? "YES\n" : "NO\n" ) ;
    }

    return 0 ;
}
