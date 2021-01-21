/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Calculadora.h                                                                  *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define la clase -Calculadora- con sus respectivos métodos y atributos.  *
 *                                                                                        *	
 * Fecha de Creación: 28 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#ifndef CALCULADORA_H
#define CALCULADORA_H

class Calculadora{
	private:
		double A;
		double B;
	public:
		//Constructor:
		Calculadora(double A, double B);
		//Destructor:
		~Calculadora();
		//Método set:
		void setNum(double A, double B);
		//Métodos operacionales:
		double sumar();
		double restar();
		double multiplicar();
		double dividir();
};

#endif
