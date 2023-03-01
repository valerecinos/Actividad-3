#include <iostream>
using namespace std;

int main(){
	
    // and (y) &&
    // or (o) ||
    
    char lapiz, lapicero, cuaderno;
    cout << "Trae Lapiz (s/n)"<< endl;
    cin>> lapiz;
    cout << "Trae lapicero (s/n)"<< endl;
    cin >> lapicero;
    cout <<"Trae cuarderno (s/n"<< endl;
    cin >> cuaderno;
    
    //puede entrar a mi clase si usted trae un lapiz y un lapicero
    // and = el valor es verdadero si ambos son verdaderos 
    // puede entrar a mi clase si usted trae un lapiz y un lapicero
    // or (o) = el valor es verdadero si por lo menos una es verdadera
    
    //puede entrar su trae un lapiz, lapicero y cuaderno
    
if ((lapiz== 's' || lapicero =='s'&&cuaderno == 's'){
	cout << "Ingresa"<< endl;
}
else{
	cout << "Lo siento, no puede ingresar"<< endl;
}
}
