#include <GL/glut.h>
float angle=0;
void display()
{
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glPushMatrix();///�ƥ��x�}
        glRotatef(angle,0,0,1);
        glColor3f(1,1,0);
        glutSolidTeapot(0.3);
        glPopMatrix();///�٭�x�}
        glutSwapBuffers();

}
void motion(int x,int y)
{
    angle = x;
    display();///���e�e��
}
int main(int argc,char** argv){
    glutInit( &argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("��4�g���{��");
    glutDisplayFunc(display);
    glutMotionFunc(motion);
    glutMainLoop();
}