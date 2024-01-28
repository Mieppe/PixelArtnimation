#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <opencv2/opencv.hpp>
#include "utils.hpp"

class Image{
    
    private:
        PixelMatrix _matrix;
        int _pixelSize;

    public:
        Image() : _matrix(PixelMatrix()), _pixelSize(1) {};
        Image(PixelMatrix matrix, int pixelSize = 1) : _matrix(matrix), _pixelSize(pixelSize) {};
        cv::Mat generateCVImage();
    
};

#endif