#include "utils.hpp"

bool PixelMatrix::isEmpty(){
    if (this->_sizeHeight == 0 || this->_sizeWidth == 0) return true;
    else return false;
}

