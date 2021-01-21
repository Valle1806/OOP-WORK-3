/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Jugador.h                                                                      *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define la clase -Jugador- con sus respectivos métodos y atributos.      *
 *                                                                                        *
 * Fecha de Creación: 24 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#ifndef JUGADOR_H
#define JUGADOR_H

#include <QMainWindow>
#include "Tablero.h"

class Jugador {
    private:
        QString simbolo;
        int posX;
        int posY;
    public:
        //Constructor:
        Jugador(QString simboloIn);
        //Métodos set:
        void setPosX(int posXIn);
        void setPosY(int posYIn);
        //Método particular:
        void jugar(Tablero * &T);
};

#endif
