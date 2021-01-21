/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Producto.cpp                                                                   *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -Producto-.                              *
 *                                                                                        *	
 * Fecha de Creación: 27 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Producto.h"

//Esta función construye un producto vacío.
Producto::Producto(){
	nombre = "";
	codigo = 0;
}

//Esta función construye un producto a partir de su nombre y código.
Producto::Producto(string nombre, double codigo){
	this->nombre = nombre;
	this->codigo = codigo;
}

//Esta función destruye un producto.
Producto::~Producto(){}

//Esta función retorna el nombre del producto.
string Producto::getNombre(){
	return nombre;
}

//Esta función retorna el código del producto.
double Producto::getCodigo(){
	return codigo;
}
