#pragma once
#include <GL\freeglut.h>
#include "Orbita.h"
class Sol : public Orbita
{
	public:
		Sol();
		GLint x, y;
		void draw();
};

