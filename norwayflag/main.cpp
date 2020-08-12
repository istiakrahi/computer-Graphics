#include<windows.h>
#include<GL/glut.h>

void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(17.5);

    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(-0.3f,1.0f);
    glVertex2f(-0.3f,-1.0f);
    glEnd();

    glLineWidth(17.5);
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(-1.0f,0.0f);
    glVertex2f(1.0f,-0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-0.4f,0.1f);
    glVertex2f(-1.0f,0.1f);
    glVertex2f(-1.0f,1.0f);
    glVertex2f(-0.4f,1.0f);
    glEnd();

   // glBegin(GL_QUADS);
   // glColor3f(1.0f,0.0f,0.0f);
   // glVertex2f(-0.4f,-0.1f);
   // glVertex2f(-1.0f,-0.1f);
   // glVertex2f(-0.4f,-1.0f);
   // glVertex2f(-1.0f,-1.0f);
   // glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-0.4f,-1.0f);
    glVertex2f(-1.0f,-1.0f);
    glVertex2f(-1.0f,-0.1f);
    glVertex2f(-0.4f,-0.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-0.2f,0.1f);
    glVertex2f(-0.2f,1.0f);
    glVertex2f(1.0f,1.0f);
    glVertex2f(1.0f,0.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-0.2f,-0.1f);
    glVertex2f(-0.2f,-1.0f);
    glVertex2f(1.0f,-1.0f);
    glVertex2f(1.0f,-0.1f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow(" Norway Flag");
    glutInitWindowSize(500,500);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
