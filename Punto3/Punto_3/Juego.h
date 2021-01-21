/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Juego.h                                                                        *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define la clase -Juego- con sus respectivos métodos y atributos.        *
 *                                                                                        *
 * Fecha de Creación: 24 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#ifndef JUEGO_H
#define JUEGO_H

#include <QMainWindow>
#include "Jugador.h"
#include "Tablero.h"

namespace Ui {
class Juego;
}

class Juego : public QMainWindow
{
    Q_OBJECT

public:
    explicit Juego(QWidget *parent = 0);
    ~Juego();

private slots:
    void on_UNO_clicked();

    void on_DOS_clicked();

    void on_TRES_clicked();

    void on_CUATRO_clicked();

    void on_CINCO_clicked();

    void on_SEIS_clicked();

    void on_SIETE_clicked();

    void on_OCHO_clicked();

    void on_NUEVE_clicked();

    void on_REINICIAR_clicked();

private:
    Ui::Juego *ui;
    int empate;
    bool decision;
    Jugador * J1;
    Jugador * J2;
    Tablero * T;
};

#endif // JUEGO_H
