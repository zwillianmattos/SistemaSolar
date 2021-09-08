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
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glLoadIdentity();

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

	glutSwapBuffers();
	glFlush();
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
	glutInitWindowSize(1024, 768);
	glutCreateWindow("Solar System");
	init();
	glutDisplayFunc(draw);
	glutIdleFunc(draw);
	glutMainLoop();
	
	return 0;
}