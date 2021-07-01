#include <iostream>
#include <string>
using namespace std;


class Point{
	public:
		int get_x(){
			return m_x;
		}
		void set_x(int value_x){
			m_x = value_x;
		}



		int get_y(){
			return  m_y;
		}
		void set_y(int value_y){
			m_y = value_y;
		}

		void printInfo(){
			cout << "X = " << m_x << "\t" << "Y = " << m_y << endl;
		}



	private:
		int m_x;
		int m_y;


};



	int main(){
	
		Point tiv;
		tiv.set_x(8);
		//tiv.get_x();
		tiv.set_y(10);
		//tiv.get_y();
		tiv.printInfo();
	
	
	return 0;
	}



