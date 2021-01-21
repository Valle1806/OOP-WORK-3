/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Clave.h                                                                        *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define la clase -Clave- con sus respectivos métodos y atributos.        *
 *                                                                                        *	
 * Fecha de Creación: 26 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#ifndef CLAVE_H
#define CLAVE_H

#include <string>
using std::string;

class Clave{
	protected:
		string textoClave;
	public:
		//Constructores:
		Clave();
		Clave(string textoClave);
		//Método get:
		string getTextoClave();
		//Método set:
		virtual void setTextoClave(string textoClave) = 0;
};

#endif

