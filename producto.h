#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
#include <string>

using namespace std;

class Producto{
    private:
        string nombre;
        string descripcion;
        double precio;
        int stock;
        string categoria;

    public:
        Producto(string _nombre, string _descripcion, double _precio, int _stock, string _categoria);
        string getNombre();
        string getDescripcion();
        double getPrecio();
        int getStock();
        string getCategoria();

        void setNombre(string nombre);
        void setDescripcion(string descripcion);
        void setPrecio(double precio);
        void setStock(int stock);
        void setCategoria(string categoria);

        void printProducto();
};

Producto::Producto(string _nombre, string _descripcion, double _precio, int _stock, string _categoria)
{

    this->nombre = _nombre;
    this->descripcion = _descripcion;
    this->precio = _precio;
    this->stock = _stock;
    this->categoria = _categoria;
}

string Producto::getNombre()
{

    return nombre;
}

string Producto::getDescripcion()
{

    return descripcion;
}

double Producto::getPrecio()
{

    return precio;
}

int Producto::getStock()
{

    return stock;
}

string Producto::getCategoria()
{

    return categoria;
}

void Producto::setNombre(string nombre)
{
    this->nombre = nombre;
}

void Producto::setDescripcion(string descripcion)
{
    this->descripcion = descripcion;
}

void Producto::setPrecio(double precio)
{
    this->precio = precio;
}

void Producto::setStock(int stock)
{
    this->stock = stock;
}

void Producto::setCategoria(string categoria)
{
    this->categoria = categoria;
}

void Producto::printProducto()
{
    cout << "-------------------------- PRODUCTO -----------------------------------" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Descripción: " << descripcion << endl;
    cout << "Precio: " << precio << endl;
    cout << "Stock: " << stock << endl;
    cout << "Categoria: " << categoria << endl;
    cout << "-------------------------- PRODUCTO -----------------------------------" << endl;
}

#endif