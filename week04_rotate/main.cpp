#include <GL/glut.h>
void display()
{
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glPushMatrix();
        glRotatef(90,0,0,1);
        glColor3f(1,1,0);
        glutSolidTeapot(0.3);
        glPopMatrix();
        glutSwapBuffers();

}
int main(int argc,char** argv){
    glutInit( &argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("��4�g���{��");
    glutDisplayFunc(display);
    glutMainLoop();
}
