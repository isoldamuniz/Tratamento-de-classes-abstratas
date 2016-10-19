#include "reta.h"
#define sgn(x) ((x<0)?-1:((x>0)?1:0))

Reta::Reta(int x1, int y1, int x2, int y2){
    this->x1=x1; this->y1=y1; this->x2=x2; this->y2=y2;
}

void Reta::draw(Screen &t){ //ajeitar o eixo x e o eixo y, estao trocados


    int dx, dy, dxabs, dyabs, sdx, sdy, px, py;
    float inclinacao;

    dx = x2-x1;
    dy = y2-y1;
    dxabs = abs(dx);
    dyabs = abs(dy);
    sdx = sgn(dx);
    sdy = sgn(dy);

    if (dxabs >= dyabs){
        inclinacao = (float)dy/(float)dx;
        for(int i=0;i!=dx;i+=sdx){
            px = x1 + i;
            py = inclinacao *i + y1;
            t.setPixel(px,py);
        }
    }
    else {
        inclinacao = (float)dx/(float)dy;
        for (int i=0;i!=dy;i+=sdy){
            px = inclinacao *i + x1;
            py = y1 + i;
            t.setPixel(px,py);
        }
    }
}

void Reta::pos(){
    cout << x1 << y1 << x2 << y2;
}
