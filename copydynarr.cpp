#include <iostream>
using namespace std;


void Fillarray(int* const arr,const int size){

	for(int i = 0; i < size; ++i){
		arr[i] = rand() % 30;
	}
}

void Showarray(const int* const arr, const int size){
	for(int i = 0; i < size; ++i){
		cout  << arr[i] << "\t";
	}
}

int main(){

	int size = 5;

	int* firstarray = new int [size];
	int* secondarray = new int [size];

	Fillarray(firstarray,size);
	Fillarray(secondarray,size);
	
	cout << "First array: " << "\t";
	Showarray(firstarray,size);

	cout << endl;

	cout << "Second array: " << "\t";
	Showarray(secondarray,size);
	
	cout << endl;
	
	
	int*  tmparray = new int[size];
	for(int i = 0; i < size; ++i){
	
		tmparray[i] = secondarray[i];
	}

	for(int i = 0; i < size; ++i){
		
		secondarray[i] = firstarray[i];
	}

	for(int i = 0; i < size; ++i){
	
		firstarray[i] = tmparray[i];
	}

	delete[] tmparray;
	tmparray = nullptr;
	

	


	cout << "++++++++++++++++++++++++++++++++++++++" << endl;
	

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
