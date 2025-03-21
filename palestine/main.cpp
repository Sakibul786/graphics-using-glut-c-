#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    // Black stripe (top)
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f); // Black color
    glVertex2i(0, 267); // Top-left corner
    glVertex2i(800, 267); // Top-right corner
    glVertex2i(800, 400); // Bottom-right corner
    glVertex2i(0, 400); // Bottom-left corner
    glEnd();

    // White stripe (middle)
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f); // White color
    glVertex2i(0, 133); // Top-left corner
    glVertex2i(800, 133); // Top-right corner
    glVertex2i(800, 267); // Bottom-right corner
    glVertex2i(0, 267); // Bottom-left corner
    glEnd();

    // Green stripe (bottom)
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f); // Green color
    glVertex2i(0, 0); // Top-left corner
    glVertex2i(800, 0); // Top-right corner
    glVertex2i(800, 133); // Bottom-right corner
    glVertex2i(0, 133); // Bottom-left corner
    glEnd();

    // Red triangle (left)
    glBegin(GL_TRIANGLES);
    glColor3f(0.8f, 0.0f, 0.0f); // Red color
    glVertex2i(0, 400); // Top corner
    glVertex2i(0, 0); // Bottom corner
    glVertex2i(267, 200); // Middle-right corner
    glEnd();

    glFlush();
}

void myInit (void) {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 800.0, 0.0, 400.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 400);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Flag of Palestine");
    glutDisplayFunc(display);
    myInit();
    glutMainLoop();
    return 0;
}
