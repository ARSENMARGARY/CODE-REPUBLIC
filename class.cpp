#include <iostream>
#include <string>
using namespace std;

class Human{
	public:
		string name;
		int age;
		int weight;
	
		void Printinfo(){
			cout << "Name: " << name << endl << "Age: " << age << endl << "Weight: " << weight << " kg " << endl << endl;
		}
};


int main(){

	Human firstHuman;
	firstHuman.name = "Arsen";
	firstHuman.age = 24;
	firstHuman.weight = 85;

	Human secondHuman;
	firstHuman.Printinfo();
	secondHuman.Printinfo();



	return 0;
}
