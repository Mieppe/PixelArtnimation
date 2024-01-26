#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "utils.hpp"

int main(int argc, char const *argv[])
{
    std::cout<<"Hello World !!"<<std::endl;

    PixelMatrix matrix = PixelMatrix();
    std::cout<<matrix.isEmpty()<<std::endl;
    matrix.setSizeHeight(3);
    std::cout<<matrix.isEmpty()<<std::endl;
    matrix.setSizeWidth(3);
    std::cout<<matrix.isEmpty()<<std::endl;

    return 0;
}
