#include <iostream>
using namespace std;

template <typename R>

R foo(R a , R b){
	return a + b;

}


void fillarr(int arr[],const int size){

	for(int i = 0;i<size;++i){
	
		arr[i]  = rand() % 10;
	}
}

void printarr(int arr[],const int size){

	for(int i = 0;i<size ; ++i){
		cout << arr[i] << endl;
	}
}


int main(){

	int arr[Size];
	const int Size = 10;

	fillarr(arr,10);
	printarr(arr,10);


	cout << "_____________" << ednl;

	R foo(2,5);
return 0;
}
