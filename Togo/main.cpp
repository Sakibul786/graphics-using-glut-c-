#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    // Black stripe (top)
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.416f, 0.290f);
    glVertex2i(166.67, 300); // Top-left corner
    glVertex2i(500, 300); // Top-right corner
    glVertex2i(500, 240); // Bottom-right corner
    glVertex2i(166.67, 240); // Bottom-left corner
    glEnd();

    // White stripe (middle)
    glBegin(GL_QUADS);
   glColor3f(1.0f, 0.808f, 0.0f);
    glVertex2i(166.67, 240); // Top-left corner
    glVertex2i(500, 240); // Top-right corner
    glVertex2i(500, 180); // Bottom-right corner
    glVertex2i(166.67, 180); // Bottom-left corner
    glEnd();

    // Green stripe (bottom)
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.416f, 0.290f);
    glVertex2i(166.67, 180); // Top-left corner
    glVertex2i(500, 180); // Top-right corner
    glVertex2i(500, 120); // Bottom-right corner
    glVertex2i(166.67, 120); // Bottom-left corner
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.808f, 0.0f);
    glVertex2i(0, 120); // Top-left corner
    glVertex2i(500, 120); // Top-right corner
    glVertex2i(500, 60); // Bottom-right corner
    glVertex2i(0, 60); // Bottom-left corner
    glEnd();

     glBegin(GL_QUADS);
   glColor3f(0.0f, 0.416f, 0.290f);
    glVertex2i(0, 60); // Top-left corner
    glVertex2i(500, 60); // Top-right corner
    glVertex2i(500, 0); // Bottom-right corner
    glVertex2i(0, 0); // Bottom-left corner
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.824f, 0.063f, 0.204f);
    glVertex2i(0, 300); // Top-left corner
    glVertex2i(166.67, 500); // Top-right corner
    glVertex2i(166.67, 120); // Bottom-right corner
    glVertex2i(0, 120); // Bottom-left corner
    glEnd();


    glFlush();
}

void myInit (void) {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 500.0, 0.0, 300.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 300);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Flag of togo");
    glutDisplayFunc(display);
    myInit();
    glutMainLoop();
    return 0;
}
