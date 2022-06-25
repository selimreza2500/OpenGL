#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
static GLfloat spin = 0.0;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glRotatef(spin, 0.0, 0.0, 1.0);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(-25.0, -25.0, 25.0, 25.0);
    glPopMatrix();
    glFlush();
}
void spinDisplay_left(void)
{
    spin = spin + 1;
    if (spin > 360.0)
        spin = spin - 360.0;
    glutPostRedisplay();
}
void spinDisplay_right(void)
{
    spin = spin - 1;
    if (spin > 360.0)
        spin = spin - 360.0;
    glutPostRedisplay();
}
void my_mouse(int button, int state, int x, int y)
{
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay_left);
        break;
    case GLUT_MIDDLE_BUTTON:
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay_right);
        glutIdleFunc(NULL); // make idle function inactive
        break;
    default:
        break;
    }
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Transformation");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
    glutDisplayFunc(display);

    glutIdleFunc(spinDisplay_left);
    glutMouseFunc(my_mouse);
    glutMainLoop();
    return 0;
}
