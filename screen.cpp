#include "screen.h"

Screen::Screen(int numlin, int numcol){
        this->numlin = numlin;
        this->numcol = numcol;

        mat = vector< vector<char> > (numlin, vector<char> (numcol, ' '));

}

void Screen::setPixel(int x, int y){
    mat[x][y] = brush;
}

void Screen::clear(){
    for(int i=0;i<numlin;i++){
        for(int j=0;j<numlin;j++){
            if(mat[i][j] != ' '){
                mat[i][j] = ' ';
            }
        }
    }
}

void Screen::setBrush(char brush){
    this->brush = brush;
}
