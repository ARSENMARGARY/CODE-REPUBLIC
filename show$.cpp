#include <iostream>
using namespace std;

void show(){
	
	cout << "***********MENU***********" << endl;
	cout << "1. Chack balance" << endl;
	cout << "2. Deposite" << endl;
	cout << "3. Withdraw" <<endl;
	cout << "4. exit" << endl;
	cout << "__________________________ " << endl;
}





int main(){
	
	int option;
	double balance = 500;
	do{
	show();
	
	cout << "Option: ";
	cin >> option;
	switch(option){
		case 1:cout << "Balance is: " << balance << " $ " <<  endl;break;

		case 2:cout << "Deposit amount: ";
		double deposit;
		cin >> deposit;
		if(deposit >= 0){
		balance += deposit;break;
		}else{cout << "what the fuck?";}break;

		case 3:cout << "Withdrow amount: ";
		double withdrow;
		       cin >> withdrow;
		       if(withdrow <= balance){
		       		balance -= withdrow;break;
		       }else{cout << "there is no many";}
	}
	
	}while(option != 4);




	



return 0;
};
