/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: ClaveTexto.cpp                                                                 *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -ClaveTexto-.                            *
 *                                                                                        *	
 * Fecha de Creación: 26 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "ClaveTexto.h"

//Esta función construye una clave texto vacía.
ClaveTexto::ClaveTexto():Clave(){}

//Esta función construye una clave texto a partir de un texto.
ClaveTexto::ClaveTexto(string textoClave):Clave(textoClave){}

//Esta función cambia el texto de una clave texto a partir de otro texto.
void ClaveTexto::setTextoClave(string textoClave){
	this->textoClave = textoClave;
}


	


