#include "Orbita.h"
#include <cmath>
#include <GL\freeglut.h>

void Orbita::defineOrbita(float radius) {
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i <= 360; i++)
    {
        float degInRad = i * 3.14159 / 180;
        glVertex2f(cos(degInRad) * radius, sin(degInRad) * radius);
    }
    glEnd();
}