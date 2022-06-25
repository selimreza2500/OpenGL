#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

void Circle(int cx, int cy, int rx, int ry, int parts)
{
    glBegin(GL_TRIANGLE_FAN);
    for(int i = 0; i < parts; i++){
        float theta = 2.0f *3.1415926f * float(i)/float(parts);
        float x = rx * cosf(theta);
        float y = ry * sinf(theta);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 0, 0);
    Circle(50, 60, 35, 35, 400);
    glColor3f(0, 1, 1);
    Circle(50, 60, 30, 30, 400);
    glColor3f(1, 0, 0);
    Circle(50, 60, 25, 25, 400);
    glColor3f(0, 1, 1);
    Circle(50, 60, 20, 20, 400);
    glColor3f(1, 0, 0);
    Circle(50, 60, 15, 15, 400);
    glColor3f(0, 1, 1);
    Circle(50, 60, 10, 10, 400);
    glColor3f(1, 0, 0);
    Circle(50, 60, 5, 5, 400);
    glFlush();
}

void myInit()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glOrtho(0,100,0,100,0,100);
}

int main(int argc , char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(300,80);
    glutCreateWindow("Lab final 2");
    myInit();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
