#include "Sol.h"
#include <cmath>
#include <GL\freeglut.h>
#include "orbita.h"

void Sol::draw() {
    glColor3f(1, 1, 0);
    glPushMatrix();
    glutSolidSphere(0.06, 100, 100);
    glColor3f(1, 0.5, 0);
    defineOrbita(0.06);
    defineOrbita(0.059);
    defineOrbita(0.058);
    defineOrbita(0.057);
    glPopMatrix();
}