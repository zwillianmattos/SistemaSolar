#include "Marte.h"
#include <cmath>
#include <GL\freeglut.h>

float anguloMarte = 0;
void Marte::draw() {
    
    //Mars
    glColor3f(1, 0, 1);
    glPushMatrix();
    glRotatef(anguloMarte, 0, 0, 1);
    glTranslatef(0.4, 0.0, 0.0);
    glutSolidSphere(0.02, 100, 100);
    glColor3f(1, 1, 0);
    glRotatef(anguloMarte + 0.1, 0, 0, 0.2);
    glTranslatef(0.05, 0.0, 0.0);
    glutSolidSphere(0.006, 10, 10);
    glRotatef(anguloMarte + 0.2, 0, 0, 0.5);
    glTranslatef(0.01, 0.0, 0.0);
    glutSolidSphere(0.006, 5, 5);
    glRotatef(anguloMarte + 0.3, 0, 0, 0.5);
    glTranslatef(0.015, 0.0, 0.0);
    glutSolidSphere(0.006, 5, 5);
    anguloMarte += 0.6;
    glPopMatrix();

    glColor3f(1, 1, 1);
    defineOrbita(0.4);
}