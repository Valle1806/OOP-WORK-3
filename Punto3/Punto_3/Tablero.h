/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Tablero.h                                                                      *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define la clase -Tablero- con sus respectivos métodos y atributos.      *
 *                                                                                        *
 * Fecha de Creación: 24 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#ifndef TABLERO_H
#define TABLERO_H

#include <QMainWindow>

class Tablero {
    private:
        QString triqui [3][3];
    public:
        //Constructor:
        Tablero();
        //Método get:
        QString getPos(int posXIn, int posYIn);
        //Método set:
        void setPos(int posXIn, int posYIn, QString S);
        //Métodos particulares:
        bool ocupada(int F, int C);
        QString juzgar(bool &decision, int empate);
};

#endif

