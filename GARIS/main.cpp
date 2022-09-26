//MEMBUAT GARIS BIRU
//NAMA : FADIT AL FAUZAN
//NIM : E1E121002

#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 1, 1);
    glLineWidth(5);
    glBegin(GL_LINES);

    glColor3f(0.0, 0.0, 1.0);   //Warna Biru
    glVertex3f(0.2, 0.5, 0.0);  //Titik 1
    glVertex3f(0.7, 0.5, 0.0);  //Titik 2

    glEnd();
    glFlush();
}

void Initialize()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv){
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Point");
    Initialize();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
