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
 * Fecha de Creación: 26 / Noviembre / 2016                                               *
 * Fecha de última modificación: 02 / Diciembre / 2016                                    *
 *                                                                                        *
 ******************************************************************************************
 */

#include "ClaveTexto.h"
#include "ClaveImagen.h"
#include "ClaveLlave.h"

#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
	
	//Instancias de cada tipo de clave sin parámetros de entrada:
	ClaveTexto * objClaveTextoA = new ClaveTexto();
	ClaveImagen * objClaveImagenA = new ClaveImagen();
	ClaveLlave * objClaveLlaveA = new ClaveLlave();
	
	//Instancias de cada tipo de clave con texto de parámetro:
	ClaveTexto * objClaveTextoB = new ClaveTexto("admin123");
	ClaveImagen * objClaveImagenC = new ClaveImagen("1,2#3,4#5,6");
	ClaveLlave * objClaveLlaveC =  new ClaveLlave("rsa#a23f2321");
	
	//Instancias de las claves imagen y llave con sus parámetros particulares:
	int imagen[3][2] = {{1,2},{3,4},{5,6}};
	ClaveImagen * objClaveImagenB = new ClaveImagen(imagen);
	ClaveLlave * objClaveLlaveB = new ClaveLlave("rsa","a23f2321");
	
	//Consulta de cada clave:	
	cout << "\nANTES DEL SET ----------------\n\n"; 
	cout << "Texto A: " << objClaveTextoA->getTextoClave() << endl;
	cout << "Texto B: " << objClaveTextoB->getTextoClave() << endl;
	cout << "Imagen A: " << objClaveImagenA->getTextoClave() << endl;
	cout << "Imagen B: " << objClaveImagenB->getTextoClave() << endl;
	cout << "Imagen C: " << objClaveImagenC->getTextoClave() << endl;
	cout << "Llave A: " << objClaveLlaveA->getTextoClave() << endl;
	cout << "Llave B: " << objClaveLlaveB->getTextoClave() << endl;
	cout << "Llave C: " << objClaveLlaveC->getTextoClave() << endl;
	
	//Seteo de todos las claves:	
	objClaveTextoA->setTextoClave("camilo12");
	objClaveTextoB->setTextoClave("christian12");	
	int matriz1[3][2] = {{6,5},{4,3},{2,1}};
	int matriz2[3][2] = {{2,4},{6,8},{10,12}};	
	objClaveImagenA->setTextoClave(matriz1);
	objClaveImagenB->setTextoClave("6,5#4,3#2,1");
	objClaveImagenC->setTextoClave(matriz2);	
	objClaveLlaveA->setTextoClave("chr", "123456");
	objClaveLlaveB->setTextoClave("chr#123456");
	objClaveLlaveC->setTextoClave("cml", "789");
	
	//Consulta de cada clave nuevamente:	
	cout << endl;
	cout << "DESPUÉS DEL SET ---------------\n\n";
	cout << "Texto A: " << objClaveTextoA->getTextoClave() << endl;
	cout << "Texto B: " << objClaveTextoB->getTextoClave() << endl;
	cout << "Imagen A: " << objClaveImagenA->getTextoClave() << endl;
	cout << "Imagen B: " << objClaveImagenB->getTextoClave() << endl;
	cout << "Imagen C: " << objClaveImagenC->getTextoClave() << endl;
	cout << "Llave A: " << objClaveLlaveA->getTextoClave() << endl;
	cout << "Llave B: " << objClaveLlaveB->getTextoClave() << endl;
	cout << "Llave C: " << objClaveLlaveC->getTextoClave() << endl;
	cout << endl;
	
	return 0;
}
	
	
	
