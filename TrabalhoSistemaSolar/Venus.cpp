#include "Venus.h"
#include <cmath>
#include <GL\freeglut.h>

float angle2 = 0.0;
void Venus::draw() {
    glColor3f(0.901, 0.901, 0.901);
    glPushMatrix();
        glRotatef(angle2, 0, 0, 1);
        glTranslatef(0.2, 0.0, 0.0);
        glutSolidSphere(0.02, 100, 100);
        angle2 += 0.8;
    glPopMatrix();
    
    glColor3f(1, 1, 1);
    defineOrbita(0.2);
}