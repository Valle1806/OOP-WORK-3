/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: ClaveLlave.h                                                                   *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define la clase -ClaveLlave- con sus respectivos métodos y atributos.   *
 *                                                                                        *	
 * Fecha de Creación: 26 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#ifndef CLAVELLAVE_H
#define CLAVELLAVE_H

#include <string>
using std::string;

#include "Clave.h"

class ClaveLlave: public Clave{
	private:
		string algoritmo;
		string texto;
	public:
		//Constructores:
		ClaveLlave();
		ClaveLlave(string textoClave);
		ClaveLlave(string algoritmo, string texto);
		//Métodos set:
		void setTextoClave(string textoClave);
		void setTextoClave(string algoritmo, string texto);
};

#endif
