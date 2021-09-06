// argument_definitions.cpp
// compile with: /EHsc
#include <iostream>
#include <cstring>
#include <GL\freeglut.h>
#include "Sol.h"
#include "Espaco.h"
#include "mercurio.h"

using namespace std;

Espaco* espaco;
Sol* sol;

Mercurio* mercurio;



float angle2 = 0.0;
float angle3 = 0.0;
float angle4 = 0.0;
float angle5 = 0.0;
float angle6 = 0.0;
float angle7 = 0.0;
float angle8 = 0.0;
float angle9 = 0.0;

void Orbit(float radius)
{
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i <= 360; i++)
    {
        float degInRad = i * 3.14159 / 180;
        glVertex2f(cos(degInRad) * radius, sin(degInRad) * radius);
    }
    glEnd();
}

void SaturnRings()
{
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

void renderScene(void) {
    //glClear(GL_COLOR_BUFFER_BIT);
    
    //sol
    sol->draw();

    //mercurio
    mercurio->draw();

    glColor3f(0, 1, 0);
    glPushMatrix();
    glRotatef(angle2, 0, 0, 1);
    glTranslatef(0.2, 0.0, 0.0);
    glutSolidSphere(0.02, 100, 100);
    angle2 += 0.8;
    glPopMatrix();
    Orbit(0.2);

    glColor3f(0, 0, 1);    //Earth
    glPushMatrix();
    glRotatef(angle3, 0, 0, 1);
    glTranslatef(0.3, 0.0, 0.0);
    glutSolidSphere(0.025, 100, 100);
    angle3 += 0.7;
    glColor3f(1, 1, 1);    //Earth moon
    glRotatef(angle3, 0, 0, 1);
    glTranslatef(0.05, 0.0, 0.0);
    glutSolidSphere(0.010, 100, 100);
    glPopMatrix();
    Orbit(0.3);

    glColor3f(1, 0, 1);//Mars
    glPushMatrix();
    glRotatef(angle4, 0, 0, 1);
    glTranslatef(0.4, 0.0, 0.0);
    glutSolidSphere(0.02, 100, 100);
    glColor3f(1, 1, 0);

    glRotatef(angle4 + 0.1, 0, 0, 0.2);
    glTranslatef(0.05, 0.0, 0.0);
    glutSolidSphere(0.006, 10, 10);
    glRotatef(angle4 + 0.2, 0, 0, 0.5);
    glTranslatef(0.01, 0.0, 0.0);
    glutSolidSphere(0.006, 5, 5);
    glRotatef(angle4 + 0.3, 0, 0, 0.5);
    glTranslatef(0.015, 0.0, 0.0);
    glutSolidSphere(0.006, 5, 5);
    angle4 += 0.6;

    //--
    glPopMatrix();
    Orbit(0.4);

    glColor3f(1, 1, 0);
    glPushMatrix();
    glRotatef(angle5, 0, 0, 1);
    glTranslatef(0.5, 0.0, 0.0);
    glutSolidSphere(0.03, 100, 100);
    angle5 += 0.5;
    glPopMatrix();
    Orbit(0.5);

    glColor3f(1, 0.8, 0.6);
    glPushMatrix();
    glRotatef(angle6, 0, 0, 1);
    glTranslatef(0.6, 0.0, 0.0);
    glutSolidSphere(0.025, 100, 100);

    glPushMatrix();
    glRotatef(-angle6, 0, 0, 1);
    SaturnRings();
    glPopMatrix();

    angle6 += 0.4;
    glPopMatrix();
    Orbit(0.6);

    glColor3f(0, 1, 1);
    glPushMatrix();
    glRotatef(angle7, 0, 0, 1);
    glTranslatef(0.7, 0.0, 0.0);

    glutSolidSphere(0.025, 100, 100);
    angle7 += 0.3;
    glPopMatrix();
    Orbit(0.7);

    glColor3f(0, 1, 0);
    glPushMatrix();
    glRotatef(angle8, 0, 0, 1);
    glTranslatef(0.8, 0.0, 0.0);
    glutSolidSphere(0.02, 100, 100);
    angle8 += 0.2;
    glPopMatrix();
    Orbit(0.8);

    glColor3f(1, 0, 1);
    glPushMatrix();
    glRotatef(angle9, 0, 0, 1);
    glTranslatef(0.9, 0.0, 0.0);
    glutSolidSphere(0.01, 100, 100);
    angle9 += 0.1;
    glPopMatrix();
    Orbit(0.9);


    glFlush();
}

void draw() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	espaco->draw();

    renderScene();
	glFlush();
	glutSwapBuffers();
}

void init() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-100, 100, -100, 100);
}

int main(int argc, char* argv[], char* envp[])
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(500, 0);
	glutCreateWindow("Hello");
	glutDisplayFunc(draw);
    glutIdleFunc(draw);
	glutMainLoop();
	init();
	return 0;
}