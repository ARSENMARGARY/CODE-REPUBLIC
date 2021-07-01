#include <iostream>
using namespace std;


class coffee{

	public:
		void start(){
			bool voltageNormal = voltage();
			voltageNormal ? cout << "VJUUUU" << endl : cout << "PI PI PI" << endl;	
			//if(voltageNormal){
			//	cout << "v" << endl;
			//}else{
			//	cout << "p";
			//}
			
		}
		
	private:
		bool voltage(){
			return false;
		}

};



int main(){

	coffee coffeecup;
	coffeecup.start();


return 0;
}
