/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: ClaveImagen.cpp                                                                *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -ClaveImagen-.                           *
 *                                                                                        *	
 * Fecha de Creación: 26 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "ClaveImagen.h"

#include <sstream>
using std::stringstream;

//Esta función construye una clave imagen vacía.
ClaveImagen::ClaveImagen():Clave(){
	for(int x=0; x<3; x++){
		for(int y=0; y<2; y++){
			imagen[x][y] = 0;
		}
	}
}

//Esta función construye una clave imagen a partir de un texto. 
ClaveImagen::ClaveImagen(string textoClave):Clave(textoClave){
	
	//Se separa el texto por filas.
	int posicion1 = textoClave.find("#");
	string texto = textoClave.substr((posicion1+1),textoClave.length());
	int posicion2 = texto.find("#");
	string fila3 = texto.substr((posicion2+1),texto.length());
	string fila2 = textoClave.substr((posicion1+1),posicion2);
	string fila1 = textoClave.substr(0,posicion1);
	
	//Se separa cada número y se guardan en un arreglo.
	
	string numeros [6];
	
	int posicion3 = fila1.find(",");
	numeros[0] = fila1.substr(0,posicion3);
	numeros[1] = fila1.substr((posicion3+1),fila1.length());
	
	int posicion4 = fila2.find(",");
	numeros[2] = fila2.substr(0,posicion4);
	numeros[3] = fila2.substr((posicion4+1),fila2.length());
	
	int posicion5 = fila3.find(",");
	numeros[4] = fila3.substr(0,posicion5);
	numeros[5] = fila3.substr((posicion5+1),fila3.length()); 
	
	//Convertimos cada número de string a int y los guardamos en la matriz.
	int resultado;
	int contador = 0;
	for(int x=0; x<3; x++){
		for(int y=0; y<2; y++){
			stringstream convert(numeros[contador]);
			if(!(convert >> resultado))
			resultado = 0;
			imagen[x][y] = resultado;
			contador += 1;
		}
	}
}

//Esta función construye una clave imagen a partir de una matriz.
ClaveImagen::ClaveImagen(int imagen[3][2]):Clave(){
	
	//Guardamos cada elemento de la matriz de entrada en la matriz de atributo.
	for(int x=0; x<3; x++){
		for(int y=0; y<2; y++){
			this->imagen[x][y] = imagen[x][y];
		}
	}
	
	//convertimos cada elemento de la matriz de entrada de int a string y los guardamos en otra matriz.
	string matriz[3][2];
	for(int x=0; x<3; x++){
		for(int y=0; y<2; y++){
			string resultado;
			stringstream conversion;
			conversion << imagen[x][y];
			resultado = conversion.str();
			matriz[x][y] = resultado;
		}		
	}

	//Concatenamos cada elemento de la matriz de la manera correcta y lo guardamos en el texto atributo.
	textoClave = matriz[0][0] + "," + matriz[0][1] + "#";
	textoClave += matriz[1][0] + "," + matriz[1][1] + "#";
	textoClave += matriz[2][0] + "," + matriz[2][1];
}

//Esta funcion cambia el texto de una clave imagen a partir de otro texto.
void ClaveImagen::setTextoClave(string textoClave){
	
	//Guardamos el texto de entrada en el texto atributo.
	this->textoClave = textoClave;
	
	//Separamos el texto en las filas de números.
	int posicion1 = textoClave.find("#");
	string texto = textoClave.substr((posicion1+1),textoClave.length());
	int posicion2 = texto.find("#");
	string fila3 = texto.substr((posicion2+1),texto.length());
	string fila2 = textoClave.substr((posicion1+1),posicion2);
	string fila1 = textoClave.substr(0,posicion1);
	
	//Separamos cada número y los guardamos en un arreglo.
	
	string numeros [6];
	
	int posicion3 = fila1.find(",");
	numeros[0] = fila1.substr(0,posicion3);
	numeros[1] = fila1.substr((posicion3+1),fila1.length());
	
	int posicion4 = fila2.find(",");
	numeros[2] = fila2.substr(0,posicion4);
	numeros[3] = fila2.substr((posicion4+1),fila2.length());
	
	int posicion5 = fila3.find(",");
	numeros[4] = fila3.substr(0,posicion5);
	numeros[5] = fila3.substr((posicion5+1),fila3.length()); 

	//Convertimos cada número de string a int y los guardamos en la matriz de atributo.
	int resultado;
	int contador = 0;
	for(int x=0; x<3; x++){
		for(int y=0; y<2; y++){
			stringstream convert(numeros[contador]);
			if(!(convert >> resultado))
			resultado = 0;
			imagen[x][y] = resultado;
			contador += 1;
		}
	}
}

//Esta función cambia el texto de una clave imagen a partir de una matriz.
void ClaveImagen::setTextoClave(int imagen[3][2]){
	
	//Guardamos cada elemento de la matriz de entrada en la matriz atributo.
	for(int x=0; x<3; x++){
		for(int y=0; y<2; y++){
			this->imagen[x][y] = imagen[x][y];
		}
	}

	//Convertimos cada entrada de la matriz de int a string y las guardamos en otra matriz.
	string matriz[3][2];
	for(int x=0; x<3; x++){
		for(int y=0; y<2; y++){
			string resultado;
			stringstream conversion;
			conversion << imagen[x][y];
			resultado = conversion.str();
			matriz[x][y] = resultado;
		}		
	}
	
	//Concantenamos cada elemento de la manera correcta y lo guardamos en el texto atributo.
	textoClave = matriz[0][0] + "," + matriz[0][1] + "#";
	textoClave += matriz[1][0] + "," + matriz[1][1] + "#";
	textoClave += matriz[2][0] + "," + matriz[2][1];
}
	

	
	
		
		
			 
	
	
	
	
			
