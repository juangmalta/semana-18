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

     // Tienda de Pedro
     vector<Producto> productosPedro;
     Producto chocolateAbuelita("Chocolate abuelita", "Rico chocolate", 20, 5, "Chocolates");
     Producto kitkat("Chocolate kitkat", "Tipico kitkat", 15, 20, "Chocolates");
     Producto hersheyBlanco("Chocolate hershey", "Chocolate buenisimo", 25, 17, "Chocolates");
     productosPedro.push_back(chocolateAbuelita);
     productosPedro.push_back(kitkat);
     productosPedro.push_back(hersheyBlanco);

     Direccion direccion2("Zapopan", 45811, "Aviacion", "Santa margarita", 4587, 15);
     Vendedor tienda_pedro("Pedro", "Pedro@gmail.com", "Chocolateria", " 5545456545", direccion2, productosPedro);

     // Tienda de Miguel
     vector<Producto> productosMiguel;
     Producto mochaBlanco("Mocha Blanco", "Rico café con chocolate blanco", 35, 100, "Café");
     Producto expresso("Café expresso", "Café tradicional", 28, 100, "Café");
     Producto capuccino("Capuccino", "Capuccino tradicional", 30, 100, "Café");
     productosMiguel.push_back(mochaBlanco);
     productosMiguel.push_back(expresso);
     productosMiguel.push_back(capuccino);

     Direccion direccion3("Tonala", 45212, "Tonalita", "Tonalota", 32, 1);
     Vendedor tienda_Miguel("Miguel", "Miguelito@tec.mx", "Cafeteria", "3345516241", direccion3, productosMiguel);

     // Tienda de Mauricio
     vector<Producto> productosMauricio;
     Producto cartulinaBlanca("Cartulina blanca", "Cartulina de 100x100 blanca", 10, 32, "Papeleria");
     Producto plumaBic("Pluma bic", "Pluma tradicional marca bic", 8, 40, "Papeleria");
     Producto liquidPaper("Liquid paper", "Para borrar pluma", 10, 97, "Papeleria");
     productosMauricio.push_back(cartulinaBlanca);
     productosMauricio.push_back(plumaBic);
     productosMauricio.push_back(liquidPaper);

     Direccion direccion4("Tlaquepauqe", 51262, "Tlaque", "Paque", 41, 2);
     Vendedor tienda_Mauricio("Mauricio", "Mauricion@hotmail.com", "Papeleria", "512950192", direccion4, productosMauricio);

     vendedores.push_back(tienda_pedro);
     vendedores.push_back(tienda_Miguel);
     vendedores.push_back(tienda_Mauricio);

     cout << "----------------------------------------------------" << endl;
     cout << "                 R E G I S T R O                    " << endl;
     cout << "----------------------------------------------------" << endl;
     cout << "Ingresa tu nombre: ";
     getline(cin, nombre);
     cin.clear();
     cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     cout << "Ingresa tu correo : ";
     getline(cin, correo);
     cin.clear();
     cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     cout << "Ingresa tu numero de telefono: ";
     getline(cin, telefono);
     cin.clear();
     cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

     cout << endl;
     cout << "----------------------------------------------------" << endl;
     cout << "                Registra direccion                  " << endl;
     cout << "----------------------------------------------------" << endl;
     cout << endl;

     cout << "Ingresa tu calle: ";
     getline(cin, calle);
     cin.clear();
     cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     cout << endl;
     cout << "Ingresa tu colonia: ";
     getline(cin, colonia);
     cin.clear();
     cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     cout << endl;
     cout << "Ingresa tu numero exterior: ";
     cin >> numExt;
     cin.clear();
     cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     cout << endl;
     cout << "Ingresa tu numero interior: ";
     cin >> numInt;
     cin.clear();
     cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     cout << endl;
     cout << "Ingresa tu municipio: ";
     getline(cin, municipio);
     cin.clear();
     cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     cout << endl;
     cout << "Ingresa tu CP: ";
     cin >> CP;
     cin.clear();
     cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

     Direccion direccion1(municipio, CP, calle, colonia, numExt, numInt);
     cliente Persona_1(nombre, correo, telefono, direccion1);

     while (true)
     {

          int opcion;
          cout << "1.- Mostrar vendedores disponibles | 2.- Ver productos" << endl;
          cin >> opcion;

          if (opcion == 1)
          {

               for (int i = 0; i < vendedores.size(); i++)
               {
                    vendedores[i].printVendedor();
                    cout << endl;
               }
          }
          else if (opcion == 2)
          {

               for (int i = 0; i < vendedores.size(); i++)
               {

                    cout << i + 1 << ".- " << vendedores[i].getNegocio() << endl;
               }

               int opcionVendedor;
               cout << "Escoge un vendedor: ";
               cin >> opcionVendedor;
               opcionVendedor = opcionVendedor - 1;

               vendedores[opcionVendedor].printProductList();
          }
     }
}