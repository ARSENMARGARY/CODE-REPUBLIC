#include <iostream>
using namespace std;

class Absemployee{
	virtual void Promotion() = 0;
};
class Employee : Absemployee{
	
	private:
	
		string m_name;
		string m_company;
		int m_age;

	public:

		void set_name(string name){
			m_name = name;
		}
		string get_name(){
			return m_name;
		}

		void set_company(string company){
			m_company = company;
		}
		string get_company(){
			return m_company;
		}

		void set_age(int age){
			m_age = age;
		}
		int get_age(){
			return m_age;
		}

		void Promotion(){
			if(m_age > 26 ){
				cout << m_name << " Congrutulation!" << endl;
			}else{
				cout << m_name << " fuck you :)" << endl;
			}
		}

		void yourself(){
			cout << "Name - " << m_name << endl;
			cout << "Company - " << m_company << endl;
			cout << "Age: " << m_age << endl;
			cout << "_____________________" << endl;
	
		}

		Employee(string name,string company,int age){
			this -> m_name = name;
			this -> m_company = company;
			this -> m_age = age;
		}

	};



int main(){

	Employee employee1 = Employee("Arsen", "HermiNa" , 25);
	//employee1.yourself();

	Employee employee2 = Employee("Hrach" , "EL-canc" , 30);
	//employee2.yourself();
	//cout << employee1.get_name() << " is " << employee1.get_age() << "years old" << endl;	
	employee1.Promotion();
	employee2.Promotion();
	return 0;

}
