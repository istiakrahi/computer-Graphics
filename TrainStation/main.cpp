#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.1416

void display()

{
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(168,162,158);
    glVertex2f(-1.0f,-1.0f);
    glVertex2f(-0.85f,-0.8f);
    glVertex2f(0.45f,-0.8f);
    glVertex2f(0.6f,-1.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168,162,158);
    glVertex2f(-1.0f,0.0f);
    glVertex2f(0.25f,0.0f);
    glVertex2f(0.1f,-0.1f);
    glVertex2f(-0.85f,-0.1f);
    glEnd();

    glLineWidth(4.5);
    glBegin(GL_LINES);
    glColor3ub(84,76,72);
    glVertex2f(-1.0f,-0.65f);
    glVertex2f(1.0f,-0.65f);
    glEnd();

    glLineWidth(4.5);
    glBegin(GL_LINES);
    glColor3ub(84,76,72);
    glVertex2f(-1.0f,-0.5f);
    glVertex2f(1.0f,-0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(-0.95f,-0.65f);
    glVertex2f(-0.85f,-0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(-0.85f,-0.65f);
    glVertex2f(-0.75f,-0.5f);
    glEnd();


    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(-0.75f,-0.65f);
    glVertex2f(-0.65f,-0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(-0.65f,-0.65f);
    glVertex2f(-0.55f,-0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(-0.55f,-0.65f);
    glVertex2f(-0.45f,-0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(-0.45f,-0.65f);
    glVertex2f(-0.35f,-0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(-0.35f,-0.65f);
    glVertex2f(-0.25f,-0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(-0.25f,-0.65f);
    glVertex2f(-0.15f,-0.5f);
    glEnd();

  //  glLineWidth(2);
  //  glBegin(GL_LINES);
  //  glColor3ub(150,70,27);
  //  glVertex2f(-0.15f,-0.75f);
   // glVertex2f(-0.5f,-0.5f);
  //  glEnd();

        glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(-0.15f,-0.65f);
    glVertex2f(-0.05f,-0.5f);
    glEnd();

     glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(-0.05f,-0.65f);
    glVertex2f(0.05f,-0.5f);
    glEnd();

     glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(0.05f,-0.65f);
    glVertex2f(0.15f,-0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(0.15f,-0.65f);
    glVertex2f(0.25f,-0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(0.25f,-0.65f);
    glVertex2f(0.35f,-0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(0.25f,-0.65f);
    glVertex2f(0.35f,-0.5f);
    glEnd();


    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(0.35f,-0.65f);
    glVertex2f(0.45f,-0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(0.45f,-0.65f);
    glVertex2f(0.55f,-0.5f);
    glEnd();


    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(0.55f,-0.65f);
    glVertex2f(0.65f,-0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(0.65f,-0.65f);
    glVertex2f(0.75f,-0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(0.75f,-0.65f);
    glVertex2f(0.85f,-0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(150,70,27);
    glVertex2f(0.85f,-0.65f);
    glVertex2f(0.95f,-0.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(25,38,166);
    glVertex2f(0.95f,-0.5f);
    glVertex2f(0.8f,-0.5f);
    glVertex2f(0.8f,-0.2f);
    glEnd();

  /*  glBegin(GL_QUADS);
    glColor3ub(10,10,10);
    glVertex2f(0.7,-0.3f);
    glVertex2f(0.7f,-0.4f);
    glVertex2f(0.6f,-0.4f);
    glVertex2f(0.6f,-0.3f);
 */  // glEnd();

    glBegin(GL_QUADS);
    glColor3ub(140,166,25);
    glVertex2f(0.8f,-0.2f);
    glVertex2f(0.5f,-0.2f);
    glVertex2f(0.5f,-0.5f);
    glVertex2f(0.8f,-0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(40,166,250);
    glVertex2f(0.5f,-0.5f);
    glVertex2f(0.2f,-0.5f);
    glVertex2f(0.2f,-0.0f);
    glVertex2f(0.5f,-0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(10,16,25);
    glVertex2f(0.4f,-0.4f);
    glVertex2f(0.3f,-0.4f);
    glVertex2f(0.3f,-0.1f);
    glVertex2f(0.4f,-0.1f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(207,48,63);
    glVertex2f(0.5f,0.0f);
    glVertex2f(0.2f,0.0f);
    glVertex2f(0.35f,0.1f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(140,40,68);
    glVertex2f(0.1f,-0.5f);
    glVertex2f(-0.4f,-0.5f);
    glVertex2f(-0.4f,-0.2f);
    glVertex2f(0.1f,-0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(10,140,67);
    glVertex2f(0.1f,-0.2f);
    glVertex2f(-0.4f,-0.2f);
    glVertex2f(-0.35f,-0.15f);
    glVertex2f(0.05f,-0.15f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(10,140,67);
    glVertex2f(-0.5f,-0.5f);
    glVertex2f(-0.95f,-0.5f);
    glVertex2f(-0.95f,-0.2f);
    glVertex2f(-0.5f,-0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(140,40,68);
    glVertex2f(-0.5f,-0.2f);
    glVertex2f(-0.95f,-0.2f);
    glVertex2f(-0.9f,-0.15f);
    glVertex2f(-0.55f,-0.15f);
    glEnd();


    glLineWidth(7.5);
    glBegin(GL_LINES);
    glColor3ub(245,246,250);
    glVertex2f(-0.5f,-0.45f);
    glVertex2f(-0.4f,-0.45f);
    glEnd();

    glLineWidth(7.5);
    glBegin(GL_LINES);
    glColor3ub(240,240,240);
    glVertex2f(0.2f,-0.45f);
    glVertex2f(0.1f,-0.45f);
    glEnd();

    GLfloat x=0.75f;
    GLfloat y=-0.5f;
    GLfloat radius= 0.1f;
      int i;
      int triangleAmount=30;
        GLfloat twicepi = 2.0f*PI;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(171,22,17);
        for(i=0;i<=triangleAmount;i++){
                glVertex2f(

                  x+(radius*cos(i*twicepi/triangleAmount)),
                  y+(radius*sin(i*twicepi/triangleAmount))
                           );


        };

        glEnd();


            x=0.35f;
     y=-0.5f;
     radius= 0.1f;
       i;
       triangleAmount=30;
        //GLfloat twicepi = 2.0f*PI;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(171,22,17);
        for(i=0;i<=triangleAmount;i++){
                glVertex2f(

                  x+(radius*cos(i*twicepi/triangleAmount)),
                  y+(radius*sin(i*twicepi/triangleAmount))
                           );


        };

        glEnd();



            x=-0.0f;
     y=-0.5f;
     radius= 0.1f;
       i;
       triangleAmount=30;
        //GLfloat twicepi = 2.0f*PI;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(240,240,240);
        for(i=0;i<=triangleAmount;i++){
                glVertex2f(

                  x+(radius*cos(i*twicepi/triangleAmount)),
                  y+(radius*sin(i*twicepi/triangleAmount))
                           );


        };




        glEnd();



            x=-0.3f;
     y=-0.5f;
     radius= 0.1f;
       i;
       triangleAmount=30;
        //GLfloat twicepi = 2.0f*PI;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(240,240,240);
        for(i=0;i<=triangleAmount;i++){
                glVertex2f(

                  x+(radius*cos(i*twicepi/triangleAmount)),
                  y+(radius*sin(i*twicepi/triangleAmount))
                           );


        };

        glEnd();


             x=-0.6f;
     y=-0.5f;
     radius= 0.1f;
       i;
       triangleAmount=30;
        //GLfloat twicepi = 2.0f*PI;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(171,22,17);
        for(i=0;i<=triangleAmount;i++){
                glVertex2f(

                  x+(radius*cos(i*twicepi/triangleAmount)),
                  y+(radius*sin(i*twicepi/triangleAmount))
                           );


        };

        glEnd();


         x=-0.85f;
     y=-0.5f;
     radius= 0.1f;
       i;
       triangleAmount=30;
        //GLfloat twicepi = 2.0f*PI;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(171,22,17);
        for(i=0;i<=triangleAmount;i++){
                glVertex2f(

                  x+(radius*cos(i*twicepi/triangleAmount)),
                  y+(radius*sin(i*twicepi/triangleAmount))
                           );


        };

        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(89,134,212);
        glVertex2f(-0.8f,0.0f);
        glVertex2f(-0.8f,0.7f);
        glVertex2f(-0.4f,0.7f);
        glVertex2f(-0.4f,0.0f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub( 10,234,109);
        glVertex2f(-0.8f,0.7f);
        glVertex2f(-0.9f,0.8f);
        glVertex2f(-0.3f,0.8f);
        glVertex2f(-0.4f,0.7f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(10,10,10);
        glVertex2f(-0.75f,0.6f);
        glVertex2f(-0.65f,0.6f);
        glVertex2f(-0.65f,0.4f);
        glVertex2f(-0.75f,0.4f);
        glEnd();


        glBegin(GL_QUADS);
        glColor3ub(210,10,190);
        glVertex2f(-0.55f,0.6f);
        glVertex2f(-0.45f,0.6f);
        glVertex2f(-0.45f,0.4f);
        glVertex2f(-0.55f,0.4f);
        glEnd();


        glBegin(GL_QUADS);
        glColor3ub(210,210,210);
        glVertex2f(-0.75f,0.3f);
        glVertex2f(-0.65f,0.3f);
        glVertex2f(-0.65f,0.1f);
        glVertex2f(-0.75f,0.1f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(10,10,10);
        glVertex2f(-0.55f,0.3f);
        glVertex2f(-0.45f,0.3f);
        glVertex2f(-0.45f,0.1f);
        glVertex2f(-0.55f,0.1f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(74,16,234);
        glVertex2f(-0.3f,0.0f);
        glVertex2f(-0.3f,0.5f);
        glVertex2f(-0.0f,0.5f);
        glVertex2f(-0.0f,0.0f);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(182,23,18);
        glVertex2f(-0.3f,0.5f);
        glVertex2f(-0.0f,0.5f);
        glVertex2f(-0.15f,0.65f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(30,240,210);
        glVertex2f(-0.2f,0.0f);
        glVertex2f(-0.2f,0.2f);
        glVertex2f(-0.05f,0.2f);
        glVertex2f(-0.05f,0.0f);
        glEnd();


        glBegin(GL_QUADS);
        glColor3ub(10,10,20);
        glVertex2f(-0.25f,0.4f);
        glVertex2f(-0.25f,0.3f);
        glVertex2f(-0.15f,0.3f);
        glVertex2f(-0.15f,0.4f);
        glEnd();


        glBegin(GL_QUADS);
        glColor3ub(91,130,161);
        glVertex2f(-0.1f,0.4f);
        glVertex2f(-0.1f,0.3f);
        glVertex2f(-0.03f,0.3f);
        glVertex2f(-0.03f,0.4f);
        glEnd();


        glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(10,10,10);
        glVertex2f(-0.65f,-0.9f);
        glVertex2f(-0.65f,-0.3f);
        glEnd();

        glLineWidth(3.5);
        glBegin(GL_LINES);
        glColor3ub(10,10,10);
        glVertex2f(-0.65f,-0.45f);
        glVertex2f(-0.4f,-0.45f);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(255,112,10);
        glVertex2f(-0.55f,-0.45f);
        glVertex2f(-0.4f,-0.45f);
        glVertex2f(-0.45f,-0.55f);
        glEnd();

        glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(10,10,10);
        glVertex2f(-0.25f,-0.9f);
        glVertex2f(-0.25f,-0.3f);
        glEnd();

        glLineWidth(3.5);
        glBegin(GL_LINES);
        glColor3ub(10,10,10);
        glVertex2f(-0.25f,-0.45f);
        glVertex2f(0.0f,-0.45f);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(255,112,10);
        glVertex2f(0.0f,-0.45f);
        glVertex2f(-0.15f,-0.45f);
        glVertex2f(-0.05f,-0.55f);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(158,96,25);
        glVertex2f(0.1f,-0.9f);
        glVertex2f(0.15f,-0.75f);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(158,96,25);
        glVertex2f(0.2f,-0.9f);
        glVertex2f(0.15f,-0.75f);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(158,96,25);
        glVertex2f(0.15f,-0.75f);
        glVertex2f(0.15f,-0.6f);
        glEnd();

   /*     glBegin(GL_LINES);
        glColor3ub(240,240,240);
        glVertex2f(0.15f,-0.65f);
        glVertex2f(0.2f,-0.7f);
    */ //   glEnd();

        glBegin(GL_LINES);
        glColor3ub(158,96,25);
        glVertex2f(0.15f,-0.65f);
        glVertex2f(0.25f,-0.7f);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(158,96,25);
        glVertex2f(0.15f,-0.65f);
        glVertex2f(0.05f,-0.7f);
        glEnd();


        glLineWidth(9.5);
        glBegin(GL_LINES);
        glColor3ub(133,82,41);
        glVertex2f(0.7f,-1.0f);
        glVertex2f(0.7f,-0.6f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(56,143,50);
        glVertex2f(0.8f,-0.85f);
        glVertex2f(0.95f,-0.7f);
        glVertex2f(0.8f,-0.55f);
        glVertex2f(0.6f,-0.55f);
        glVertex2f(0.45f,-0.7f);
        glVertex2f(0.6f,-0.85f);
        glEnd();


      /*  glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(133,82,41);
        glVertex2f(0.7f,-0.1f);
        glVertex2f(0.7f,0.4f);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(56,143,50);
        glVertex2f(0.85f,0.2f);
        glVertex2f(0.55f,0.2f);
        glVertex2f(0.7f,0.4f);
        glEnd();

         glBegin(GL_TRIANGLES);
        glColor3ub(56,143,50);
        glVertex2f(0.85f,0.1f);
        glVertex2f(0.55f,0.1f);
        glVertex2f(0.7f,0.3f);
        glEnd();
*/
        glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(133,82,41);
        glVertex2f(0.6f,-0.1f);
        glVertex2f(0.6f,0.4f);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(56,143,50);
        glVertex2f(0.75f,0.2f);
        glVertex2f(0.45f,0.2f);
        glVertex2f(0.6f,0.4f);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(56,143,50);
        glVertex2f(0.75f,0.1f);
        glVertex2f(0.45f,0.1f);
        glVertex2f(0.6f,0.3f);
        glEnd();

        glLineWidth(5.5);
        glBegin(GL_LINES);
        glColor3ub(133,82,41);
        glVertex2f(0.8f,-0.1f);
        glVertex2f(0.8f,0.7f);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(33,82,38);
        glVertex2f(0.8f,0.7f);
        glVertex2f(0.6f,0.4f);
        glVertex2f(1.0f,0.4f);
        glEnd();


        glBegin(GL_TRIANGLES);
        glColor3ub(33,82,38);
        glVertex2f(0.8f,0.5f);
        glVertex2f(0.6f,0.3f);
        glVertex2f(1.0f,0.3f);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(33,82,38);
        glVertex2f(0.8f,0.4f);
        glVertex2f(0.6f,0.2f);
        glVertex2f(1.0f,0.2f);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(33,82,38);
        glVertex2f(0.8f,0.3f);
        glVertex2f(0.6f,0.1f);
        glVertex2f(1.0f,0.1f);
        glEnd();

         x=0.3f;
     y=0.7f;
     radius= 0.2f;
       i;
       triangleAmount=30;
        //GLfloat twicepi = 2.0f*PI;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255,255,204);
        for(i=0;i<=triangleAmount;i++){
                glVertex2f(

                  x+(radius*cos(i*twicepi/triangleAmount)),
                  y+(radius*sin(i*twicepi/triangleAmount))
                           );


        };

        glEnd();




    glFlush();
}
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("train Station");
    glutInitWindowSize(450,450);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
