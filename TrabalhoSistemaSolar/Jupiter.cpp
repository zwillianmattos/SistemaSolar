#include "Jupiter.h"

#include <GL\freeglut.h>
#include "orbita.h"

float anguloJupiter = 0;
void Jupiter::draw() {
    glColor3f(0.690, 0.498, 0.207);
    glPushMatrix();
        glRotatef(anguloJupiter, 0, 0, 1);
        glTranslatef(0.5, 0.0, 0.0);
        glutSolidSphere(0.03, 100, 100);
        anguloJupiter += 0.5;
    glPopMatrix();

    glColor3f(1, 1, 1);
    defineOrbita(0.5);
}