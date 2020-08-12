#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

	glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3f(0.0f,0.0f,1.0f);
	glVertex2f(1.0f,-0.2f);
	glVertex2f(-1.0f,-0.2f);
	glEnd();


	glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3f(0.0f,0.0f,1.0f);
	glVertex2f(1.0f,-0.6f);
	glVertex2f(-1.0f,-0.6f);
	glEnd();

	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3f(1.0f,0.0f,1.0f);
	glVertex2f(-0.8f,-0.2f);
	glVertex2f(-0.8f,0.3f);
	glEnd();

	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3f(1.0f,0.0f,1.0f);
	glVertex2f(-0.8f,0.3f);
	glVertex2f(0.4f,0.3f);
	glEnd();

	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3f(1.0f,0.0f,1.0f);
	glVertex2f(0.4,0.3f);
	glVertex2f(0.9f,-0.2f);
	glEnd();

	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3f(1.0f,0.0f,1.0f);
	glVertex2f(0.9f,-0.3f);
	glVertex2f(-0.8f,-0.3f);
	glEnd();

	GLfloat x=.5f; GLfloat y=-.4f; GLfloat radius =.2f;
	int i;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	 x=-0.5f;  y=-.4f;  radius =.2f;
//	int i;
	//int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
//	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
