#include "Urano.h"

#include <GL\freeglut.h>
#include "orbita.h"

float  anguloUrano = 0;
void Urano::draw() {
    glColor3f(0, 1, 1);
    glPushMatrix();
        glRotatef(anguloUrano, 0, 0, 1);
        glTranslatef(0.7, 0.0, 0.0);

        glutSolidSphere(0.025, 100, 100);
        anguloUrano += 0.3;
    glPopMatrix();
    glColor3f(1, 1, 1);
    defineOrbita(0.7);
}