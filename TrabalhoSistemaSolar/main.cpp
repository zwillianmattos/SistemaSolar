// argument_definitions.cpp
// compile with: /EHsc
#include <iostream>
#include <cstring>
#include <GL\freeglut.h>
#include "Sol.h"
#include "Espaco.h"
#include "mercurio.h"
#include "venus.h"
#include "terra.h"
#include "marte.h"
#include "jupiter.h"
#include "saturno.h"
#include "urano.h"
#include "netuno.h"
#include "chronos.h"

using namespace std;

Espaco* espaco;
Sol* sol;
Mercurio* mercurio;
Venus* venus;
Terra* terra;
Marte* marte;
Jupiter* jupiter;
Saturno* saturno;
Urano* urano;
Netuno* netuno;
Chronos* chronos;

void draw(void) {

	glLoadIdentity();
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	espaco->draw();
	//sol
	sol->draw();
	//mercurio
	mercurio->draw();
	//venus
	venus->draw();
	//terra
	terra->draw();
	//marte
	marte->draw();
	// jupiter
	jupiter->draw();
	//saturno
	saturno->draw();
	//urano
	urano->draw();
	//netuno
	netuno->draw();

	//timeline
	chronos->draw();

	glFlush();
	glutSwapBuffers();
}

void init(void) {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-100, 100, -100, 100);
}

int main(int argc, char* argv[], char* envp[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(900, 740);

	glutCreateWindow("Solar System");
	glutDisplayFunc(draw);
	glutIdleFunc(draw);
	init();
	glutMainLoop();
	
}