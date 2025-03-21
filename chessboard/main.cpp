#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    int boardSize = 8;
    float squareSize = 600.0f / boardSize; //75

    for (int i = 0; i < 8; i++) //row
        {
        for (int j = 0; j < 8; j++) //column
         {

            if ((i + j) % 2 == 0) {
                glColor3f(1.0f, 1.0f, 1.0f); // White square
            } else {
                glColor3f(0.0f, 0.0f, 0.0f); // Black square
            }

            float x = j * 75;//left
            float y = (8 - i - 1) * 75;//right

            glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + 75, y);
            glVertex2f(x + 75, y + 75);
            glVertex2f(x, y + 75);
            glEnd();
        }
    }

    glFlush();
}

void init() {
    glClearColor(0.5f, 0.5f, 0.5f, 1.0f);  // background color
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Chessboard");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
