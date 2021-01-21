/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Clave.cpp                                                                      *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -Clave-.                                 *
 *                                                                                        *	
 * Fecha de Creación: 26 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Clave.h"

//Esta función construye una clave vacía.
Clave::Clave(){
	textoClave = "";
}

//Esta función construye una clave a partir de un texto.
Clave::Clave(string textoClave){
	this->textoClave = textoClave;
}

//Esta función retorna el texto de una clave.
string Clave::getTextoClave(){
	return textoClave;
}
