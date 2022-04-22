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
		int valorCuadrado = 0;
		int opcionSeleccionada = 0;
		bool validacionDatos = false;
		cout << "Ingrese la opcion que desea encontrar \n 1. Lado A \n 2. Lado B \n 3. Hipotenusa  \n --> ";
		cin >> opcionSeleccionada;
		
		if(opcionSeleccionada == 1 || opcionSeleccionada == 2){
			cout << "Ecuacion inicial: / C^2 = A^2 + B^2" << endl;
		}
		
		//opcion 1
		if	(opcionSeleccionada == 1){
			cout << "Despajando para A " << "\n" << "A^2 = B^2 - C^2" << endl;
			cout << "Ingrese el lado B - > ";
			cin >> ladoB;
			cout << "Ingrese la Hipotenusa - > ";
			cin >> hipotenusa;
			validacionDatos = ( hipotenusa >= 4 & hipotenusa <= 16 ) & ( ladoB >= 4 & ladoB <= 16 ) & (hipotenusa > ladoB);
			
			
			
		}
		
		//opcion 2
		if	(opcionSeleccionada == 2){
			cout << "Despajando para B " << "\n" << "B^2 = A^2 - C^2" << endl;
			cout << "Ingrese el lado A - > ";
			cin >> ladoA;
			cout << "Ingrese la Hipotenusa - > ";
			cin >> hipotenusa;
			valorCuadrado = (ladoA*ladoA) - (hipotenusa*hipotenusa);
			validacionDatos = ( hipotenusa >= 4 & hipotenusa <= 16 ) & ( ladoA >= 4 & ladoA <= 16 ) & (hipotenusa > ladoA);
		}
		
		// opcion 3
		if	(opcionSeleccionada == 3){
			cout << "Ecuacion: / C^2 = A^2 + B^2" << endl;
			cout << "Ingrese el lado A - > ";
			cin >> ladoA;
			cout << "Ingrese el lado B - > ";
			cin >> ladoB;
			validacionDatos = ( ladoA >= 4 & ladoA <= 16 ) & ( ladoB >= 4 & ladoB <= 16 );
		}
		
		
		if(validacionDatos){
			
		}else{
			cout << "Los valores ingresados no son correctos"  << endl;
		}
		
		
	
		
		
		/*
		int contador = 0;
		for (int i = 2 ; i > valorCuadrado ; i++){
			int contadorInterno = 0;
			for(int j = 1; j>i ; i++ ){
				if(i % j == 0)
					contadorInterno++;	
			}
			if (contadorInterno <= 1){
				
			}
		}
		*/
		
		
		//Ciclo repetitivo
		cout << "Desea continuar? S/N  -- > ";
		cin >> respuesta;
		if (respuesta != 'S'){
			condicion = false;
		}else{
			cout << "---------------------------------" << endl;
		}
	}
	return 0;		
}