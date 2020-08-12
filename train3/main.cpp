#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#define PI    3.1416

void display()
    {
        glClearColor(0.0f,0.0f,0.0f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3f(0.0f,0.0f,1.0f);
        glVertex2f(1.0f,-0.4f);
        glVertex2f(-0.94f,-0.4f);
        glEnd();


        glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3f(0.0f,0.0f,1.0f);
        glVertex2f(1.0f,-0.6f);
        glVertex2f(-0.95f,-0.6f);
        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3f(1.0f,0.0f,1.0f);
        glVertex2f(-0.8f,-0.4f);
        glVertex2f(-0.9f,-0.6f);
        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3f(1.0f,0.0f,1.0f);
        glVertex2f(-0.6f,-0.4f);
        glVertex2f(-0.7f,-0.6f);
        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3f(1.0f,0.0f,1.0f);
        glVertex2f(-0.4f,-0.4f);
        glVertex2f(-0.5f,-0.6f);
        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3f(1.0f,0.0f,1.0f);
        glVertex2f(-0.2f,-0.4f);
        glVertex2f(-0.3f,-0.6f);
        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3f(1.0f,0.0f,1.0f);
        glVertex2f(0.0f,-0.4f);
        glVertex2f(-0.1f,-0.6f);
        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3f(1.0f,0.0f,1.0f);
        glVertex2f(0.2f,-0.4f);
        glVertex2f(0.1f,-0.6f);
        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3f(1.0f,0.0f,1.0f);
        glVertex2f(0.4f,-0.4f);
        glVertex2f(0.3f,-0.6f);
        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3f(1.0f,0.0f,1.0f);
        glVertex2f(0.6f,-0.4f);
        glVertex2f(0.5f,-0.6f);
        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3f(1.0f,0.0f,1.0f);
        glVertex2f(0.8f,-0.4f);
        glVertex2f(0.7f,-0.6f);
        glEnd();

        glLineWidth(2.5);
        glBegin(GL_LINES);
        glColor3f(1.0f,0.0f,1.0f);
        glVertex2f(1.0f,-0.4f);
        glVertex2f(0.9f,-0.6f);
        glEnd();



            //glLineWidth(4.5);
            glBegin(GL_QUADS);
            glColor3ub(245,182,10);
            glVertex2f(0.8f,-0.4f);
            glVertex2f(0.8f,0.0f);
            glVertex2f(0.3f,0.0f);
            glVertex2f(0.3f,-0.4f);
            glEnd();

            //glLineWidth()
            glBegin(GL_QUADS);
            glColor3ub(65,135,64);
            glVertex2f(0.3f,-0.4f);
            glVertex2f(0.3f,0.2f);
            glVertex2f(-0.1f,0.2f);
            glVertex2f(-0.1f,-0.4f);
            glEnd();

            glBegin(GL_QUADS);
            glColor3ub(30,30,30);
            glVertex2f(0.2f,0.1f);
            glVertex2f(0.2f,-0.2f);
            glVertex2f(0.0f,-0.2f);
            glVertex2f(0.0f,0.1f);
            glEnd();

            glBegin(GL_TRIANGLES);
            glColor3ub(245,245,245);
            glVertex2f(-0.1f,0.2f);
            glVertex2f(0.3f,0.2f);
            glVertex2f(0.1f,0.3f);
            glEnd();

            glBegin(GL_TRIANGLES);
            glColor3ub(166,58,25);
            glVertex2f(1.0f,-0.4f);
            glVertex2f(0.8f,-0.4f);
            glVertex2f(0.8f,0.0f);
            glEnd();

            glBegin(GL_QUADS);
            glColor3ub(57,172,181);
            glVertex2f(-0.2f,-0.4f);
            glVertex2f(-0.2f,0.0f);
            glVertex2f(-0.9f,0.0f);
            glVertex2f(-0.9f,-0.4f);
            glEnd();

            glLineWidth(5.0);
            glBegin(GL_LINES);
            glColor3ub(207,48,63);
            glVertex2f(-0.2f,-0.3f);
            glVertex2f(-0.1f,-0.3f);
            glEnd();

            glLineWidth(5.0);
            glBegin(GL_LINES);
            glColor3ub(207,48,63);
            glVertex2f(-0.2f,-0.1f);
            glVertex2f(-0.1f,-0.1f);
            glEnd();

            glBegin(GL_QUADS);
            glColor3ub(140,40,68);
            glVertex2f(-0.2f,0.0f);
            glVertex2f(-0.3f,0.1f);
            glVertex2f(-0.8f,0.1f);
            glVertex2f(-0.9f,0.0f);
            glEnd();


        GLfloat x=.7f;
        GLfloat y=-0.45f;
        GLfloat radius=.14f;
        int i;
        int triangleAmount=30;
        GLfloat twicepi = 2.0f*PI;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(245,10,20);
        for(i=0;i<=triangleAmount;i++){
                glVertex2f(

                  x+(radius*cos(i*twicepi/triangleAmount)),
                  y+(radius*sin(i*twicepi/triangleAmount))
                           );
        }
        glEnd();

        x=0.1f;
         y=-0.45f;
         radius=.14f;
      //  int i;
      //  int triangleAmount=30;
     //   GLfloat twicepi = 2.0f*PI;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(245,10,20);
        for(i=0;i<=triangleAmount;i++){
                glVertex2f(

                  x+(radius*cos(i*twicepi/triangleAmount)),
                  y+(radius*sin(i*twicepi/triangleAmount))
                           );
        }
        glEnd();

         x=-0.35f;
         y=-0.45f;
         radius=.12f;
      //  int i;
      //  int triangleAmount=30;
     //   GLfloat twicepi = 2.0f*PI;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(245,245,245);
        for(i=0;i<=triangleAmount;i++){
                glVertex2f(

                  x+(radius*cos(i*twicepi/triangleAmount)),
                  y+(radius*sin(i*twicepi/triangleAmount))
                           );
        }
        glEnd();


            x=-0.75f;
         y=-0.45f;
         radius=.12f;
      //  int i;
      //  int triangleAmount=30;
     //   GLfloat twicepi = 2.0f*PI;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(245,245,245);
        for(i=0;i<=triangleAmount;i++){
                glVertex2f(

                  x+(radius*cos(i*twicepi/triangleAmount)),
                  y+(radius*sin(i*twicepi/triangleAmount))
                           );
        }
        glEnd();

        glFlush();
    }

    int main(int argc,char** argv)
    {
    glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
    }
