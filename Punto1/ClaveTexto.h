/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: ClaveTexto.h                                                                   *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define la clase -ClaveTexto- con sus respectivos métodos y atributos.   *
 *                                                                                        *	
 * Fecha de Creación: 26 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#ifndef CLAVETEXTO_H
#define CLAVETEXTO_H

#include "Clave.h"

#include <string>
using std::string;

class ClaveTexto: public Clave{
	public:
		//Constructores:
		ClaveTexto();
		ClaveTexto(string TextoClave);
		//Método set:
		void setTextoClave(string textoClave);
};

#endif
			
