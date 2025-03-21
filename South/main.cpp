#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

void display() {
    glClearColor(0.0f, 0.47f, 0.28f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);
    glColor3f(0.87f, 0.22f, 0.19f);
    glVertex2i(110, 600); // Top-left corner
    glVertex2i(900, 600); // Top-right corner
    glVertex2i(900, 400); // Bottom-right corner
    glVertex2i(440, 400); // Bottom-left corner
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.137f, 0.584f);
    glVertex2i(440,200);
    glVertex2i(900, 200);
    glVertex2i(900, 0);
    glVertex2i(110, 0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(70, 600);
    glVertex2i(110, 600);
    glVertex2i(440, 400);
    glVertex2i(430, 360);

     glBegin(GL_QUADS);
     glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(440, 400);
    glVertex2i(900, 400);
     glVertex2i(900, 360);
    glVertex2i(430, 360);


    glEnd();
glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(430, 240);
    glVertex2i(440, 200);
    glVertex2i(110, 0);
    glVertex2i(70, 0);

     glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(430, 240);
    glVertex2i(900, 240);
     glVertex2i(900, 200);
    glVertex2i(440, 200);

    glEnd();

     glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(0, 510);
    glVertex2i(0, 90);
     glVertex2i(270, 300);

  glEnd();

     glBegin(GL_QUADS);
    glColor3f(1.0f, 0.714f, 0.071f);
    glVertex2i(0, 550);
    glVertex2i(310, 300);
     glVertex2i(270, 300);
     glVertex2i(0, 510);

      glBegin(GL_QUADS);
   glColor3f(1.0f, 0.714f, 0.071f);
    glVertex2i(270, 300);
    glVertex2i(310, 300);
     glVertex2i(0, 50);
     glVertex2i(0, 90);



    glEnd();




    glFlush();
}

void myInit (void) {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 900.0, 0.0, 600.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(900, 600);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("south_Africa");
    glutDisplayFunc(display);
    myInit();
    glutMainLoop();
    return 0;
}
