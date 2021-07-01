#include <iostream>
using namespace std;


class car{
	
	public:
		string m_name;
		string m_color;


		car(string name,string color){
			m_name = name;
			m_color = color;
		}
		

	

	void getinfo(){
		cout << "car name: " << m_name << endl;
		cout << "car color: " << m_color << endl;
	
	}
};


int main(){
	
	car bmw("BMW" , "Blue");
	bmw.getinfo();

	car mercedes("MERCEDES","Black");
	mercedes.getinfo();
	return 0;
};


