/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Calculadora.cpp                                                                *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -Calculadora-.                           *
 *                                                                                        *	
 * Fecha de Creación: 28 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Calculadora.h"

//Esta función construye una calculadora con dos números.
Calculadora::Calculadora(double A, double B){
	this->A = A;
	this->B = B;
}

//Esta función destruye una calculadora.
Calculadora::~Calculadora(){}

//Esta función cambia los dos números de una calculadora por otros nuevos.
void Calculadora::setNum(double A, double B){
	this->A = A;
	this->B = B;
}

//Esta función suma ambos números de la calculadora.
double Calculadora::sumar(){
	return (A + B);
}

//Esta función resta ambos números de la calculadora.
double Calculadora::restar(){
	return (A - B);
}

//Esta función multiplica ambos números de la calculadora.
double Calculadora::multiplicar(){
	return (A * B);
}

//Esta función divide ambos números de la calculadora.
double Calculadora::dividir(){
	return (A / B);
} 
