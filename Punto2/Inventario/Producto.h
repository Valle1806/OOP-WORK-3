/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Producto.h                                                                     *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define la clase -Producto- con sus respectivos métodos y atributos.     *
 *                                                                                        *	
 * Fecha de Creación: 27 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using std::string;

class Producto{
	private:
		string nombre;
		double codigo;
	public:
		//Constructores:
		Producto();
		Producto(string nombre, double codigo);
		//Destructor:
		~Producto();
		//Métodos get:
		string getNombre();
		double getCodigo();
};

#endif
