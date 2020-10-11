// array는 같은 type끼리의 대입(assignment) 가능. C-Array 는 불가.

#include <bits/stdc++.h>
using namespace std ;

int main() {

    array <int, 5> xarr, yarr ;         // 반드시 크기가 compile time에 결정되어야 한다.

    xarr = { 0, 1, 2, 3, 4 };    // okay
    yarr = xarr ;
    cout << "\n 1. yarr[]= "  ;
    for(auto s: yarr ) cout << s << ' ';  //s는 변수의 값, value만 의미한다.

    xarr[3]= -99 ;
    cout << "\n 2. xarr[]= "  ;
    for(auto& s: xarr ) {
            s += 100 ;   // &s로 호출하면 s를 reference로 사용할 수 있어 변화가 가능
            cout << s << ' ';
    }
    cout << "\n 3. yarr[]= "  ;
    for(auto s: yarr ) {
        cout << s << ' ';
        s *= -1 ;
    }

    cout << "\n 4. yarr[]= "  ;
    for(auto& s: yarr ) cout << s << ' ';



} // end of main( )
