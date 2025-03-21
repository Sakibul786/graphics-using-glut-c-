#include<windows.h>
#include<GL/gl.h>
#include<GL/glut.h>



    void display(){

    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    gluOrtho2D(0,660,0,480);

    glBegin(GL_QUADS);
        glColor3f(0.0f,0.0f,0.0f);
        glVertex2f(20,180);
        glVertex2f(640,180);
        glVertex2f(640,320);
        glVertex2f(20,320);
    glEnd();

    glBegin(GL_QUADS);
            int x1=40,x2=620;
            int y1=320,y2=340;
        for(int i=0;i<7;i++){
            glColor3f(0.0f,0.0f,0.0f);
            glVertex2f(x1,y1);
            glVertex2f(x2,y1);
            glVertex2f(x2,y2);
            glVertex2f(x1,y2);
            x1+=20;
            x2-=20;
            y1+=20;
            y2+=20;

        }
    glEnd();

    glBegin(GL_QUADS);
            int x3=40,x4=620;
            int y3=180,y4=160;
        for(int i=0;i<7;i++){
            glColor3f(0.0f,0.0f,0.0f);
            glVertex2f(x3,y3);
            glVertex2f(x4,y3);
            glVertex2f(x4,y4);
            glVertex2f(x3,y4);
            x3+=20;
            x4-=20;
            y3+=20;
            y4-=20;

        }
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(40,180);
        glVertex2f(60,180);
        glVertex2f(60,320);
        glVertex2f(40,320);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(160,420);
        glVertex2f(500,420);
        glVertex2f(500,440);
        glVertex2f(160,440);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(160,60);
        glVertex2f(500,60);
        glVertex2f(500,80);
        glVertex2f(160,80);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(600,180);
        glVertex2f(620,180);
        glVertex2f(620,320);
        glVertex2f(600,320);
    glEnd();

    glBegin(GL_QUADS);
    int x5=60,x6=80,y5=200,y6=160;
    for(int i =0;i<6;i++){
            glColor3f(1.0f,1.0f,0.0f);
            glVertex2f(x5,y5);
            glVertex2f(x6,y5);
            glVertex2f(x6,y6);
            glVertex2f(x5,y6);
            x5+=20;
            x6+=20;
            y5-=20;
            y6-=20;
        }
    glEnd();

    glBegin(GL_QUADS);
    int x7=60,x8=80,y7=300,y8=340;
    for(int i =0;i<6;i++){
            glColor3f(1.0f,1.0f,0.0f);
            glVertex2f(x7,y7);
            glVertex2f(x8,y7);
            glVertex2f(x8,y8);
            glVertex2f(x7,y8);
            x7+=20;
            x8+=20;
            y7+=20;
            y8+=20;
        }
    glEnd();


    glBegin(GL_QUADS);
    int x9=500,x10=520,y9=420,y10=380;
    for(int i =0;i<6;i++){
            glColor3f(1.0f,1.0f,0.0f);
            glVertex2f(x9,y9);
            glVertex2f(x10,y9);
            glVertex2f(x10,y10);
            glVertex2f(x9,y10);
            x9+=20;
            x10+=20;
            y9-=20;
            y10-=20;
        }
    glEnd();

    glBegin(GL_QUADS);
    int x11=500,x12=520,y11=80,y12=120;
    for(int i =0;i<6;i++){
            glColor3f(1.0f,1.0f,0.0f);
            glVertex2f(x11,y11);
            glVertex2f(x12,y11);
            glVertex2f(x12,y12);
            glVertex2f(x11,y12);
            x11+=20;
            x12+=20;
            y11+=20;
            y12+=20;
        }
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(180,400);
        glVertex2f(280,400);
        glVertex2f(280,420);
        glVertex2f(180,420);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(300,400);
        glVertex2f(360,400);
        glVertex2f(360,420);
        glVertex2f(300,420);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(380,400);
        glVertex2f(500,400);
        glVertex2f(500,420);
        glVertex2f(380,420);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(380,400);
        glVertex2f(440,400);
        glVertex2f(440,380);
        glVertex2f(380,380);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(220,400);
        glVertex2f(280,400);
        glVertex2f(280,380);
        glVertex2f(220,380);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(200,380);
        glVertex2f(280,380);
        glVertex2f(280,320);
        glVertex2f(200,320);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(380,380);
        glVertex2f(460,380);
        glVertex2f(460,320);
        glVertex2f(380,320);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(220,320);
        glVertex2f(260,320);
        glVertex2f(260,300);
        glVertex2f(220,300);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(400,320);
        glVertex2f(440,320);
        glVertex2f(440,300);
        glVertex2f(400,300);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(180,80);
        glVertex2f(200,80);
        glVertex2f(200,100);
        glVertex2f(180,100);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(220,80);
        glVertex2f(320,80);
        glVertex2f(320,100);
        glVertex2f(220,100);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(340,80);
        glVertex2f(440,80);
        glVertex2f(440,100);
        glVertex2f(340,100);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(360,80);
        glVertex2f(400,80);
        glVertex2f(400,100);
        glVertex2f(360,100);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(460,80);
        glVertex2f(500,80);
        glVertex2f(500,100);
        glVertex2f(460,100);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(220,100);
        glVertex2f(300,100);
        glVertex2f(300,120);
        glVertex2f(220,120);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(240,120);
        glVertex2f(300,120);
        glVertex2f(300,140);
        glVertex2f(240,140);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(260,140);
        glVertex2f(280,140);
        glVertex2f(280,160);
        glVertex2f(260,160);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(360,100);
        glVertex2f(440,100);
        glVertex2f(440,120);
        glVertex2f(360,120);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(360,120);
        glVertex2f(420,120);
        glVertex2f(420,140);
        glVertex2f(360,140);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(380,140);
        glVertex2f(400,140);
        glVertex2f(400,160);
        glVertex2f(380,160);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(240,120);
        glVertex2f(300,120);
        glVertex2f(300,140);
        glVertex2f(240,140);
    glEnd();


    glBegin(GL_LINES);
        for(int i=0;i<=660;i+=20){
            glVertex2f(i,0);
            glVertex2f(i,480);
            glColor3f(1.0f,0.0f,1.0f);
        }
        for(int i=0;i<=480;i+=20){
            glVertex2f(0,i);
            glVertex2f(660,i);
            glColor3f(1.0f,0.0f,1.0f);
        }
    glEnd();



    glFlush();
    }

    int main(int argc, char ** argv){
        glutInit(&argc, argv);
        glutInitWindowSize(1200,1000);
       glutInitWindowPosition(0, 0);
        glutCreateWindow("Batman");
        glutDisplayFunc(display);
        glutMainLoop();
          return 0;

    }
