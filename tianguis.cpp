// wenas noshes
// hola
//

// Hareamos
// una clase dirección (calle, numero, num. int, cp, colonia, ciudad, municipio)
// una clase vendedor (nombre, correo, tel, negocio, direccion )
// una clase producto (nombre, descrp, precio, stock, categoria )
// una clase cliente (nombre, correo, tel, direccion, tipo de pago)

// Llamado a librerias
#include <string>
#include <iostream>
#include <vector>

using namespace std;

// Inclusion de clases
#include "producto.h"
#include "cliente.h"
#include "direccion.h"
#include "vendedor.h"

int main()
{
     cliente persona;
     string nombre, correo, municipio, calle, colonia, telefono;
     int CP, numExt, numInt;

     vector<Vendedor> vendedores;
     

     vector<Producto> productosPedro;
     Producto chocolateAbuelita("Chocolate abuelita", "Rico chocolate", 20, 5, "Chocolates");
     Producto kitkat("Chocolate kitkat", "Tipico kitkat", 15, 20, "Chocolates");
     Producto hersheyBlanco("Chocolate hershey", "Chocolate buenisimo", 25, 17, "Chocolates");
     productosPedro.push_back(chocolateAbuelita);
     productosPedro.push_back(kitkat);
     productosPedro.push_back(hersheyBlanco);


     Direccion direccion2("Zapopan", 45811, "Aviacion", "Santa margarita", 4587, 15);
     Vendedor tienda_pedro("Pedro", "Pedro@gmail.com", "Chocolateria", " 5545456545", direccion2, productosPedro);

     Direccion direccion3("Tonala", 45212, "Tonalita", "Tonalota", 32, 1);
     Vendedor tienda_Miguel("Miguel", "Miguelito@tec.mx", "Cafeteria", "3345516241", direccion3, productosPedro);

     Direccion direccion4("Tlaquepauqe", 51262, "Tlaque", "Paque", 41, 2);
     Vendedor tienda_Mauricio("Mauricio", "Mauricion@hotmail.com", "Paperleria", "512950192", direccion4, productosPedro);

     vendedores.push_back(tienda_pedro);
     vendedores.push_back(tienda_Miguel);
     vendedores.push_back(tienda_Mauricio);

     cout << "----------------------------------------------------" << endl;
     cout << "                 R E G I S T R O                    " << endl;
     cout << "----------------------------------------------------" << endl;
     cout << "Ingresa tu nombre: ";
     cin >> nombre;
     cout << endl
          << "Ingresa tu correo : ";
     cin >> correo;
     cout << endl
          << "Ingresa tu numero de telefono: ";
     cin >> telefono;

     cout << endl;
     cout << "----------------------------------------------------" << endl;
     cout << "                Registra direccion                  " << endl;
     cout << "----------------------------------------------------" << endl;
     cout << endl
          << "Ingresa tu calle: ";
     cin >> calle;
     cout << endl
          << "Ingresa tu colonia";
     cin >> colonia;
     cout << endl
          << "Ingresa tu numero exterior";
     cin >> numExt;
     cout << endl
          << "Ingresa tu numero interior";
     cin >> numInt;
     cout << endl
          << "Ingresa tu municipio: ";
     cin >> municipio;
     cout << endl
          << "Ingresa tu CP: ";
     cin >> CP;

     Direccion direccion1(municipio, CP, calle, colonia, numExt, numInt);
     cliente Persona_1(nombre, correo, telefono, direccion1);

     while (true)
     {

          int opcion;
          cout << "1.- Mostrar vendedores disponibles | 2.-" << endl;
          cin >> opcion;

          if (opcion == 1)
          {

               for (int i = 0; i < vendedores.size(); i++)
               {
                    vendedores[i].printVendedor();
                    cout << endl;
               }
          }
     }
     return 0;
}