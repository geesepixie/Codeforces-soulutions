#include <bits/stdc++.h>
using namespace std ;

vector <int> decompose( int n ) {
    vector <int> parts ;
    int place = 1 ;

    //  Keep extracting digits from the end (units, tens, hundreds...)
    while ( n > 0 ) {
        int digit = n % 10 ;      //  Get the last digit
        if ( digit != 0 )
            parts.push_back( digit * place ) ;   //  If not zero, form a round number and store it
        n /= 10 ;                  //  Remove the last digit
        place *= 10 ;              //  Move to the next place value (×10)
    }

    return parts ;                 //  Return the list of round numbers
}

int main() {
    ios::sync_with_stdio(false) ;
    cin.tie(nullptr) ;

    int t ;
    cin >> t ;                     //  Number of test cases

    while ( t-- ) {
        int n ;
        cin >> n ;                 //  Input the number to decompose

        vector <int> parts = decompose(n) ;     //  Get its round parts
        sort( parts.rbegin() , parts.rend() ) ; //  Sort in descending order for nicer output

        cout << parts.size() << "\n" ;          //  Print how many parts it was split into
        for ( int x : parts )
            cout << x << " " ;                  //  Print each round number
        cout << "\n" ;
    }
}
