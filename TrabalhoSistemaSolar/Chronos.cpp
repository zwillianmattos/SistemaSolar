#include "Chronos.h"
#include <GL\freeglut.h>
#include "orbita.h"
#include <string>

float chronos = 0;
void Chronos::draw() {
    //chronos
    glColor3f(1, 0, 1);
    glPushMatrix();
    glRotatef(chronos, 0, 0, 1);
    glTranslatef(0.9, 0.0, 0.0);
    glutSolidSphere(0.01, 100, 100);
    chronos += 0.1;
    glPopMatrix();
    glColor3f(1, 0, 1);
    defineOrbita(0.9);
}