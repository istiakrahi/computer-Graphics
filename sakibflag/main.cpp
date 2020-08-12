#include <windows.h>
#include <GL/glut.h>

void display()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(25);
	/// For x Axix
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.1f, 0.6f); /// blue
	glVertex2f(-1.0f, 0.0f);    /// x, y
	glVertex2f(1.0f, 0.0f);    /// x, y
    glEnd();

    /// For y Axix
    glLineWidth(25);
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.1f, 0.6f); /// blue
	glVertex2f(-0.35f, 1.0f);    /// x, y
	glVertex2f(-0.35f, -1.0f);    /// x, y
    glEnd();
    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f); /// red      /// Top right Square
	glVertex2f(-0.25f, 0.1f);    /// x, y
	glVertex2f(1.0f, 0.1f); /// x, y
	glVertex2f(1.0f, 1.0f);    /// x, y
	glVertex2f(-0.25f, 1.0f); /// x, y
    glEnd();


    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f); /// red      /// Bottom right Square
	glVertex2f(-0.25f, -0.1f);    /// x, y
	glVertex2f(-0.25f, -1.0f); /// x, y
	glVertex2f(1.0f, -1.0f);    /// x, y
	glVertex2f(1.0f, -0.1f); /// x, y
    glEnd();


    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f); /// red      /// Top left Square
	glVertex2f(-0.45f, 0.1f);    /// x, y
	glVertex2f(-0.45f, 1.0f); /// x, y
	glVertex2f(-1.0f, 1.0f);    /// x, y
	glVertex2f(-1.0f, 0.1f); /// x, y
    glEnd();


    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f); /// red      /// Bottom Left Square
	glVertex2f(-0.45f, -0.1f);    /// x, y
	glVertex2f(-1.0f, -0.1f); /// x, y
	glVertex2f(-1.0f, -1.0f);    /// x, y
	glVertex2f(-0.45f, -1.0f); /// x, y
    glEnd();

	glFlush();  /// Render now
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow(" Norway Flag ");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
