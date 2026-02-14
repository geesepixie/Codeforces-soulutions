#include <bits/stdc++.h>
using namespace std ;

void solve()
{
    long long n , k ;
    scanf( "%lld%lld" , &n , &k ) ;
    
    long long ans = k + ( k - 1 ) / ( n - 1 ) ;
    printf( "%lld\n" , ans ) ;
}

int main()
{
    int t ;
    scanf( "%d" , &t ) ;
    while ( t-- ) { solve() ; }
        
    return 0 ;
}
