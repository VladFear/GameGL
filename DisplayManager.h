#include <GL/glut.h>

class DisplayManager
{
private:
	const unsigned int HEIGHT = 720;
	const unsigned int WIDTH = 1280;

public:
	DisplayManager();
	void createDisplay(int argc, char** argv);
	void updateDisplay();
	void closeDisplay();
	static void draw();
};

