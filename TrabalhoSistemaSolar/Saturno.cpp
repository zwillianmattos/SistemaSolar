#include "Saturno.h"
#include <cmath>
#include <GL\freeglut.h>
#include "orbita.h"

float anguloSaturno = 0;

void Saturno::draw() {
    glColor3f(0.690, 0.560, 0.207);
    glPushMatrix();
        glRotatef(anguloSaturno, 0, 0, 1);
        glTranslatef(0.6, 0.0, 0.0);
        glutSolidSphere(0.025, 100, 100);

        glPushMatrix();
            glRotatef(-anguloSaturno, 0, 0, 1);
            Aneis();
        glPopMatrix();

        anguloSaturno += 0.4;
    glPopMatrix();
    glColor3f(1, 1, 1);
    defineOrbita(0.6);
}

void Saturno::Aneis() {
    glBegin(GL_LINE_LOOP);
    glColor3f(1, 0.6, 0.2);
    for (int i = 0; i <= 360; i++)
    {
        float degInRad = i * 3.14159 / 180;
        glVertex2f(cos(degInRad) * 0.038, sin(degInRad) * 0.016);
        glVertex2f(cos(degInRad) * 0.037, sin(degInRad) * 0.015);
        glVertex2f(cos(degInRad) * 0.036, sin(degInRad) * 0.014);
        glVertex2f(cos(degInRad) * 0.035, sin(degInRad) * 0.013);
        glVertex2f(cos(degInRad) * 0.034, sin(degInRad) * 0.012);
        glVertex2f(cos(degInRad) * 0.033, sin(degInRad) * 0.011);
    }
    glColor3f(1, 0.8, 0.6);
    glEnd();
}