#include "circulo.h"
#include <cmath>


Circulo::Circulo(int x0, int y0, int raio, int mode){
    this->x0=x0; this->y0=y0; this ->raio=raio; this->mode=mode;
}

void Circulo::draw(Screen &t){
    double curvatura=0;
    double inversoraio = 1/(double)raio;
    int dx=0;
    int dy = raio - 1;

    while(dx <= dy){
        t.setPixel(x0+dy,y0-dx);
        t.setPixel(x0+dx,y0-dy);
        t.setPixel(x0-dx,y0-dy);
        t.setPixel(x0-dy,y0-dx);
        t.setPixel(x0-dy,y0+dx);
        t.setPixel(x0-dx,y0+dy);
        t.setPixel(x0+dx,y0+dy);
        t.setPixel(x0+dy,y0+dx);

        dx++;
        curvatura += inversoraio;
        dy = raio * sin(acos(curvatura));
    }
}

void Circulo::pos(){
    cout << x0 << y0 << raio;
}




