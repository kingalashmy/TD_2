#include "point.h"
#include <iostream>

using namespace std ; 


Point ::Point(float initialX, float initialY) {
    x = initialX;
    y = initialY;
}
void Point::deplacer(float deltaX, float deltaY) {
    x += deltaX;
    y += deltaY;
}
void Point:: affiche (){
    cout<< "point ( "<< x << " , "<< y << " ) "<<endl ; 
}

