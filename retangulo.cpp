#include "retangulo.h"
#include "reta.h"

Retangulo::Retangulo(int x, int y, int larg, int alt){
    this->x = x;
    this->y = y;
    this->larg = larg;
    this->alt = alt;
}

void Retangulo::draw(Screen &t){
    Reta aresta1 (x,y,x+larg,y);
    Reta aresta2 (x+larg,y,x+larg,y+alt);
    Reta aresta3 (x+larg,y+alt,x,y+alt);
    Reta aresta4 (x,y+alt,x,y);

    aresta1.draw(t);
    aresta2.draw(t);
    aresta3.draw(t);
    aresta4.draw(t);
}

void Retangulo::pos(){
    cout << x << y << larg << alt;
}
