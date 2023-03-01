#include <iostream>
using namespace std;

main(){
	//determinar si un numero es par o impar
	int num=0;
	cout << "Ingrese numero:"{
		cin>>num;
		//dividir un numero entre dos su residuo es cero entonces por caso contrario es impar
		if ((num%2)==0){
			cout<< "par"<< endl;
		}
		else{
			cout << "impar"<< endl;
		}
		system("pause");
}
