
#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(4.5);

	glBegin(GL_LINES);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 1.0f);
	glVertex2f(0.0f, -1.0f);

	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(-1.0f, 0.0f);

	glEnd();


	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.45f,0.9f);
	glVertex2f(-0.2f,0.3f);

	glEnd();


	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.75f,0.3f);
	glVertex2f(-0.2f,0.3f);

	glEnd();


	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.45f,0.9f);
	glVertex2f(-0.75f,0.3f);

	glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(0.3f,0.3f);
    glVertex2f(0.8f,0.3f);
	glVertex2f(0.8f,0.9f);
	glVertex2f(0.3f,0.9f);
	//glVertex2f(0.8,0.9);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f,1.0f,0.0f);
	glVertex2f(0.2f,-0.3f);
	glVertex2f(0.8f,-0.3f);
	glVertex2f(0.5f,-0.9f);
	glEnd();


    glPointSize(3.5);
    //glBegin(GL_POINT_SIZE = 2.5);
    glBegin(GL_POINTS);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex2f(-0.5f,-0.5f);
	glEnd();




	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

