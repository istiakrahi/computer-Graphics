#include <windows.h>
#include <GL/glut.h>
#include <math.h>

#define PI  3.1416


void display() {
	glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(7.5);
	//

	glBegin(GL_QUADS);
	glColor3f(1.0f,0.9f,0.7f);
	glVertex2f(-1.0f,0.5f);
	glVertex2f(-1.0f,-1.0f);
	glVertex2f(1.0f,-1.0f);
	glVertex2f(1.0f,0.5f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204,173,112);
	glVertex2f(-0.7f, 0.0f);
	glVertex2f(-0.0f, 0.0f);
	glVertex2f(-0.4f, 0.8f);

	glBegin(GL_TRIANGLES);
	glColor3ub(153,134,95);
	glVertex2f(-0.7f,0.0f);
	glVertex2f(-0.8f,0.2f);
	glVertex2f(-0.4f,0.8f);

	glEnd();
    glLoadIdentity();

    glTranslatef(0.9,-0.9,0);

    glBegin(GL_TRIANGLES);
	glColor3ub(204,173,112);
	glVertex2f(-0.7f, 0.0f);
	glVertex2f(-0.0f, 0.0f);
	glVertex2f(-0.4f, 0.8f);

	glBegin(GL_TRIANGLES);
	glColor3ub(153,134,95);
	glVertex2f(-0.7f,0.0f);
	glVertex2f(-0.8f,0.2f);
	glVertex2f(-0.4f,0.8f);

	glEnd();
	glLoadIdentity();

	glBegin(GL_TRIANGLES);
	glColor3ub(204,173,112);
	glVertex2f(-0.6f,-0.8f);
	glVertex2f(0.0f,-0.8f);
	glVertex2f(-0.3f,-0.2f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(153,134,95);
	glVertex2f(-0.6f,-0.8f);
	glVertex2f(-0.3f,-0.2f);
	glVertex2f(-0.65f,-0.6f);
	glEnd();

	glTranslatef(0.8f,0.9f,0);

	glBegin(GL_TRIANGLES);
	glColor3ub(204,173,112);
	glVertex2f(-0.6f,-0.8f);
	glVertex2f(0.0f,-0.8f);
	glVertex2f(-0.3f,-0.2f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(153,134,95);
	glVertex2f(-0.6f,-0.8f);
	glVertex2f(-0.3f,-0.2f);
	glVertex2f(-0.65f,-0.6f);
	glEnd();
    glLoadIdentity();

	int i;

	GLfloat x=0.2f; GLfloat y=0.75f; GLfloat radius =.2f;
//	int i;
	int triangleAmount = 30;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	//glColor3f(1.0f,0.5f,0.1f);
	glColor3ub(255,255,67);

		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		};

		glEnd();


	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup");
	glutInitWindowSize(420, 420);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
