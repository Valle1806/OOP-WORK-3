/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Jugador.cpp                                                                    *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -Jugador-.                               *
 *                                                                                        *
 * Fecha de Creación: 24 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Jugador.h"

//Esta función construye un jugador a partir de un símbolo.
Jugador::Jugador(QString simboloIn){
    simbolo = simboloIn;
    posX = 0;
    posY = 0;
}

//Esta función cambia la posición en X de un jugador.
void Jugador::setPosX(int posXIn){
    posX = posXIn;
}

//Esta función cambia la posición en Y de un jugador.
void Jugador::setPosY(int posYIn){
    posY = posYIn;
}

//Esta función cambia una de las entradas de un tablero.
void Jugador::jugar(Tablero * &T){
    T->setPos(posX, posY, simbolo);
}
