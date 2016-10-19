#include <iostream>
#include "screen.h"
#include "figurageometrica.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"

using namespace std;

int main()
{
    Screen tela(30,30);
    tela.setBrush('.');
    Circulo A(0,0,10,1);
    A.draw(tela);


    cout << tela;
    return 0;
}
