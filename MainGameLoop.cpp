#include <GL/glut.h>

#include "DisplayManager.h"

int main(int argc, char** argv)
{
	DisplayManager displayManager;
	displayManager.createDisplay(argc, argv);

	return 0;
}
