/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: main.cpp                                                                       *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa contiene las instancias e implementaciones para la ejecución.           *
 *                                                                                        *
 * Fecha de Creación: 24 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Juego.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Juego w;
    w.show();

    return a.exec();
}
