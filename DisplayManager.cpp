#include "DisplayManager.h"

void DisplayManager::draw()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
			glVertex3f(0.5, 0.0, 0.5);
			glVertex3f(0.5, 0.0, 0.0);
			glVertex3f(0.0, 0.5, 0.0);
			glVertex3f(0.0, 0.0, 0.5);
	glEnd();
	glFlush();
}

void DisplayManager::createDisplay(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(400, 300);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Hello world!");
	glutDisplayFunc(draw);
	glutMainLoop();
}

void DisplayManager::updateDisplay()
{

}

void DisplayManager::closeDisplay()
{

}

DisplayManager::DisplayManager()
{

}
