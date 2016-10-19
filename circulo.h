#ifndef CIRCULO_H
#define CIRCULO_H
#include <figurageometrica.h>

class Circulo : public FiguraGeometrica{
    int x0,y0,raio,mode;
public:
    Circulo(int x0, int y0, int raio, int mode);
    virtual void draw(Screen &t);
    virtual void pos(void);
};

#endif // CIRCULO_H
