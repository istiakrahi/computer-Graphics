#include <windows.h>
#include <GL/glut.h>


void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(7.5);

	glBegin(GL_QUADS);
	glColor3ub(10,10,10);
	glVertex2f(0.1f,-0.8f);
	glVertex2f(0.4f,-0.8f);
	glVertex2f(0.4f,-0.9f);
	glVertex2f(0.1f,-0.9f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(10,10,10);
    glVertex2f(0.1f,-0.7f);
    glVertex2f(0.25f,-0.7f);
    glVertex2f(0.25f,-0.8f);
    glVertex2f(0.1f,-0.8f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(10,10,10);
	glVertex2f(-0.1f,-0.8f);
	glVertex2f(-0.4f,-0.8f);
	glVertex2f(-0.4f,-0.9f);
	glVertex2f(-0.1f,-0.9f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(10,10,10);
    glVertex2f(-0.1f,-0.7f);
    glVertex2f(-0.25f,-0.7f);
    glVertex2f(-0.25f,-0.8f);
    glVertex2f(-0.1f,-0.8f);
    glEnd();

/*glBegin(GL_QUADS);
    glColor3ub(7,119,50);
    glVertex2f(0.1f,-0.6f);
    glVertex2f(0.25f,-0.7f);
    glVertex2f(0.25f,-0.7f);
    glVertex2f(0.1f,-0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(71,119,150);
    glVertex2f(-0.1f,-0.6f);
    glVertex2f(-0.25f,-0.7f);
    glVertex2f(-0.25f,-0.7f);
    glVertex2f(-0.1f,-0.6f);
    glEnd();

*/

    glBegin(GL_QUADS);
    glColor3ub(71,119,150);
    glVertex2f(0.1f,-0.6f);
    glVertex2f(0.25f,-0.6f);
    glVertex2f(0.25f,-0.7f);
    glVertex2f(0.1f,-0.7f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(71,119,150);
    glVertex2f(-0.1f,-0.6f);
    glVertex2f(-0.25f,-0.6f);
    glVertex2f(-0.25f,-0.7f);
    glVertex2f(-0.1f,-0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(33,145,219);
    glVertex2f(-0.1f,-0.1f);
    glVertex2f(-0.25f,-0.1f);
    glVertex2f(-0.25f,-0.6f);
    glVertex2f(-0.1f,-0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(33,145,219);
    glVertex2f(0.1f,-0.1f);
    glVertex2f(0.25f,-0.1f);
    glVertex2f(0.25f,-0.6f);
    glVertex2f(0.1f,-0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(33,145,219);
    glVertex2f(-0.25f,-0.2f);
    glVertex2f(-0.25f,0.0f);
    glVertex2f(0.25f,0.0f);
    glVertex2f(0.25f,-0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(240,240,240);
    glVertex2f(-0.25f,0.05f);
    glVertex2f(-0.25f,0.0f);
    glVertex2f(0.25f,0.0f);
    glVertex2f(0.25f,0.05f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(10,10,10);
    glVertex2f(-0.25f,0.5f);
    glVertex2f(-0.25f,0.05f);
    glVertex2f(0.25f,0.05f);
    glVertex2f(0.25f,0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(240,240,240);
    glVertex2f(0.0f,0.3f);
    glVertex2f(0.0f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(240,240,240);
    glVertex2f(-0.05f,0.4f);
    glVertex2f(-0.05f,0.3f);
    glVertex2f(0.05f,0.3f);
    glVertex2f(0.05f,0.4f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(240,240,240);
    glVertex2f(-0.1f,0.4f);
    glVertex2f(-0.1f,0.5f);
    glVertex2f(0.1f,0.5f);
    glVertex2f(0.1f,0.4f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(217,198,124);
    glVertex2f(-0.1f,0.8f);
    glVertex2f(-0.1f,0.5f);
    glVertex2f(0.1f,0.5f);
    glVertex2f(0.1f,0.8f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(10,10,10);
    glVertex2f(-0.1f,0.6f);
    glVertex2f(-0.1f,0.5f);
    glVertex2f(-0.15f,0.5f);
    glVertex2f(-0.15f,0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(10,10,10);
    glVertex2f(0.1f,0.6f);
    glVertex2f(0.1f,0.5f);
    glVertex2f(0.15f,0.5f);
    glVertex2f(0.15f,0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(10,10,10);
    glVertex2f(0.15f,0.55f);
    glVertex2f(0.15f,0.5f);
    glVertex2f(0.2f,0.5f);
    glVertex2f(0.2f,0.55f);
    glEnd();
//head
    glBegin(GL_QUADS);
    glColor3ub(217,198,124);
    glVertex2f(-0.1f,0.8f);
    glVertex2f(-0.1f,0.55f);
    glVertex2f(-0.25f,0.55f);
    glVertex2f(-0.25f,0.8f);
    glEnd();

    //hand

    glBegin(GL_QUADS);
    glColor3ub(10,10,10);
    glVertex2f(-0.25f,0.5f);
    glVertex2f(-0.35f,0.5f);
    glVertex2f(-0.35f,0.0f);
    glVertex2f(-0.25f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(217,198,124);
    glVertex2f(-0.25f,0.0f);
    glVertex2f(-0.35f,0.0f);
    glVertex2f(-0.35f,-0.1f);
    glVertex2f(-0.25f,-0.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(10,10,10);
    glVertex2f(0.25f,0.5f);
    glVertex2f(0.35f,0.5f);
    glVertex2f(0.35f,0.0f);
    glVertex2f(0.25f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(217,198,124);
    glVertex2f(0.25f,0.0f);
    glVertex2f(0.35f,0.0f);
    glVertex2f(0.35f,-0.1f);
    glVertex2f(0.25f,-0.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(17,10,12);
    glVertex2f(-0.35f,0.9f);
    glVertex2f(-0.35f,0.8f);
    glVertex2f(0.15f,0.8f);
    glVertex2f(0.15f,0.9f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(17,10,12);
    glVertex2f(-0.35f,1.0f);
    glVertex2f(-0.35f,0.9f);
    glVertex2f(-0.15f,0.9f);
    glVertex2f(-0.15f,1.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(17,10,12);
    glVertex2f(0.05f,0.9f);
    glVertex2f(0.15f,0.9f);
    glVertex2f(0.15f,0.7f);
    glVertex2f(0.05f,0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(10,10,10);
    glVertex2f(-0.05f,0.9f);
    glVertex2f(-0.05f,0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(10,10,10);
    glVertex2f(-0.35f,0.75f);
    glVertex2f(-0.1f,0.75f);
    glVertex2f(-0.1f,0.65f);
    glVertex2f(-0.35f,0.65f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(217,198,124);
    glVertex2f(-0.25f,0.7f);
    glVertex2f(-0.25f,0.65f);
    glEnd();

	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(420, 420);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
