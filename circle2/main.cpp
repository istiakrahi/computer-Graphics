#include <windows.h>
#include <GL/glut.h>
#include<math.h>>

# define PI           3.14159265358979323846


void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3f(0.0f,1.0f,1.0f);
	glVertex2f(1.0f,-0.6f);
	glVertex2f(-1.0f,-0.6f);




	int i;

	GLfloat x=.6f; GLfloat y=-.4f; GLfloat radius =.2f;
	int triangleAmount = 30;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		//glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}





//	glLineWidth(10.5);
//	glBegin(GL_LINES);
//	glColor3f(0.0f,0.0f,1.0f);
//	glVertex2f(1.0f,-0.3f);
//	glVertex2f(-1.0f,-0.3f);
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
