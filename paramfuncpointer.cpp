#include <iostream>
#include <string>
using namespace std;


string datafrombd(){
	return "Data from BD" ;
}

string datafromIOS(){
	return "Data from IOS";
}


void showinfo(string (*foo) () ){
	cout << foo() << endl;
}


int main(){
	
	showinfo(datafromIOS);

	return 0;
}
