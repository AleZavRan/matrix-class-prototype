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

    cout << "El número de filas es: " << a << " Fin" << endl;
    cout << "El número de columnas es: " << M1.getColumns() << " Fin" << endl;
    cout << "El número de columnas de M2 es: " << b << " Fin" << endl;
    delete M2;
    M2 = nullptr;
    cout << "Se liberó la memoria heap" << endl;
    return 0;
}
