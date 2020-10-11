#include <bits/stdc++.h>
using namespace std ;

int main() {

    array <int, 5> arr1 = { 11, 12, 13, 14, 15 };
    array <int,5> arr2;
    int arr3[5];

    cout << "t1. " << arr1.at(2) << endl;
    cout << "t2. " << arr1[2] << endl;
    // C-style !!
    cout << "t3. " << arr1.front() << endl;
    cout << "t4. " << arr1.back() << endl;

    int* pData = arr1.data();
    // 배열을 포인터 타입으로 반환합니다
    // arr.data() => value_type* data() noexcept;
    cout << "t5. " << pData[3] << endl;

    cout << "초기화 안했을때 arr2"<< endl;
    for( auto w : arr2) cout << w << endl;
    // 전혀 다른 값이 나와버림

    cout << "초기화 안했을때 arr3" << endl;
    for (auto w : arr3) cout << w << endl;
    // 전혀 다른 값이 나와버림

    //cout << "at(0)= " << arr2.at(0) << endl;
    //cout << "arr2[0]= " << arr2[0] << endl;


    return 0;
}


