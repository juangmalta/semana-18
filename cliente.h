#ifndef CLIENTE_H
#define CLIENTE_H



#include <string> //aqui esta el string pinshi vichual kk
#include "direccion.h"

class cliente
{
private:
    string nombre;
    string correo;
    string tel;
    Direccion direccion;
    string tipoDPago;
    

public:
    cliente(){
        Direccion def;
        this->nombre = " ";
        this->correo = " ";
        this->tel = " ";
        this->direccion= def;
    }
    cliente(string _nombre, string _correo, string _tel, Direccion direccion)
    {
        this->nombre = _nombre;
        this->correo = _correo;
        this->tel = _tel;
        this->direccion = direccion;
    }
    string getNombre()
    {
        return this->nombre;
    }
    string getCorreo()
    {
        return this->correo;
    }
    string getTel()
    {
        return this->tel;
    }
    Direccion getDireccion()
    {
        return this->direccion;
    }
    string getTipoDPago()
    {
        return this->tipoDPago;
    }

    void printCliente(){
    cout << "---------------------------- CLIENTE ----------------------------" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Correo: " << correo << endl;
    cout << "Telefono: " << tel << endl;
    direccion.printDireccion();
    cout << "Tipo de pago: " << tipoDPago << endl;
    cout << "---------------------------- CLIENTE ----------------------------" << endl;
    }

};

#endif