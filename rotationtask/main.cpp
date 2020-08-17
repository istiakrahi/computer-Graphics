#include <windows.h>
#include <GL/glut.h>

GLfloat i = 0.0f;


void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
    glClear(GL_COLOR_BUFFER_BIT);


     glBegin(GL_QUADS);
    glColor3ub(46,190,217);
    glVertex2f(0.5,0.1);
    glVertex2f(0.5,0.4);
    glVertex2f(0.7,0.4);
    glVertex2f(0.7,0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(167,45,243);
    glVertex2f(0.5,0.4);
    glVertex2f(0.7,0.4);
    glVertex2f(0.6,0.6);
    glEnd();


    glPushMatrix();
    glTranslatef(0.6,0.6,0);
    glRotatef(i,0.0,0.0,0.1);

    glBegin(GL_TRIANGLES);
    glColor3ub(135,179,23);
    glVertex2f(0.0,0.0);
    glVertex2f(0.3,0.05);
    glVertex2f(0.3,-0.05);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(134,19,123);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.3,0.05);
    glVertex2f(-0.3,-0.05);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(249,189,11);
    glVertex2f(0.0,0.0);
    glVertex2f(0.05,0.3);
    glVertex2f(-0.05,0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(234,19,123);
    glVertex2f(0.0,0.0);
    glVertex2f(0.05,-0.3);
    glVertex2f(-0.05,-0.3);
    glEnd();

    //gluOrtho2D()

    //glPushMatrix();
    //glRotatef(i,0,0.0,0.1);





    glPopMatrix();
    i+=0.01f;




    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);//

    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
    glutMainLoop();
    return 0;}
