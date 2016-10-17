#include <iostream>
#include "screen.h"

using namespace std;

int main()
{
    Screen tela(20,10);
    tela.setBrush('@');
    tela.setPixel(2,3);
    tela.setBrush('a');
    tela.setPixel(4,7);
    cout << tela;
    return 0;
}
