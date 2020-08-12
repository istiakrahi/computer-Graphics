#include <windows.h>
#include<GL/glut.h>

void display(){
   glClearColor(0.0f,0.0f,0.0f,1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
   glLineWidth(7.5);

   glBegin(GL_TRIANGLES);
   glColor3f(1.0f,0.0f,0.0f);
   glVertex2f(0.0,0.0);
   glVertex2f(1.0,0.0);
   glVertex2f(0.5,0.5);

   glEnd();

   glFlush();
}

int main(int argc, char** argv){

        glutInit(&argc,argv);
        glutCreateWindow("Triangle");
        glutInitWindowSize(520,520);
        glutDisplayFunc(display);
        glutMainLoop();
                return (1-1);
}
