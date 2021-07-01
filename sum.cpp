#include <iostream>
using namespace std;

int sum(int a ,int  b);
double sum(double a, double b);
float sum(float a,float b,float c);



int main(){

	sum(3,6);


}


int sum(int a,int b){
	int result = a+b;
	cout << "a+b = " << result; 
}

double sum(double a,double b){
	double result = a+b;
	cout << "a+b = " << result;
}

float sum(float a,float b,float c){
	float result = a+b;
	cout << "a+b = " << result;

}
