#include "Netuno.h"

#include <GL\freeglut.h>
#include "orbita.h"

float  anguloNetuno = 0;
void Netuno::draw() {
    glColor3f(0, 1, 0);
    glPushMatrix();
    glRotatef(anguloNetuno, 0, 0, 1);
    glTranslatef(0.8, 0.0, 0.0);
    glutSolidSphere(0.02, 100, 100);
    anguloNetuno += 0.2;
    glPopMatrix();
    glColor3f(1, 1, 1);
    defineOrbita(0.8);
}