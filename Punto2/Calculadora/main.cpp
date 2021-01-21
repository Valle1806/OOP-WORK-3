/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: main.cpp                                                                       *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa contiene las instancias e implementaciones para la ejecución.           *
 *                                                                                        *	
 * Fecha de Creación: 28 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Calculadora.h"

#include <iostream>

using namespace std;

#include <string>

//Esta función imprime la cabecera del programa.
void cabecera(){
	cout << "\n*********************************\n";
	cout << "*          CALCULADORA          *\n";
	cout << "*********************************\n\n";
}

//Esta función imprime el menú del programa.
void menu(){
	cout << "*********************************\n";
	cout << "* Ingrese la operación deseada: *\n";
	cout << "*-------------------------------*\n";
	cout << "* 1. Suma.                      *\n";
	cout << "* 2. Resta.                     *\n";
	cout << "* 3. Multiplicación.            *\n";
	cout << "* 4. División.                  *\n";
	cout << "*********************************\n\n";
}	

//Esta función imprime el resultado del programa.
void fin(double R){
	cout << "*********************************\n";
	cout << "*            RESULTADO          *\n";
	cout << "*********************************\n\n";
	cout << "Su resultado es: " << R << endl;
	cout << "\n*********************************\n";
	cout << "*       ¿Desea continuar?       *\n";
	cout << "*-------------------------------*\n";
	cout << "* 1. Si.                        *\n";
	cout << "* 2. No.                        *\n";
	cout << "*********************************\n\n";
}

//Esta función realiza el control de excepciones al ingresar el primer número.
double obtener_entrada1(){
    string entrada_invalida;
    double entrada;
    try{
		cout << "Ingrese el primer número: \n"; 
		cin >> entrada;
		cout << endl;
		if(cin.fail()) throw 0;
	}
	catch(int &N){
		while(cin.fail()){
			cout << "Debe ingresar un valor numérico. \n\n";
			cin.clear();
			getline(cin,entrada_invalida);
			cout << "Ingrese nuevamente el primer número: \n";   
			cin >> entrada;
			cout << endl;
		}
	}
    return entrada;
}

//Esta función realiza el control de excepciones al ingresar el segundo número.
double obtener_entrada2(){
	string entrada_invalida;
    double entrada;
    try{
		cout << "Ingrese el segundo número: \n"; 
		cin >> entrada;
		cout << endl;
		if(cin.fail()) throw 0;
	}
	catch(int &N){
		while(cin.fail()){
			cout << "Debe ingresar un valor numérico. \n\n";
			cin.clear();
			getline(cin,entrada_invalida);
			cout << "Ingrese nuevamente el segundo número: \n";   
			cin >> entrada;
			cout << endl;
		}
	}
    return entrada;
}

int main(int argc, char * argv[]){
	
	//Declaramos las variables a utilizar.
	double A;
	double B;
	bool detener = true;
	Calculadora * C = 0;
	int opcion;
	int seleccion;
	
	do{
		
		//Obtenemos las entradas e instanciamos la calculadora.
		cabecera();
		A = obtener_entrada1();
		B = obtener_entrada2();
		C = new Calculadora(A,B);
		
		//Procedemos a solicitar la operación.
		menu();
		cin >> opcion;
		cout << endl;
		switch(opcion){
			case 1:
				fin(C->sumar());
				break;
			case 2:
				fin(C->restar());
				break;
			case 3:
				fin(C->multiplicar());
				break;
			case 4:
			
				//Realizamos un control de excepciones en caso de intentar dividir entre cero.
				try{
					if(B == 0) throw 0;
					fin(C->dividir());
				}
				catch(int &N){
					cout << "No se puede dividir entre cero. \n";
				}
				break;
		}
		
		//Preguntamos si se desea cerrar el programa o seguirlo ejecutando.
		if(opcion == 4 && B == 0){
			cout << "\n*********************************\n";
			cout << "*       ¿Desea continuar?       *\n";
			cout << "*-------------------------------*\n";
			cout << "* 1. Si.                        *\n";
			cout << "* 2. No.                        *\n";
			cout << "*********************************\n\n";
		}
		cin >> seleccion;
		if(seleccion == 2){
			detener = false;
		}
	}while(detener);
} 
			
	
	
	
	
