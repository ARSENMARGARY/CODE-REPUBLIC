#include <iostream>
#include <vector>
using namespace std;


int  main(){
	
	vector<int> myVector{1,44,22,445,5,6};
	
	myVector.push_back(2);
	myVector.push_back(3);


	for(int i = 0; i< myVector.size();++i){
	
		cout << myVector[i] << endl;
	}
	cout << "size() - " << myVector.size() << endl;
	cout << "capacity() - " << myVector.capacity() << endl;
	cout << "_________________________" << endl;


	myVector.shrink_to_fit();
	cout << "new capacity()" << endl;
	cout << "capacity() - " << myVector.capacity() << endl;
	cout << "_________________________" << endl;
		
	myVector.pop_back();
	cout << "we are declare 99" << endl;
	for(int i=0;i < myVector.size();++i){
	
		cout << myVector[i] << endl;;
	}
	cout << "size() - " << myVector.size() << endl;
	cout << "capacity() - " << myVector.capacity() << endl;

	




return 0;

}
