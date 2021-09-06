#include "Mercurio.h"
#include <cmath>
#include <GL\freeglut.h>

float angle1 = 0.0;

void Mercurio::draw() {
    glColor3f(1, 0, 0);
    glPushMatrix();
    glRotatef(angle1, 0, 0, 1);
    glTranslatef(0.12, 0.0, 0.0);
    glutSolidSphere(0.01, 100, 100);
    angle1 += 0.9;
    glPopMatrix();
    defineOrbita(0.12);
}