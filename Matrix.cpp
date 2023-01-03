#include "Matrix.h"
#include <iostream>

namespace uiuc{

Matrix::Matrix(){
    rows_ = 3;
    columns_ = 3;
}

Matrix::Matrix(int rows, int columns){

    rows_ = rows;
    columns_ = columns;

}

void Matrix::setSize(int rows, int columns){

    rows_ = rows;
    columns_ = columns;
}

int Matrix::getRows(){


    return rows_;
}

int Matrix::getColumns(){

    return columns_;
}
}
