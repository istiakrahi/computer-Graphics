#include<windows.h>
#include<GL/glut.h>

void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(50.0);

    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.6f);
    glVertex2f(-0.3f,1.0f);
    glVertex2f(-0.3f,-1.0f);
    glEnd();

    glLineWidth(50.0);
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.6f);
    glVertex2f(-1.0f,0.0f);
    glVertex2f(1.0f,-0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-0.5f,0.2f);
    glVertex2f(-1.0f,0.2f);
    glVertex2f(-1.0f,1.0f);
    glVertex2f(-0.5f,1.0f);
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
    glVertex2f(-0.5f,-1.0f);
    glVertex2f(-1.0f,-1.0f);
    glVertex2f(-1.0f,-0.2f);
    glVertex2f(-0.5f,-0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-0.1f,0.2f);
    glVertex2f(-0.1f,1.0f);
    glVertex2f(1.0f,1.0f);
    glVertex2f(1.0f,0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-0.1f,-0.2f);
    glVertex2f(-0.1f,-1.0f);
    glVertex2f(1.0f,-1.0f);
    glVertex2f(1.0f,-0.2f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow(" Norway Flag");
    glutInitWindowSize(1000,400);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
