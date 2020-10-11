#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <array>
#define allout(MSG,X) cout<<"\n"<<MSG;for(auto w:X) {cout<<" "<<w<<",";}
using namespace std ;


int main () {
   array <int,    3> a1 = { {61,52,54} }; //double vreaces required
   array <int,    3> a2 = { 61,52,54 };
   array <string, 5> a3 = { string("a"), "b" , "PNU" ,"똥강아지","ㅎㅎㅎ" };
   //한글이 영어보다 뒤에 있다.
   //자음 순서대로 !!
   //영어는 대문자가 소문자 보다 뒤에 있다.

   allout("a1 소팅 전", a1);
   sort(a1.begin(),a1.end());
   allout("a1 소팅 후", a1);
   allout("a2 소팅 전", a2);
   sort(a2.begin(),a2.end());
   allout("a2 소팅 후", a2);

   //ranged for loop is supported
   allout("a2 소팅 전", a3);
   allout("a3의 내용",a3);
   sort(a3.begin(),a3.end());
   allout("a2 소팅 후", a3);
   return 0;
}
