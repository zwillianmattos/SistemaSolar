#include "Espaco.h"
#include <fstream> 
#include "GL/glext.h"
#include "leitorBMP.h"


GLuint textureID[2];

Espaco::Espaco() {
	x = y = 0;
}

void Espaco::draw() {
    glEnable(GL_TEXTURE_2D);
	glColor3f(1, 0, 1);
	glPushMatrix();
		glLoadIdentity();

		configureTexture();
		glBegin(GL_QUADS);
			glTexCoord2f(0, 0);
			glVertex3f(-1, -1, 0);
			glTexCoord2f(1, 0);
			glVertex3f(1, -1, 0);
			glTexCoord2f(1, 1);
			glVertex3f(1, 1, 0);
			glTexCoord2f(0, 1);
			glVertex3f(-1, 1, 0);
		glEnd();
	glPopMatrix();

    glDisable(GL_TEXTURE_2D);

}

void Espaco::configureTexture() {
    glGenTextures(2, textureID);

    loadBMP("espaco.bmp");
    glBindTexture(GL_TEXTURE_2D, textureID[0]);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_BGR, GL_UNSIGNED_BYTE, dataImg);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
}
