#include <iostream>
using namespace std;

int main(){

	int Size = 5;
	int *arr = new int[Size];

	for(int i = 0; i < Size; ++i){
		
		cout << arr[i] << "\t";
		cout << arr + i << endl;
	}


	return 0;

}
