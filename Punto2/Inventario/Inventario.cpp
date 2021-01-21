/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Inventario.cpp                                                                 *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -Inventario-.                            *
 *                                                                                        *	
 * Fecha de Creación: 27 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Inventario.h"

//Esta función construye un inventario vacío.
Inventario::Inventario(){
	cantidad = 0;
}

//Esta función construye un inventario a partir de un número.
Inventario::Inventario(int cantidad){
	this->cantidad = cantidad;
}

//Esta función destruye un inventario.
Inventario::~Inventario(){
	for(int x=0; x<productos.size(); x++){
		delete productos[x];
		productos[x] = 0;
		productos.erase(productos.begin() + x);
	}
}

//Esta función retorna la cantidad de un inventario.
int Inventario::getCantidad(){
	return cantidad;
}

//Esta función retorna un producto del inventario dada su posición.
Producto * Inventario::getProducto(int posicion){
	return productos[posicion];
}

//Esta función retorna el nombre de un producto en el inventario dada su posición.
string Inventario::getNombreProducto(int posicion){
	return productos[posicion]->getNombre();
}

//Esta función retorna el código de un producto en el inventario dada su posición.
double Inventario::getCodigoProducto(int posicion){
	return productos[posicion]->getCodigo();
}

//Esta función ingresa un producto en el inventario.
void Inventario::ingresarProducto(Producto * P){
	productos.push_back(P);
}


