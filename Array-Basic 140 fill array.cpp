
#include <array>
#include <iostream>
using namespace std ;
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<","


int main() {

	std::array<int, 20> arr1;
	arr1.fill(100);


	allout("fill의 처리결과", arr1) ;

	return 0;
}
