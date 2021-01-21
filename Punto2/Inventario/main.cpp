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
 * Fecha de Creación: 27 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Producto.h"
#include "Inventario.h"

#include <iostream>

using namespace std;

#include <string>

//Esta función realiza el control de excepciones para obtener la cantidad de productos.
int obtener_cantidad(){
    string entrada_invalida;
    int entrada;
    try{
		cout << "\nIngrese la cantidad de productos a almacenar: \n";
		cin >> entrada;
		cout << endl;
		if(cin.fail() || entrada < 0 || entrada > 10000) throw 0;
	}
	catch(int &N){
		while(cin.fail() || entrada < 0 || entrada > 10000){
			cout << "Debe ingresar un valor numérico positivo y menor a 10000. \n\n";
			cin.clear();
			getline(cin,entrada_invalida);
			cout << "Ingrese nuevamente la cantidad: \n";   
			cin >> entrada;
			cout << endl;
		}
	}
    return entrada;
}

//Esta función realiza el control de excepciones para obtener el código de un producto.
double obtener_codigo(int x){
	string entrada_invalida;
    int entrada;
    try{
		cout << "Ingrese el código del producto número " << x << ": \n";
		cin >> entrada;
		cout << endl;
		if(cin.fail()) throw 0;
	}
	catch(int &N){
		while(cin.fail()){
				cout << "Debe ingresar un valor numérico. \n\n";
				cin.clear();
				getline(cin,entrada_invalida);
				cout << "Ingrese nuevamente el código: \n";   
				cin >> entrada;
				cout << endl;
		}
	}
	return entrada;
}

int main(int argc, char* argv[]){
	
	//Declaramos las variables a utilizar:
	int cantidad;
	string nombre;
	double codigo;
	Producto * P = 0;

	//Obtenemos la cantidad de productos a ingresar e instanciamos el inventario:
	cantidad = obtener_cantidad();				
	Inventario * objInventario = new Inventario(cantidad);
	
	//Iteramos pidiendo los datos del producto a ingresar las veces requeridas:
	for(int x=0; x<cantidad; x++){
		
		//Obtenemos el código y nombre del producto, instanciamos y lo ingresamos al inventario.
		cout << "Ingrese el nombre del producto número " << (x+1) << ": \n";
		cin >> nombre;
		cout << endl;
		codigo = obtener_codigo((x+1));
		P = new Producto(nombre, codigo);
		objInventario->ingresarProducto(P);
		}	
		
	return 0;
}
	

		
		
		
