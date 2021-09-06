#include "Terra.h"
#include <cmath>
#include <GL\freeglut.h>


float anguloTerra = 0;
void Terra::draw() {

    //Terra
    glColor3f(0, 0, 1);    
    glPushMatrix();
    glRotatef(anguloTerra, 0, 0, 1);
    glTranslatef(0.3, 0.0, 0.0);
    glutSolidSphere(0.025, 100, 100);
    anguloTerra += 0.7;
       
    //Lua
    glColor3f(1, 1, 1);    
    glRotatef(anguloTerra, 0, 0, 1);
    glTranslatef(0.05, 0.0, 0.0);
    glutSolidSphere(0.010, 100, 100);
    glPopMatrix();
    defineOrbita(0.3);
}