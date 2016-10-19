#ifndef RETA_H
#define RETA_H
#include <figurageometrica.h>

class Reta : public FiguraGeometrica{
    int x1,y1,x2,y2;
public:
    Reta(int x1, int y1, int x2, int y2);
    virtual void draw(Screen &t);
    virtual void pos(void);
};

#endif // RETA_H
