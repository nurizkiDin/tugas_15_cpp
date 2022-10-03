#include <iostream>

using namespace std;

float perkalian(float *x, float *y){
	*x = *x**y;
}

int main(){
	float x, y;
	
	cout<<"Inputkan x : ";
	cin>>x;
	cout<<"Inputkan y : ";
	cin>>y;
	perkalian(&x, &y);
	cout<<"Hasil : "<<x;
}
