#include<windef.h>
#include<GL/glut.h>
#include<math.h>

# define PI           3.14159265358979323846

void display(){

 glClearColor(0.0f,0.0f,0.0f,1.0f);
 glClear(GL_COLOR_BUFFER_BIT);

 GLfloat x= .4f ;
 GLfloat y= .4f;
 GLfloat radius =.2f;
 int i;

 int lineamount=100;

 GLfloat twicePi=2.0f*PI;

 glBegin(GL_LINE_LOOP);

 for(i=0;i<lineamount;i++)
 {
     glVertex2f(
                x+(radius*cos(i*twicePi/lineamount)),
                y+(radius*sin(i*twicePi/lineamount))
                );
 }

 x= -.4f;
 y= .4f;
 radius = .2f;

 int j;
 int lineamount2=100;

 GLfloat twicePi1=2.0f*PI;

 glBegin(GL_LINE_LOOP);

 for(j=0;j<lineamount2;j++)
 {
     glVertex2f(
                x+(radius*cos(j*twicePi1/lineamount)),
                y+(radius*sin(j*twicePi1/lineamount))
                );
 }

 glEnd();
 glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
