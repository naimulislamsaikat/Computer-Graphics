#include <windows.h>
#include <GL/glut.h>

void renderBitmapString(float x, float y, float z, void *font, char *string){
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++){
        glutBitmapCharacter(font, *c);
    }
}

void display(){
    //glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.0,0.0);

    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f);

	glVertex2f(-0.7f, -0.5f);
	glVertex2f(0.7f, -0.5f);
	glVertex2f(0.7f, 0.5f);
	glVertex2f(-0.7f, 0.5f);
	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.1f, 0.05f);
	glVertex2f(0.0f, 0.32f);
	glVertex2f(-0.1f, 0.05f);
	glVertex2f(-0.3f, 0.05f);
	glVertex2f(-0.15f, -0.13f);
    glVertex2f(-0.2f,-0.4f);
    glVertex2f(0.0f,-0.2f);
    glVertex2f(0.2f,-0.4f);
    glVertex2f(0.15f, -0.13f);
    glVertex2f(0.3f, 0.05f);
    glVertex2f(0.1f, 0.05f);
	glEnd();

    glFlush();
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitWindowSize(720, 480);
    glutInitWindowPosition(80, 50);
    glutCreateWindow("Somalian Flag");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
