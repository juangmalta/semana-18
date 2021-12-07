#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <iostream>
#include <string>
#include <vector>
#include "direccion.h"
#include "producto.h"
using namespace std;

class Vendedor
{

private:

    string nombre;
    string correo;
    string negocio;
    string tel;
    Direccion direccion;
    vector<Producto> Productos;


public:
    Vendedor(string _nombre, string _correo, string _negocio, string _tel, Direccion direccion, vector<Producto> productos);
    string getNombre();
    string getCorreo();
    string getNegocio();
    string getTel();
    Direccion getDireccion();
    Producto getProducto(int index);

    void setNombre(string nombre);
    void setCorreo(string correo);
    void setNegocio(string negocio);
    void setTel(string Tel);
    void setDireccion(Direccion direccion);

    void printVendedor();
    void printProductList();

};

Vendedor::Vendedor(string _nombre, string _correo, string _negocio, string _tel, Direccion direccion, vector<Producto> _productos)
{
    this->nombre = _nombre;
    this->correo = _correo;
    this->negocio = _negocio;
    this->tel = _tel;
    this->direccion = direccion;

    for (int i = 0; i < _productos.size(); i++) {

        Productos.push_back(_productos[i]);

    }

}

string Vendedor::getNombre()
{
    return nombre;
}

string Vendedor::getCorreo()
{
    return correo;
}

string Vendedor::getNegocio()
{
    return negocio;
}

string Vendedor::getTel()
{
    return tel;
}

Direccion Vendedor::getDireccion()
{
    return direccion;
}

Producto Vendedor::getProducto(int index) {

    return Productos[index];

}

void Vendedor::setNombre(string _nombre)
{
    this->nombre = _nombre;
}

void Vendedor::setCorreo(string _correo)
{
    this->correo = _correo;
}

void Vendedor::setNegocio(string _negocio)
{
    this->negocio = _negocio;
}

void Vendedor::setTel(string _tel)
{
    this->tel = _tel;
}

void Vendedor::setDireccion(Direccion _direccion)
{
    this->direccion = _direccion;
}

void Vendedor::printVendedor()
{
    cout << "----------------------------" << nombre << "----------------------------" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Correo: " << correo << endl;
    cout << "Negocio: " << negocio << endl;
    cout << "Telefono: " << tel << endl;
    direccion.printDireccion();
    cout << "----------------------------" << nombre << "----------------------------" << endl;
}


void Vendedor::printProductList() {

    for (int i = 0; i < Productos.size(); i++) {

        cout << i << ".- " << Productos[i].getNombre() << " | Precio: " << Productos[i].getPrecio() << endl;

    }

}

#endif