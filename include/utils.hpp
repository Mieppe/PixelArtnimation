#ifndef UTILS_HPP
#define UTILS_HPP

class Pixel{
    
    private:

        int _red;
        int _green;
        int _blue;
    
    public:
        Pixel() : _red(0), _green(0), _blue(0) {};
        Pixel(int r, int g, int b) : _red(r), _green(g), _blue(b) {};
        int getRed() const {return _red;}
        int getGreen() const {return _green;}
        int getBlue() const {return _blue;}
        void setRed(int const red){_red = red;}
        void setGreen(int const green){_green = green;}
        void setBlue(int const blue){_blue = blue;}
};

class PixelMatrix{

    private:

        int _sizeHeight;
        int _sizeWidth;

    public:
        PixelMatrix() : _sizeHeight(0), _sizeWidth(0) {};
        PixelMatrix(int h, int w) : _sizeHeight(h), _sizeWidth(w) {};
        int getSizeHeight() const {return _sizeHeight;}
        int getSizeWidth() const {return _sizeWidth;}
        void setSizeHeight(int const sizeHeight){_sizeHeight = sizeHeight;}
        void setSizeWidth(int const sizeWidth){_sizeWidth = sizeWidth;}
        bool isEmpty();
};

#endif