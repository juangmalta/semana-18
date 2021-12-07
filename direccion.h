#ifndef DIRECCION_H
#define DIRECCION_H

#include <iostream>
#include <string>

using namespace std;

class Direccion
{

private:
    string municipio;
    int CP;
    string calle;
    string colonia;
    int numExt;
    int numInt;

public:
    Direccion();
    Direccion(string _municipio, int _CP, string _calle, string _colonia, int _numExt, int numInt);
    string getMunicipio();
    int getCP();
    string getCalle();
    string getColonia();
    int getNumExt();
    int getNumInt();

    void setMunicipio(string _estado);
    void setCP(int _CP);
    void setCalle(string _calle);
    void setColonia(string _colonia);
    void setNumExt(int _numExt);
    void setNumInt(int _numInt);

    void printDireccion();
};

Direccion::Direccion(){
    municipio = "";
    CP = 0;
    calle = "";
    colonia = "";
    numExt = 0;
    numInt = 0;
}

Direccion::Direccion(string _municipio, int _CP, string _calle, string _colonia, int _numExt, int _numInt)
{

    municipio = _municipio;
    CP = _CP;
    calle = _calle;
    colonia = _colonia;
    numExt = _numExt;
    numInt = _numInt;
}

string Direccion::getMunicipio()
{

    return municipio;
}

int Direccion::getCP()
{

    return CP;
}

string Direccion::getCalle()
{

    return calle;
}

string Direccion::getColonia()
{

    return colonia;
}

int Direccion::getNumExt()
{

    return numExt;
}

int Direccion::getNumInt()
{

    return numInt;
}

void Direccion::setMunicipio(string _municipio)
{

    municipio = _municipio;
}

void Direccion::setCP(int _CP)
{

    CP = _CP;
}

void Direccion::setCalle(string _calle)
{

    calle = _calle;
}

void Direccion::setColonia(string _colonia)
{

    colonia = _colonia;
}

void Direccion::setNumExt(int _numExt)
{

    numExt = _numExt;
}

void Direccion::setNumInt(int _numInt)
{

    numInt = _numInt;
}

void Direccion::printDireccion()
{

    cout << "-------------------------- DIRECCION --------------------------" << endl;
    cout << "Municipio: " << municipio << endl;
    cout << "Codigo Postal: " << CP << endl;
    cout << "Calle: " << calle << endl;
    cout << "Colonia: " << colonia << endl;
    cout << "Numero exterior: " << numExt << endl;
    cout << "Numero interior: " << numInt << endl;
    cout << "-------------------------- DIRECCION --------------------------" << endl;

}

#endif