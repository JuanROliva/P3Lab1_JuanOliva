#include <iostream>

using namespace std;


int main(){
	bool condicion = true;
	
	while(condicion){
		bool prueba = false;
		char respuesta;
		int ladoA = 0;
		int ladoB = 0;
		int hipotenusa = 0;
		int opcionSeleccionada = 0;
		cout << "Ingrese el lado que desea encontrar \n 1. Lado A \n 2. Lado B \n 3. Hipotenusa  \n --> ";
		cin >> opcionSeleccionada;
		if	(opcionSeleccionada == 1)
			cout << "opcion 1 \n";
		if	(opcionSeleccionada == 2)
			cout << "opcion 2 ";
		if	(opcionSeleccionada == 3)
			cout << "opcion 3";	
			
		//Ciclo repetitivo
		cout << "Desea continuar? S/N";
		cin >> respuesta;
		if (respuesta != 'S'){
			condicion = false;
		}
		return 0;
	}
		
			
}