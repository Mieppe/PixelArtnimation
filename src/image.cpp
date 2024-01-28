#include "image.hpp"

cv::Mat Image::generateCVImage(){
    int imageHeight = _matrix.getSizeHeight()*_pixelSize;
    int imageWidth = _matrix.getSizeWidth()*_pixelSize;
    cv::Mat image = cv::Mat(imageHeight, imageWidth, CV_8UC3, cv::Scalar(0, 0, 0));
    return image;
}