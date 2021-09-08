#include "Marte.h"
#include <cmath>
#include <GL\freeglut.h>

float anguloMarte = 0;
void Marte::draw() {
    
    //Mars
    glColor3f(0.6, 0.239, 0);
    glPushMatrix();
        glRotatef(anguloMarte, 0, 0, 1);
        glTranslatef(0.4, 0.0, 0.0);
        glutSolidSphere(0.02, 100, 100);
        anguloMarte += 0.6;
    glPopMatrix();

    glColor3f(1, 1, 1);
    defineOrbita(0.4);
}