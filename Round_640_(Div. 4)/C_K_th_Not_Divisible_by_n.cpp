#include <bits/stdc++.h>
using namespace std ;

void solve()
{
    long long n , k ;
    scanf( "%lld%lld" , &n , &k ) ;          //  Read n and k for this test case
    
    //  Calculate the k-th positive integer not divisible by n
    //  Every block of (n - 1) valid numbers skips one multiple of n
    long long ans = k + ( k - 1 ) / ( n - 1 ) ;
    
    printf( "%lld\n" , ans ) ;                //  Print the result
}

int main()
{
    int t ;
    scanf( "%d" , &t ) ;                      //  Number of test cases
    while ( t-- ) { solve() ; }               //  Solve each test case
        
    return 0 ;
}
