/*
    Realice una aplicaci�n que le solicite al usuario un monto total, un porcentaje
    a retirar de dicho monto total y no mayor a 80%, la aplicaci�n deber� solicitar el nombre del usuario, el monto,
    el porcentaje a retirar no mayor a 80% y mostrar el equivalente a dicho porcentaje solicitado.
    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>

/*CONSTANTES�*/
   
#include <stdio.h>
#include <iostream>

#define  PORCENTAJE 60
#define  CIEN   	100
#define  CERO		0 

using namespace std;
void ProcessMessage();
void ProcessMessage2();

int main()
{
    float monto = CERO;
    int porcentaje =CERO;
    char nombre[20];

    cout << "\n\t Ingrese  por favor su nombre \n\t>";
    fflush(stdin);
    gets(nombre);

    cout << "\n\t Ingrese el monto con el que cuenta \n\t>";
    cin>> monto;

    ProcessMessage();
     do {
        cout << "\n\t Ingrese el porcentaje a retirar \n\t>";
        cin >> porcentaje;
        if(porcentaje > PORCENTAJE || porcentaje < CERO)
            cout << "\n\t Porcentaje no valido, intente otra vez \n"
                 << "\n\t El monto no debe ser mayor a  60 \n";

     } while(porcentaje > PORCENTAJE || porcentaje < CERO);

     float porcetanje_total = (float) porcentaje / CIEN ;
    ProcessMessage2();
     cout << "\n\t El Cliente :  "  << nombre  
	 	  << " Ha retirado la cantidad de : " << monto*porcetanje_total
          << " pesos MXN \n";
    
    cout << "\n\t Fin del programa ... \n\t Vuelva pronto :)!! ";
    std::cout << "\n\t CALCULADOR DE RETIROS SA CV V1.0" << std::endl;
     
     return 0;
}

void ProcessMessage()
{
    cout << "\n\t Calculando Proceso, no tardemos" << std::endl;
}

void ProcessMessage2()
{
    cout << "\n\t Termimanos" << std::endl;
}

