#include <iostream>
using namespace std;

int main(){
	int n1=0,n2=0, n3=0, promedio=0;
	cout << "Ingrese Nota 1: ";
	cin >>n1
	cout << "Ingrese Nota 2: ";
	cin >>n2
	cout << "Ingrese Nota 3: ";
	cin >>n3
	
	promedio = (n1+n2+n3)/3;
	
/*	if (primedio>=61){
		cout << "El estudiante aprobo"<< endl;
	}
	else {
		cout << "Reprobo"<< endl;
		
	}*/
	
string mensaje=" ";
mensaje = promedio>=61 ? "aprobado" : "Reprobado";
cout << "Su promedio es de: "<< promedio << "Por lo tanto"<< mensaje <<  endl;

if (promedio>=0 && promedio<61){
	cout << "Mala nota";
}
	if (promedio>=61 && promedio<81){
	cout << "Buena nota";
}
	if (promedio>=81){
	cout << "Excelente nota";
}


	
	
	
	system("pause");
}
