#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>
#include <math.h>


const int NUM_POINTS = 50;

float carPosition = 0.0;


float cloud1PosX = 0.0f; // Initial position of the first cloud
float cloud2PosX = -150.0f; // Initial position of the second cloud
const float cloudSpeed = 1.0f; // Speed of the clouds



void drawSun(float x, float y) {
    glPushMatrix();
    glColor3f(1.0f, 1.0f, 0.0f);
    glTranslatef(x, y, 0.0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float theta = i * 3.1416 / 180;
        float xPos = 50 * cos(theta);
        float yPos = 50 * sin(theta);
        glVertex2f(xPos, yPos);
    }
    glEnd();
    glPopMatrix();
}


// Function to draw a circle using GL_POLYGON
void drawCircle(float centerX, float centerY, float radius) {
    glBegin(GL_POLYGON); // Using GL_POLYGON instead of GL_TRIANGLE_FAN
    for (int i = 0; i < 360; i += 10) { // Using 10-degree increments for efficiency
        float theta = i * 3.1416 / 180.0f; // Convert degrees to radians
        float x = centerX + cos(theta) * radius;
        float y = centerY + sin(theta) * radius;
        glVertex2f(x, y);
    }
    glEnd();
}


// Function to draw a single cloud
void drawCloud(float x, float y) {

    glColor3f(1.0f, 1.0f, 1.0f); // White color
    drawCircle(x, y, 30);        // Center circle
    drawCircle(x + 35, y, 30);   // Right circle
    drawCircle(x - 35, y, 30);   // Left circle
    drawCircle(x + 15, y + 25, 25); // Top right circle
    drawCircle(x - 15, y + 25, 25); // Top left circle
}

float bx = 0.0;

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 360; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}



void display() {
     glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    gluOrtho2D(0,1500,0,1000);
	glMatrixMode(GL_MODELVIEW);


	 // Sky

    glColor3f(0.529f, 0.808f, 0.922f);
    glBegin(GL_QUADS);
    glVertex2i(0, 550);
    glVertex2i(1500, 550);
    glVertex2i(1500, 1000);
    glVertex2i(0, 1000);
    glEnd();

    // Sun
    drawSun(1250, 900); // Position of the sun




    // Draw clouds
    drawCloud(cloud1PosX, 950.0f); // Cloud 1 in the sky
    drawCloud(cloud2PosX, 850.0f); // Cloud 2 in the sky


    ///Hill

   glColor3f(0.0f, 0.6f, 0.2f);
    glBegin(GL_TRIANGLES);
    glVertex2i(0,686);
    glVertex2i(300,686);
    glVertex2i(200,800);

    glBegin(GL_TRIANGLES);
    glVertex2i(300,686);
    glVertex2i(700,686);
    glVertex2i(550,820);

    glBegin(GL_TRIANGLES);
    glVertex2i(700,686);
    glVertex2i(1250,686);
    glVertex2i(900,790);

    glBegin(GL_TRIANGLES);
    glVertex2i(1250,686);
    glVertex2i(1500,686);
    glVertex2i(1300,780);
    glEnd();




    ///road
    glColor3f(0.3f, 0.3f, 0.3f);
	glBegin(GL_QUADS);
    glVertex2i(0,600);
    glVertex2i(1500,600);
    glVertex2i(1500,686);
    glVertex2i(0,686);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2i(0,641);
    glVertex2i(1500,641);
    glVertex2i(1500,646);
    glVertex2i(0,646);
     glEnd();


    ///car

    glPushMatrix();
    glTranslatef(carPosition, 0.0, 0.0);

    // Car Body
    glColor3f(0.33f, 0.33f, 0.33f);
    glBegin(GL_QUADS);
    glVertex2i(200, 650);
    glVertex2i(300, 650);
    glVertex2i(300, 700);
    glVertex2i(200, 700);
    glEnd();


     glColor3f(0.33f, 0.33f, 0.33f);
     glBegin(GL_QUADS);
     glVertex2i(220, 700);
     glVertex2i(280, 700);
     glVertex2i(260, 730);
     glVertex2i(240, 730);
     glEnd();


     // Left Wheel
    glPushMatrix();
    glTranslatef(220, 640, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
    float theta = i * 3.1416 / 180;
    float x = 12 * cos(theta);
    float y = 12 * sin(theta);
    glVertex2f(x, y);
}
    glEnd();
    glPopMatrix();

    // Right Wheel
    glPushMatrix();
    glTranslatef(280, 640, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
    float theta = i * 3.1416 / 180;
    float x = 12 * cos(theta);
    float y = 12 * sin(theta);
    glVertex2f(x, y);
}
    glEnd();
    glPopMatrix();

glPopMatrix();

//car1

     glPushMatrix();
    glTranslatef(bx, 0, 0);

    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(1410, 610);
    glVertex2d(1490, 610);
    glVertex2d(1485, 640);
    glVertex2d(1410, 640);
    glEnd();

    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(1420, 640);
    glVertex2d(1475, 640);
    glVertex2d(1465, 670);
    glVertex2d(1430, 670);
    glEnd();

    // car window
    glColor3ub(220, 220, 220);
    glBegin(GL_POLYGON);
    glVertex2d(1425, 640);
    glVertex2d(1445, 640);
    glVertex2d(1445, 660);
    glVertex2d(1430, 660);
    glEnd();

    // car window
    glColor3ub(220, 220, 220);
    glBegin(GL_POLYGON);
    glVertex2d(1450, 640);
    glVertex2d(1470, 640);
    glVertex2d(1465, 660);
    glVertex2d(1450, 660);
    glEnd();

    // car wheel
    glColor3ub(0, 0, 0);
    circle(10, 14, 1435, 610);
    circle(10, 14, 1465, 610);

    glColor3ub(245, 245, 245);
    circle(6, 10, 1435, 610);
    circle(6, 10, 1465, 610);

    glPopMatrix();
    bx += .5;
    if (bx > 0)
        bx = -1500;
    glutPostRedisplay();



    ///grass
    glColor3f(0.6f, 0.8f, 0.2f);
    glBegin(GL_QUADS);
    glVertex2i(0,340);
    glVertex2i(1500,340);
    glVertex2i(1500,600);
    glVertex2i(0,600);
    glEnd();

       // Draw multiple trees
    for (int i = 50; i < 1500; i += 150) {
        // Draw tree trunk
        glColor3f(0.4f, 0.2f, 0.1f); // Brown color
        glBegin(GL_QUADS);
        glVertex2i(i, 340);
        glVertex2i(i + 20, 340);
        glVertex2i(i + 20, 400);
        glVertex2i(i, 400);
        glEnd();

        // Draw tree canopy (leaves)
        glColor3f(0.0f, 0.6f, 0.0f); // Dark green
        glBegin(GL_TRIANGLES);
        glVertex2i(i - 30, 400);  // Left point of the triangle
        glVertex2i(i + 50, 400); // Right point of the triangle
        glVertex2i(i + 10, 460); // Top point of the triangle
        glEnd();

        glBegin(GL_TRIANGLES);
        glVertex2i(i - 25, 430);  // Left point of the second layer
        glVertex2i(i + 45, 430); // Right point of the second layer
        glVertex2i(i + 10, 490); // Top point of the second layer
        glEnd();
    }

    // First House (Left)
    // House base
    glColor3f(0.8f, 0.4f, 0.0f); // Brown
    glBegin(GL_QUADS);
    glVertex2i(500, 490);
    glVertex2i(600, 490);
    glVertex2i(600, 560);
    glVertex2i(500, 560);
    glEnd();

    // Roof
    glColor3f(0.9f, 0.2f, 0.2f); // Red
    glBegin(GL_TRIANGLES);
    glVertex2i(490, 560); // Left point
    glVertex2i(610, 560); // Right point
    glVertex2i(555, 600); // Top point
    glEnd();

    // Door
    glColor3f(0.4f, 0.2f, 0.1f); // Dark Brown
    glBegin(GL_QUADS);
    glVertex2i(540, 490); // Bottom-left
    glVertex2i(560, 490); // Bottom-right
    glVertex2i(560, 530); // Top-right
    glVertex2i(540, 530); // Top-left
    glEnd();

    // Left Window
    glColor3f(0.0f, 0.6f, 1.0f); // Blue
    glBegin(GL_QUADS);
    glVertex2i(510, 520); // Bottom-left
    glVertex2i(530, 520); // Bottom-right
    glVertex2i(530, 540); // Top-right
    glVertex2i(510, 540); // Top-left
    glEnd();

    // Right Window
    glBegin(GL_QUADS);
    glVertex2i(570, 520); // Bottom-left
    glVertex2i(590, 520); // Bottom-right
    glVertex2i(590, 540); // Top-right
    glVertex2i(570, 540); // Top-left
    glEnd();

    // Second House (Right)
    // House base
    glColor3f(0.8f, 0.4f, 0.0f); // Brown
    glBegin(GL_QUADS);
    glVertex2i(900, 490);
    glVertex2i(1000, 490);
    glVertex2i(1000, 560);
    glVertex2i(900, 560);
    glEnd();

    // Roof
    glColor3f(0.9f, 0.2f, 0.2f); // Red
    glBegin(GL_TRIANGLES);
    glVertex2i(890, 560); // Left point
    glVertex2i(1010, 560); // Right point
    glVertex2i(955, 600); // Top point
    glEnd();

    // Door
    glColor3f(0.4f, 0.2f, 0.1f); // Dark Brown
    glBegin(GL_QUADS);
    glVertex2i(940, 490); // Bottom-left
    glVertex2i(960, 490); // Bottom-right
    glVertex2i(960, 530); // Top-right
    glVertex2i(940, 530); // Top-left
    glEnd();

    // Left Window
    glColor3f(0.0f, 0.6f, 1.0f); // Blue
    glBegin(GL_QUADS);
    glVertex2i(910, 520); // Bottom-left
    glVertex2i(930, 520); // Bottom-right
    glVertex2i(930, 540); // Top-right
    glVertex2i(910, 540); // Top-left
    glEnd();

    // Right Window
    glBegin(GL_QUADS);
    glVertex2i(970, 520); // Bottom-left
    glVertex2i(990, 520); // Bottom-right
    glVertex2i(990, 540); // Top-right
    glVertex2i(970, 540); // Top-left
    glEnd();






///railline

glColor3ub(150, 150, 144);
	glBegin(GL_QUADS);
    glVertex2i(0,340);
    glVertex2i(0,365);
    glVertex2i(1500,365);
    glVertex2i(1500,340);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(0,362);
    glVertex2i(1500,362);
    glVertex2i(1500,365);
    glVertex2i(0,365);

    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(0,340);
    glVertex2i(1500,340);
    glVertex2i(1500,344);
    glVertex2i(0,344);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    float j;
    for(j=0;j<=1500;j+=20) //rail line
   {
        glVertex2i(10+j,340);
        glVertex2i(15+j,365);

    }
    glEnd();


    ///wall

 glColor3f(0.6, 0.3, 0.0);
glBegin(GL_POLYGON);
glVertex2f(0.0f,310.0f);
glVertex2f(1500.0f,310.0f);
glVertex2f(1500.0f,340.0f);
glVertex2f(0.0f,340.0f);
glEnd();


// Base of the dam
glColor3f(0.6, 0.3, 0.0);
glBegin(GL_POLYGON);
glVertex2f(0.0f, 310.0f);
glVertex2f(1500.0f, 310.0f);
glVertex2f(1500.0f, 340.0f);
glVertex2f(0.0f, 340.0f);
glEnd();


glColor3f(0.5, 0.5, 0.5);
float y1 = 5.0f;
for (float y = 310.0f; y <= 340.0f; y += y1) {
    glBegin(GL_LINES);
    glVertex2f(0.0f, y);
    glVertex2f(1500.0f, y);
    glEnd();
}


glColor3f(0.4, 0.2, 0.1);
for (float x = 50.0f; x <= 1450.0f; x += 100.0f) {
    glBegin(GL_LINES);
    glVertex2f(x, 310.0f); // Bottom
    glVertex2f(x, 340.0f); // Top
    glEnd();
}




    ///beach
 glColor3f(0.94, 0.85, 0.56); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(0.0f,250.0f);
glVertex2f(1500.0f,250.0f);
glVertex2f(1500.0f,310.0f);
glVertex2f(0.0f,310.0f);
glEnd();



    ///water
    glColor3f(0.0f, 0.5f, 0.7f);
glBegin(GL_POLYGON);
glVertex2f(0.0f,0.0f);
glVertex2f(1500.0f,0.0f);
glVertex2f(1500.0f,250.0f);
glVertex2f(0.0f,250.0f);
glEnd();


    glutSwapBuffers();
}

void timer(int value) {
    carPosition -= 2.0f; // Move car to the left
    if (carPosition < -200) carPosition = 1500; // Reset position if off-screen

    // Move clouds to the right
    cloud1PosX += cloudSpeed;
    cloud2PosX += cloudSpeed;

    // Reset position when clouds go off-screen
    if (cloud1PosX > 1500) {
        cloud1PosX = -100; // Reset cloud 1
    }
    if (cloud2PosX > 1500) {
        cloud2PosX = -100; // Reset cloud 2
    }

    glutPostRedisplay(); // Redraw scene
    glutTimerFunc(16, timer, 0); // Call this function again after 16ms
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1500, 1000);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Maritime World Journey");


    glutDisplayFunc(display);
    glutTimerFunc(0, timer, 0); // Start the timer

    glutMainLoop();
    return 0;
}
