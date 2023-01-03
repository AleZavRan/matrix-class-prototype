#include "Matrix.h"
#include <iostream>

using namespace uiuc;
using namespace std;

int main(){

    Matrix M1;
    Matrix* M2 = new Matrix;
    M2->setSize(6,6);
    M1.setSize(5,4);
    int a = M1.getRows();
    int b = M2->getColumns();

    Matrix M3;
    Matrix M4(9,9);
    cout << "El número de filas de M3 es: " << M3.getRows() << " Y de filas" << M3.getColumns() << endl;
    cout << "M3 Creado con constructor default" << endl;
    cout << "El número de filas de M4 es: " << M4.getRows() << " Y de filas" << M4.getColumns() << endl;
    cout << "M4 Creado con constructor personalizado" << endl;

    cout << "El número de filas es: " << a << " Fin" << endl;
    cout << "El número de columnas es: " << M1.getColumns() << " Fin" << endl;
    cout << "El número de columnas de M2 es: " << b << " Fin" << endl;
    delete M2;
    M2 = nullptr;
    cout << "Se liberó la memoria heap" << endl;
    std::cout << "Cout realizado sólo para mostrar cambios" << std::endl;
    return 0;
}
