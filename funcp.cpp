#include <iostream>
using namespace std;


void foo(int *pa,int *pb){

	int tmp = (*pa);
	(*pa) = (*pb);
	(*pb) = tmp;
}

void bar(int &x,int &y){

	int tmp = x;
	x = y;
	y = tmp;

}


int main(){

	int a = 3;
	int b = 5;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "+++++++++++++" << endl;

	foo(&a,&b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	cout << "================" << endl;

	int x = 11;
	int y = 22;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	cout << "+++++++++++++" << endl;

	bar(x,y);

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	return 0;



	
}
