#include <iostream>
using namespace std;


void Fillarray(int* const arr,const int size){
	for(int i = 0; i < size; ++i){
		arr[i] = rand() % 100;
	}
}


void Showarray(const int* const arr,const int size){
	for(int i = 0; i < size; ++i){
		cout << arr[i] << "\t";
	}
}



void foo( &a, &b,int size){
	
	int* tmp = new int[size];
	for(int i = 0; i < size; ++i){
		tmp[i] = a[i];
	}
	for(int i = 0; i < size; ++i){
		a[i] = b[i];
	}
	for(int i = 0; i < size; ++i){
		b[i] = tmp[i];
	}

	delete[] tmp;

}


int main(){
	
	int size = 5;
	int* firstarray = new int[size];
	int* secondarray = new int[size];

	Fillarray(firstarray,size);
	Fillarray(secondarray,size);

	cout << "First array: " << "\t";
	Showarray(firstarray,size);

	cout << endl;

	cout << "Second array: " << "\t";
	Showarray(secondarray,size);

	cout << endl;
			
	cout << "========================================================" << endl;
	
	foo(*firstarray,*secondarray,5);

	cout << "First array: " << "\t";
	Showarray(firstarray,size);

	cout << endl;

	cout << "Second array: " << "\t";
	Showarray(secondarray,size);

	cout << endl;

	delete[] firstarray;
	delete[] secondarray;
		
	return 0;
}	
