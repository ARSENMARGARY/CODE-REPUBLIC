#include <iostream>
#include <ctime>
using namespace std;

int main(){
	srand(time(NULL));
	const int Size = 10;
	int arr[Size];

	bool already;


	for(int i = 0;i< Size;){
		already = false;
		int newvalue = rand() % 20;
		for(int j = 0;j < i; j++){
		
		if(arr[j] == newvalue){
					
			already = true;
			break;
		}
		
		}
		
		if(!already){
		
			arr[i] = newvalue;
			i++;
		}
	}

	for(int i = 0;i<Size;i++){
		cout << arr[i] << endl;
	}

return 0;
}
