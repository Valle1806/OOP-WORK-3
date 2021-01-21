/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: ClaveImagen.h                                                                  *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define la clase -ClaveImagen- con sus respectivos métodos y atributos.  *
 *                                                                                        *	
 * Fecha de Creación: 26 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#ifndef CLAVEIMAGEN_H
#define CLAVEIMAGEN_H

#include "Clave.h"

class ClaveImagen: public Clave{
	private:
		int imagen [3][2];
	public:
		//Constructores:
		ClaveImagen();
		ClaveImagen(string textoClave);
		ClaveImagen(int imagen [3][2]);
		//Métodos set:
		void setTextoClave(string textoClave);
		void setTextoClave(int imagen [3][2]);
};

#endif
		
