/********************************************************************************
** Form generated from reading UI file 'Juego.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUEGO_H
#define UI_JUEGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Juego
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *UNO;
    QPushButton *DOS;
    QPushButton *TRES;
    QPushButton *CUATRO;
    QPushButton *CINCO;
    QPushButton *SEIS;
    QPushButton *SIETE;
    QPushButton *OCHO;
    QPushButton *NUEVE;
    QLabel *JUEGA;
    QLabel *MENSAJE;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Juego)
    {
        if (Juego->objectName().isEmpty())
            Juego->setObjectName(QStringLiteral("Juego"));
        Juego->resize(456, 365);
        centralWidget = new QWidget(Juego);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 0, 301, 51));
        UNO = new QPushButton(centralWidget);
        UNO->setObjectName(QStringLiteral("UNO"));
        UNO->setGeometry(QRect(70, 50, 81, 51));
        QPalette palette;
        QBrush brush(QColor(16, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 4, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        QBrush brush2(QColor(133, 133, 133, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        UNO->setPalette(palette);
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        UNO->setFont(font);
        DOS = new QPushButton(centralWidget);
        DOS->setObjectName(QStringLiteral("DOS"));
        DOS->setGeometry(QRect(190, 50, 81, 51));
        DOS->setFont(font);
        TRES = new QPushButton(centralWidget);
        TRES->setObjectName(QStringLiteral("TRES"));
        TRES->setGeometry(QRect(310, 50, 81, 51));
        TRES->setFont(font);
        CUATRO = new QPushButton(centralWidget);
        CUATRO->setObjectName(QStringLiteral("CUATRO"));
        CUATRO->setGeometry(QRect(70, 110, 81, 51));
        CUATRO->setFont(font);
        CINCO = new QPushButton(centralWidget);
        CINCO->setObjectName(QStringLiteral("CINCO"));
        CINCO->setGeometry(QRect(190, 110, 81, 51));
        CINCO->setFont(font);
        SEIS = new QPushButton(centralWidget);
        SEIS->setObjectName(QStringLiteral("SEIS"));
        SEIS->setGeometry(QRect(310, 110, 81, 51));
        SEIS->setFont(font);
        SIETE = new QPushButton(centralWidget);
        SIETE->setObjectName(QStringLiteral("SIETE"));
        SIETE->setGeometry(QRect(70, 170, 81, 51));
        SIETE->setFont(font);
        OCHO = new QPushButton(centralWidget);
        OCHO->setObjectName(QStringLiteral("OCHO"));
        OCHO->setGeometry(QRect(190, 170, 81, 51));
        OCHO->setFont(font);
        NUEVE = new QPushButton(centralWidget);
        NUEVE->setObjectName(QStringLiteral("NUEVE"));
        NUEVE->setGeometry(QRect(310, 170, 81, 51));
        NUEVE->setFont(font);
        JUEGA = new QLabel(centralWidget);
        JUEGA->setObjectName(QStringLiteral("JUEGA"));
        JUEGA->setGeometry(QRect(70, 230, 331, 31));
        QPalette palette1;
        QBrush brush3(QColor(255, 0, 65, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        QBrush brush4(QColor(255, 34, 97, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        JUEGA->setPalette(palette1);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        JUEGA->setFont(font1);
        JUEGA->setAlignment(Qt::AlignCenter);
        MENSAJE = new QLabel(centralWidget);
        MENSAJE->setObjectName(QStringLiteral("MENSAJE"));
        MENSAJE->setGeometry(QRect(70, 270, 311, 31));
        MENSAJE->setFont(font1);
        MENSAJE->setAlignment(Qt::AlignCenter);
        Juego->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Juego);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 456, 27));
        Juego->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Juego);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Juego->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Juego);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Juego->setStatusBar(statusBar);

        retranslateUi(Juego);

        QMetaObject::connectSlotsByName(Juego);
    } // setupUi

    void retranslateUi(QMainWindow *Juego)
    {
        Juego->setWindowTitle(QApplication::translate("Juego", "Juego", 0));
        label->setText(QApplication::translate("Juego", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600; color:#176715;\">TRIQUI</span></p></body></html>", 0));
        UNO->setText(QString());
        DOS->setText(QString());
        TRES->setText(QString());
        CUATRO->setText(QString());
        CINCO->setText(QString());
        SEIS->setText(QString());
        SIETE->setText(QString());
        OCHO->setText(QString());
        NUEVE->setText(QString());
        JUEGA->setText(QApplication::translate("Juego", "<html><head/><body><p align=\"center\"><br/></p></body></html>", 0));
        MENSAJE->setText(QApplication::translate("Juego", "<html><head/><body><p align=\"center\"><br/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Juego: public Ui_Juego {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUEGO_H
