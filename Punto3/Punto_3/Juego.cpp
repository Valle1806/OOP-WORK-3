/******************************************************************************************
 * Autores:                                                                               *
 *                                                                                        *
 * -Christian Camilo Taborda Campiño 1632081-3743.                                        *
 * -Cristian Camilo Vallecilla Cuellar 1628790-3743.                                      *
 * -Juan Sebastián Paz Velásquez 1626846-3743.                                            *
 *                                                                                        *
 * Título: Juego.cpp                                                                      *
 *                                                                                        *
 * Descripción:                                                                           *
 *                                                                                        *
 * -Este programa define los métodos de la clase -Juego-.                                 *
 *                                                                                        *
 * Fecha de Creación: 24 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "Juego.h"
#include "ui_Juego.h"

Juego::Juego(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Juego)
{
    ui->setupUi(this);
    empate = 0;
    decision = true;
    J1 = new Jugador("X");
    J2 = new Jugador("O");
    T = new Tablero();
    ui->JUEGA->setText("Jugador 1 (X)");
    ui->REINICIAR->setHidden(true);
}

Juego::~Juego()
{
    delete ui;
}

//Esta función marca el botón presionado si es posible con el respectivo símbolo.
void Juego::on_UNO_clicked()
{
    if(decision){
        if(!(T->ocupada(0,0))){
            if(empate%2 == 0){
                ui->UNO->setText("X");
                J1->setPosX(0);
                J1->setPosY(0);
                J1->jugar(T);
                empate += 1;
                ui->JUEGA->setText("Jugador 2 (O)");
                ui->MENSAJE->setText(T->juzgar(decision, empate));
                if(!decision){
                    ui->JUEGA->setText("FIN");
                    ui->REINICIO->setText("¿Reiniciar el juego?");
                    ui->REINICIAR->setHidden(false);
                }
            }
            else {
                ui->UNO->setText("O");
                J2->setPosX(0);
                J2->setPosY(0);
                J2->jugar(T);
                empate += 1;
                ui->JUEGA->setText("Jugador 1 (X)");
                ui->MENSAJE->setText(T->juzgar(decision, empate));
                if(!decision){
                    ui->JUEGA->setText("FIN");
                    ui->REINICIO->setText("¿Reiniciar el juego?");
                    ui->REINICIAR->setHidden(false);
                }
            }
        }
        else {
            ui->MENSAJE->setText("Posición ocupada");
        }
    }
}

//Esta función marca el botón presionado si es posible con el respectivo símbolo.
void Juego::on_DOS_clicked()
{
    if(decision){
        if(!(T->ocupada(0,1))){
            if(empate%2 == 0){
                ui->DOS->setText("X");
                J1->setPosX(0);
                J1->setPosY(1);
                J1->jugar(T);
                empate += 1;
                ui->JUEGA->setText("Jugador 2 (O)");
                ui->MENSAJE->setText(T->juzgar(decision, empate));
                if(!decision){
                    ui->JUEGA->setText("FIN");
                    ui->REINICIO->setText("¿Reiniciar el juego?");
                    ui->REINICIAR->setHidden(false);
                }
            }
            else {
                ui->DOS->setText("O");
                J2->setPosX(0);
                J2->setPosY(1);
                J2->jugar(T);
                empate += 1;
                ui->JUEGA->setText("Jugador 1 (X)");
                ui->MENSAJE->setText(T->juzgar(decision, empate));
                if(!decision){
                    ui->JUEGA->setText("FIN");
                    ui->REINICIO->setText("¿Reiniciar el juego?");
                    ui->REINICIAR->setHidden(false);
                }
            }
        }
        else {
            ui->MENSAJE->setText("Posición ocupada");
        }
    }
}

//Esta función marca el botón presionado si es posible con el respectivo símbolo.
void Juego::on_TRES_clicked()
{
    if(decision){
        if(!(T->ocupada(0,2))){
            if(empate%2 == 0){
                ui->TRES->setText("X");
                J1->setPosX(0);
                J1->setPosY(2);
                J1->jugar(T);
                empate += 1;
                ui->JUEGA->setText("Jugador 2 (O)");
                ui->MENSAJE->setText(T->juzgar(decision, empate));
                if(!decision){
                    ui->JUEGA->setText("FIN");
                    ui->REINICIO->setText("¿Reiniciar el juego?");
                    ui->REINICIAR->setHidden(false);
                }
            }
            else {
                ui->TRES->setText("O");
                J2->setPosX(0);
                J2->setPosY(2);
                J2->jugar(T);
                empate += 1;
                ui->JUEGA->setText("Jugador 1 (X)");
                ui->MENSAJE->setText(T->juzgar(decision, empate));
                if(!decision){
                    ui->JUEGA->setText("FIN");
                    ui->REINICIO->setText("¿Reiniciar el juego?");
                    ui->REINICIAR->setHidden(false);
                }
            }
        }
        else {
            ui->MENSAJE->setText("Posición ocupada");
        }
    }
}

//Esta función marca el botón presionado si es posible con el respectivo símbolo.
void Juego::on_CUATRO_clicked()
{
    if(decision){
        if(!(T->ocupada(1,0))){
            if(empate%2 == 0){
                ui->CUATRO->setText("X");
                J1->setPosX(1);
                J1->setPosY(0);
                J1->jugar(T);
                empate += 1;
                ui->JUEGA->setText("Jugador 2 (O)");
                ui->MENSAJE->setText(T->juzgar(decision, empate));
                if(!decision){
                    ui->JUEGA->setText("FIN");
                    ui->REINICIO->setText("¿Reiniciar el juego?");
                    ui->REINICIAR->setHidden(false);
                }
            }
            else {
                ui->CUATRO->setText("O");
                J2->setPosX(1);
                J2->setPosY(0);
                J2->jugar(T);
                empate += 1;
                ui->JUEGA->setText("Jugador 1 (X)");
                ui->MENSAJE->setText(T->juzgar(decision, empate));
                if(!decision){
                    ui->JUEGA->setText("FIN");
                    ui->REINICIO->setText("¿Reiniciar el juego?");
                    ui->REINICIAR->setHidden(false);
                }
            }
        }
        else {
            ui->MENSAJE->setText("Posición ocupada");
        }
    }
}

//Esta función marca el botón presionado si es posible con el respectivo símbolo.
void Juego::on_CINCO_clicked()
{
    if(decision){
        if(!(T->ocupada(1,1))){
            if(empate%2 == 0){
                ui->CINCO->setText("X");
                J1->setPosX(1);
                J1->setPosY(1);
                J1->jugar(T);
                empate += 1;
                ui->JUEGA->setText("Jugador 2 (O)");
                ui->MENSAJE->setText(T->juzgar(decision, empate));
                if(!decision){
                    ui->JUEGA->setText("FIN");
                    ui->REINICIO->setText("¿Reiniciar el juego?");
                    ui->REINICIAR->setHidden(false);
                }
            }
            else {
                ui->CINCO->setText("O");
                J2->setPosX(1);
                J2->setPosY(1);
                J2->jugar(T);
                empate += 1;
                ui->JUEGA->setText("Jugador 1 (X)");
                ui->MENSAJE->setText(T->juzgar(decision, empate));
                if(!decision){
                    ui->JUEGA->setText("FIN");
                    ui->REINICIO->setText("¿Reiniciar el juego?");
                    ui->REINICIAR->setHidden(false);
                }
            }
        }
        else {
            ui->MENSAJE->setText("Posición ocupada");
        }
    }
}

//Esta función marca el botón presionado si es posible con el respectivo símbolo.
void Juego::on_SEIS_clicked()
{
    if(decision){
        if(!(T->ocupada(1,2))){
            if(empate%2 == 0){
                ui->SEIS->setText("X");
                J1->setPosX(1);
                J1->setPosY(2);
                J1->jugar(T);
                empate += 1;
                ui->JUEGA->setText("Jugador 2 (O)");
                ui->MENSAJE->setText(T->juzgar(decision, empate));
                if(!decision){
                    ui->JUEGA->setText("FIN");
                    ui->REINICIO->setText("¿Reiniciar el juego?");
                    ui->REINICIAR->setHidden(false);
                }
            }
            else {
                ui->SEIS->setText("O");
                J2->setPosX(1);
                J2->setPosY(2);
                J2->jugar(T);
                empate += 1;
                ui->JUEGA->setText("Jugador 1 (X)");
                ui->MENSAJE->setText(T->juzgar(decision, empate));
                if(!decision){
                    ui->JUEGA->setText("FIN");
                    ui->REINICIO->setText("¿Reiniciar el juego?");
                    ui->REINICIAR->setHidden(false);
                }
            }
        }
        else {
            ui->MENSAJE->setText("Posición ocupada");
        }
    }
}

//Esta función marca el botón presionado si es posible con el respectivo símbolo.
void Juego::on_SIETE_clicked()
{
    if(decision){
        if(!(T->ocupada(2,0))){
            if(empate%2 == 0){
                ui->SIETE->setText("X");
                J1->setPosX(2);
                J1->setPosY(0);
                J1->jugar(T);
                empate += 1;
                ui->JUEGA->setText("Jugador 2 (O)");
                ui->MENSAJE->setText(T->juzgar(decision, empate));
                if(!decision){
                    ui->JUEGA->setText("FIN");
                    ui->REINICIO->setText("¿Reiniciar el juego?");
                    ui->REINICIAR->setHidden(false);
                }
            }
            else {
                ui->SIETE->setText("O");
                J2->setPosX(2);
                J2->setPosY(0);
                J2->jugar(T);
                empate += 1;
                ui->JUEGA->setText("Jugador 1 (X)");
                ui->MENSAJE->setText(T->juzgar(decision, empate));
                if(!decision){
                    ui->JUEGA->setText("FIN");
                    ui->REINICIO->setText("¿Reiniciar el juego?");
                    ui->REINICIAR->setHidden(false);
                }
            }
        }
        else {
            ui->MENSAJE->setText("Posición ocupada");
        }
    }
}

//Esta función marca el botón presionado si es posible con el respectivo símbolo.
void Juego::on_OCHO_clicked()
{
    if(decision){
        if(!(T->ocupada(2,1))){
            if(empate%2 == 0){
                ui->OCHO->setText("X");
                J1->setPosX(2);
                J1->setPosY(1);
                J1->jugar(T);
                empate += 1;
                ui->JUEGA->setText("Jugador 2 (O)");
                ui->MENSAJE->setText(T->juzgar(decision, empate));
                if(!decision){
                    ui->JUEGA->setText("FIN");
                    ui->REINICIO->setText("¿Reiniciar el juego?");
                    ui->REINICIAR->setHidden(false);
                }
            }
            else {
                ui->OCHO->setText("O");
                J2->setPosX(2);
                J2->setPosY(1);
                J2->jugar(T);
                empate += 1;
                ui->JUEGA->setText("Jugador 1 (X)");
                ui->MENSAJE->setText(T->juzgar(decision, empate));
                if(!decision){
                    ui->JUEGA->setText("FIN");
                    ui->REINICIO->setText("¿Reiniciar el juego?");
                    ui->REINICIAR->setHidden(false);
                }
            }
        }
        else {
            ui->MENSAJE->setText("Posición ocupada");
        }
    }
}

//Esta función marca el botón presionado si es posible con el respectivo símbolo.
void Juego::on_NUEVE_clicked()
{
    if(decision){
        if(!(T->ocupada(2,2))){
            if(empate%2 == 0){
                ui->NUEVE->setText("X");
                J1->setPosX(2);
                J1->setPosY(2);
                J1->jugar(T);
                empate += 1;
                ui->JUEGA->setText("Jugador 2 (O)");
                ui->MENSAJE->setText(T->juzgar(decision, empate));
                if(!decision){
                    ui->JUEGA->setText("FIN");
                    ui->REINICIO->setText("¿Reiniciar el juego?");
                    ui->REINICIAR->setHidden(false);
                }
            }
            else {
                ui->NUEVE->setText("O");
                J2->setPosX(2);
                J2->setPosY(2);
                J2->jugar(T);
                empate += 1;
                ui->JUEGA->setText("Jugador 1 (X)");
                ui->MENSAJE->setText(T->juzgar(decision, empate));
                if(!decision){
                    ui->JUEGA->setText("FIN");
                    ui->REINICIO->setText("¿Reiniciar el juego?");
                    ui->REINICIAR->setHidden(false);
                }
            }
        }
        else {
            ui->MENSAJE->setText("Posición ocupada");
        }
    }
}

//Esta función limpia el juego interna y externamente.
void Juego::on_REINICIAR_clicked()
{
    ui->UNO->setText("");
    ui->DOS->setText("");
    ui->TRES->setText("");
    ui->CUATRO->setText("");
    ui->CINCO->setText("");
    ui->SEIS->setText("");
    ui->SIETE->setText("");
    ui->OCHO->setText("");
    ui->NUEVE->setText("");

    for(int x=0; x<3; x++){
        for(int y=0; y<3; y++){
            T->setPos(x,y,"");
        }
    }

    ui->JUEGA->setText("Jugador 1 (X)");
    ui->MENSAJE->setText("");

    decision = true;
    empate = 0;

    ui->REINICIO->setText("");
    ui->REINICIAR->setHidden(true);
}
