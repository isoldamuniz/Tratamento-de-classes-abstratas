#include "screen.h"
#include <iostream>

using namespace std;

Screen::Screen(int numlin, int numcol){
    if(numlin >0 && numcol >0){
        this->numlin = numlin;
        this->numcol = numcol;

        mat = vector< vector<char> > (numlin, vector<char> (numcol, ' '));
    }
    if(numlin <= 0 && numcol <= 0){
        cout << "Matriz inválida";
  }
}

void Screen::setPixel(int x, int y){
    mat[y][x] = brush;
}

void Screen::clear(){
    for(int i=0;i<numlin;i++){
        for(int j=0;j<numcol;j++){
            if(mat[i][j] != ' '){
                mat[i][j] = ' ';
            }
        }
    }
}

void Screen::setBrush(char brush){
    this->brush = brush;
}
