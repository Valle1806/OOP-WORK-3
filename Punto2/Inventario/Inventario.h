/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Inventario.h                                                                   *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define la clase -Inventario- con sus respectivos métodos y atributos.   *
 *                                                                                        *	
 * Fecha de Creación: 27 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <vector>
using std::vector;

#include "Producto.h"

class Inventario{
	private:
		int cantidad;
		vector <Producto*> productos;
	public:
		//Constructores:
		Inventario();
		Inventario(int cantidad);
		//Destructor:
		~Inventario();
		//Métodos get:
		int getCantidad();
		Producto * getProducto(int posicion);
		string getNombreProducto(int posicion);
		double getCodigoProducto(int posicion);
		//Método particular:
		void ingresarProducto(Producto * P);
};

#endif
