#include <GL/glut.h>
#include <stdint.h>
#include <stdlib.h>

void myInit()
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glOrtho(-10, 20, -10, 30, -6, 6);
}

void Home()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
        glColor3f(0,0,0);

        // outer part
        glVertex2i(-2,3);
        glVertex2i(-2,15);

        glVertex2i(-2,3);
        glVertex2i(18,3);

        glVertex2i(18,3);
        glVertex2i(18,14);

        glVertex2i(5,14);
        glVertex2i(19,14);


        // left window
        glVertex2i(0,7);
        glVertex2i(0,12);

        glVertex2i(4,7);
        glVertex2i(4,12);

        glVertex2i(0,12);
        glVertex2i(4,12);

        glVertex2i(0,7);
        glVertex2i(4,7);

        // top window
        glVertex2i(1,15);
        glVertex2i(1,18);

        glVertex2i(1,15);
        glVertex2i(3,15);

        glVertex2i(3,15);
        glVertex2i(3,18);

        glVertex2i(3,18);
        glVertex2i(1,18);

        // diverder line
        glVertex2i(5,3);
        glVertex2i(5,15);

        // door
        glVertex2i(8,4);
        glVertex2i(8,10);

        glVertex2i(10,4);
        glVertex2i(10,10);

        glVertex2i(8,4);
        glVertex2i(10,4);

        glVertex2i(8,10);
        glVertex2i(10,10);

        // bottom layer
        glVertex2i(7,3);
        glVertex2i(7,4);

        glVertex2i(11,3);
        glVertex2i(11,4);

        glVertex2i(7,3);
        glVertex2i(11,3);

        glVertex2i(7,4);
        glVertex2i(11,4);

        // right window
        glVertex2i(16,6);
        glVertex2i(16,10);

        glVertex2i(13,6);
        glVertex2i(13,10);

        glVertex2i(16,6);
        glVertex2i(13,6);

        glVertex2i(16,10);
        glVertex2i(13,10);

        // top part
        glVertex2i(19,14);
        glVertex2i(17,23);

        glVertex2i(17,23);
        glVertex2i(3,23);

        // top head
        glVertex2i(15,23);
        glVertex2i(15,24);

        glVertex2i(14,23);
        glVertex2i(14,24);
        // over the top part
        glVertex2i(16,24);
        glVertex2i(16,25);

        glVertex2i(13,24);
        glVertex2i(13,25);

        glVertex2i(13,24);
        glVertex2i(16,24);

        glVertex2i(13,25);
        glVertex2i(16,25);

        // left head
        glVertex3f(1.8,27,0);
        glVertex3f(5.5,15,0);

        glVertex3f(1.8,27,0);
        glVertex3f(-2.5,15,0);

        glVertex3f(1.85,25,0);
        glVertex3f(5.1,15,0);

        glVertex3f(1.85,25,0);
        glVertex3f(-2.2,15,0);

        glVertex3f(-2.5,15,0);
        glVertex3f(-2.2,15,0);


    glEnd();

    glFlush();
}

int main(int argc , char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 500);
    glutInitWindowPosition(200, 150);
    glutCreateWindow("Home");
    myInit();
    glutDisplayFunc(Home);
    glutMainLoop();
    return 0;
}
