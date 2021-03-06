#include "Mercurio.h"
#include <cmath>
#include <GL\freeglut.h>

float angle1 = 0.0;

void Mercurio::draw() {
    glColor3f(0.360, 0.360, 0.360);
    glPushMatrix();
        glRotatef(angle1, 0, 0, 1);
        glTranslatef(0.12, 0.0, 0.0);
        glutSolidSphere(0.01, 100, 100);
        angle1 += 0.9;
    glPopMatrix();

    glColor3f(1, 1, 1);
    defineOrbita(0.12);
}