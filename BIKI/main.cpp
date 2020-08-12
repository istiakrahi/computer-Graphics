#include<windows.h>
#include<GL/glut.h>

void display(){
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(7.5);
    glBegin(GL_LINES);
    glColor3f(1.0f,0.0f,1.0f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.5f,0.5f);

    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(0.5f,0.5f);
    glVertex2f(1.0f,0.0f);

    glBegin(GL_LINES);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(1.0f,0.0f);
    glVertex2f(0.35f,-0.40f);
    //glVertex2f(1.0f,0.0f);


        glBegin(GL_LINES);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(0.0f,0.0f);
        glVertex2f(0.35f,-0.4f);


        glBegin(GL_LINES);
        glColor3f(1.0f,0.0f,1.0f);
        glVertex2f(0.0f,0.0f);
        glVertex2f(-0.5f,0.5f);

        glBegin(GL_LINES);
        glColor3f(0.0f,0.0f,1.0f);
        glVertex2f(-0.5f,0.5f);
        glVertex2f(-1.0f,0.0f);

        glBegin(GL_LINES);
        glColor3f(1.0f,0.0f,0.0f);
        glVertex2f(-1.0f,0.0f);
        glVertex2f(-0.35f,-0.4f);

        glBegin(GL_LINES);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex2f(0.0f,0.0f);
        glVertex2f(-0.35f,-0.4f);


        glBegin(GL_LINES);
        glColor3f(0.0f,1.0f,1.0f);
        glVertex2f(0.4f,0.0f);
        glVertex2f(0.45f,0.04f);

        glBegin(GL_LINES);
        glColor3f(0.0f,1.0f,1.0f);
        glVertex2f(-0.4f,0.0f);
        glVertex2f(-0.45f,0.04f);


    glEnd();

    glFlush();

}

int main(int argc, char**argv){
    glutInit(&argc,argv);
//    glutlnit(&argc, argv);
    glutCreateWindow("openGl window");
    glutInitWindowSize(540,540);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
    }

