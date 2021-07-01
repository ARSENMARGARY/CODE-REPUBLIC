#include <iostream>
using namespace std;


template <typename R,typename T>

T foo(R a, T b){
	return a+b;
}


int  main(){

	
	cout << foo(3.4,3) << endl;
//	cout << foo(6,2) << endl;

	
}
