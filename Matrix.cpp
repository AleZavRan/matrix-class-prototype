#include "Matrix.h"
#include <iostream>

namespace uiuc{

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
