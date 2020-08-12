#include<windows.h>
#include<GL/glut.h>

void display(){
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(7.5);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.50f,0.50f);
    glVertex2f(1.0f,0.75f);

    glEnd();

    glFlush();

}

int main(int argc, char**argv){
    glutInit(&argc,argv);
//    glutlnit(&argc, argv);
    glutCreateWindow("openGl window");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
    }

