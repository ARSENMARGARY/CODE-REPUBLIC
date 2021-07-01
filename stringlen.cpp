#include <iostream>
#include <string>
using namespace std;

int foo(char *str){
	
	int count = 0;
	while(str [count] != '\0' ){
		count ++;
	}
	return count;
}



int main(){

	char* str = "hello";

	cout << foo(str) << endl;

return 0;
}
