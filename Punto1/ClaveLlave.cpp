/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: ClaveLlave.cpp                                                                 *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -ClaveLlave-.                            *
 *                                                                                        *	
 * Fecha de Creación: 26 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "ClaveLlave.h"

//Esta función construye una clave llave vacía.
ClaveLlave::ClaveLlave():Clave(){}

//Esta función construye una clave llave a partir de un texto.
ClaveLlave::ClaveLlave(string textoClave):Clave(textoClave){
	
	//Separamos el texto donde está el "#".
	int posicion = textoClave.find("#");
	
	//Guardamos cada parte del texto en los atributos correspondientes.
	algoritmo = textoClave.substr(0,posicion);
	texto = textoClave.substr((posicion+1),textoClave.length());
}

//Esta función construye una clave llave a partir de dos textos.
ClaveLlave::ClaveLlave(string algoritmo, string texto):Clave(){
	
	//Guardamos cada texto de entrada en sus atributos correspondientes.
	this->algoritmo = algoritmo;
	this->texto = texto;
	
	//Concatenamos correctamente ambos textos y lo guardamos en el texto atributo.
	textoClave = algoritmo + "#" + texto;
}

//Esta función cambia el texto de una clave llave a partir de otro texto.
void ClaveLlave::setTextoClave(string textoClave){
	
	//Guardamos el texto de entrada en el atributo.
	this->textoClave = textoClave;
	
	//Separamos el texto donde está el "#".
	int posicion = textoClave.find("#");
	
	//Guardamos cada parte del texto en su atributo correspondiente.
	algoritmo = textoClave.substr(0,posicion);
	texto = textoClave.substr((posicion+1),textoClave.length());
}

//Esta función cambia el texto de una clave llave a partir de dos textos.
void ClaveLlave::setTextoClave(string algoritmo, string texto){
	
	//Guardamos cada texto en su atributo correspondiente.
	this->algoritmo = algoritmo;
	this->texto = texto;
	
	//Concatenamos correctamente ambos textos y guardamos en el texto atributo.
	textoClave = algoritmo + "#" + texto;
}
