#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

void display() {
	// Set background color to white
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	// Red
	glBegin(GL_QUADS);
	glColor3f(0.9647f, 0.0f, 0.0f);
	glVertex2i(0, 500);
	glVertex2i(600, 500);
	glVertex2i(600, 600);
	glVertex2i(0, 600);
	glEnd();

	// Orange
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.5490f, 0.0f);
	glVertex2i(0, 400);
	glVertex2i(600, 400);
	glVertex2i(600, 500);
	glVertex2i(0, 500);
	glEnd();

	// Yellow
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.9333f, 0.0f);
	glVertex2i(0, 300);
	glVertex2i(600, 300);
	glVertex2i(600, 400);
	glVertex2i(0, 400);
	glEnd();

	// Green
	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2i(0, 200);
	glVertex2i(600, 200);
	glVertex2i(600, 300);
	glVertex2i(0, 300);
	glEnd();

	// Blue
	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2i(0, 100);
	glVertex2i(600, 100);
	glVertex2i(600, 200);
	glVertex2i(0, 200);
	glEnd();

	// Violet
	glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.5f);
	glVertex2i(0, 0);
	glVertex2i(600, 0);
	glVertex2i(600, 100);
	glVertex2i(0, 100);
	glEnd();

	glFlush();
}

void myInit() {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Rainbow");
	glutDisplayFunc(display);
	myInit();
	glutMainLoop();
	return 0;
}
