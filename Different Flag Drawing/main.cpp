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

    //XY Axis
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(1.0, 0.0);
    glVertex2f(-1.0, 0.0);

    glVertex2f(0.0, 1.0f);
    glVertex2f(0.0, -1.0);
    glEnd();


    //1. European Union flag
    glBegin(GL_QUADS);
    glColor3f(0.176f, 0.117f, 0.701f);
    glVertex2f(0.1, 0.9);
    glVertex2f(0.9, 0.9);
    glVertex2f(0.9, 0.1);
    glVertex2f(0.1, 0.1);
    glEnd();

    //down
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.51, 0.22);
    glVertex2f(0.53, 0.22);
    glVertex2f(0.515, 0.23);
    glVertex2f(0.52, 0.25);
    glVertex2f(0.5, 0.237);
    glVertex2f(0.48, 0.25);
    glVertex2f(0.485, 0.23);
    glVertex2f(0.47, 0.22);
    glVertex2f(0.49, 0.22);
    glVertex2f(0.5, 0.2);
    glEnd();

    //top
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.51, 0.82);
    glVertex2f(0.53, 0.82);
    glVertex2f(0.515, 0.83);
    glVertex2f(0.52, 0.85);
    glVertex2f(0.5, 0.847);
    glVertex2f(0.48, 0.85);
    glVertex2f(0.485, 0.83);
    glVertex2f(0.47, 0.82);
    glVertex2f(0.49, 0.82);
    glVertex2f(0.5, 0.8);
    glEnd();


    //left side
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.425, 0.27);
    glVertex2f(0.445, 0.27);
    glVertex2f(0.43, 0.28);
    glVertex2f(0.435, 0.3);
    glVertex2f(0.415, 0.287);
    glVertex2f(0.395, 0.3);
    glVertex2f(0.4, 0.28);
    glVertex2f(0.385, 0.27);
    glVertex2f(0.405, 0.27);
    glVertex2f(0.415, 0.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.36, 0.37);
    glVertex2f(0.38, 0.37);
    glVertex2f(0.365, 0.38);
    glVertex2f(0.37, 0.4);
    glVertex2f(0.35, 0.387);
    glVertex2f(0.33, 0.4);
    glVertex2f(0.335, 0.38);
    glVertex2f(0.32, 0.37);
    glVertex2f(0.34, 0.37);
    glVertex2f(0.35, 0.35);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f); //mid
    glVertex2f(0.31, 0.52);
    glVertex2f(0.33, 0.52);
    glVertex2f(0.315, 0.53);
    glVertex2f(0.32, 0.55);
    glVertex2f(0.3, 0.537);
    glVertex2f(0.28, 0.55);
    glVertex2f(0.285, 0.53);
    glVertex2f(0.27, 0.52);
    glVertex2f(0.29, 0.52);
    glVertex2f(0.3, 0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.425, 0.77);
    glVertex2f(0.445, 0.77);
    glVertex2f(0.43, 0.78);
    glVertex2f(0.435, 0.8);
    glVertex2f(0.415, 0.787);
    glVertex2f(0.395, 0.8);
    glVertex2f(0.4, 0.78);
    glVertex2f(0.385, 0.77);
    glVertex2f(0.405, 0.77);
    glVertex2f(0.415, 0.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.36, 0.67);
    glVertex2f(0.38, 0.67);
    glVertex2f(0.365, 0.68);
    glVertex2f(0.37, 0.7);
    glVertex2f(0.35, 0.687);
    glVertex2f(0.33, 0.7);
    glVertex2f(0.335, 0.68);
    glVertex2f(0.32, 0.67);
    glVertex2f(0.34, 0.67);
    glVertex2f(0.35, 0.65);
    glEnd();

    //right side
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.595, 0.27);
    glVertex2f(0.615, 0.27);
    glVertex2f(0.6, 0.28);
    glVertex2f(0.605, 0.3);
    glVertex2f(0.585, 0.287);
    glVertex2f(0.565, 0.3);
    glVertex2f(0.57, 0.28);
    glVertex2f(0.555, 0.27);
    glVertex2f(0.575, 0.27);
    glVertex2f(0.585, 0.25);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.66, 0.37);
    glVertex2f(0.68, 0.37);
    glVertex2f(0.665, 0.38);
    glVertex2f(0.67, 0.4);
    glVertex2f(0.65, 0.387);
    glVertex2f(0.63, 0.4);
    glVertex2f(0.635, 0.38);
    glVertex2f(0.62, 0.37);
    glVertex2f(0.64, 0.37);
    glVertex2f(0.65, 0.35);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f); //mid
    glVertex2f(0.71, 0.52);
    glVertex2f(0.73, 0.52);
    glVertex2f(0.715, 0.53);
    glVertex2f(0.72, 0.55);
    glVertex2f(0.7, 0.537);
    glVertex2f(0.68, 0.55);
    glVertex2f(0.685, 0.53);
    glVertex2f(0.67, 0.52);
    glVertex2f(0.69, 0.52);
    glVertex2f(0.7, 0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.575, 0.77);
    glVertex2f(0.555, 0.77);
    glVertex2f(0.57, 0.78);
    glVertex2f(0.565, 0.8);
    glVertex2f(0.585, 0.787);
    glVertex2f(0.605, 0.8);
    glVertex2f(0.6, 0.78);
    glVertex2f(0.615, 0.77);
    glVertex2f(0.595, 0.77);
    glVertex2f(0.585, 0.75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.64, 0.67);
    glVertex2f(0.62, 0.67);
    glVertex2f(0.635, 0.68);
    glVertex2f(0.63, 0.7);
    glVertex2f(0.65, 0.687);
    glVertex2f(0.67, 0.7);
    glVertex2f(0.665, 0.68);
    glVertex2f(0.68, 0.67);
    glVertex2f(0.66, 0.67);
    glVertex2f(0.65, 0.65);
    glEnd();


    //2. Samoa flag
    glBegin(GL_QUADS);
    glColor3f(0.89f, 0.008f, 0.168f);
    glVertex2f(-0.1,0.9);
    glVertex2f(-0.9,0.9);
    glVertex2f(-0.9,0.1);
    glVertex2f(-0.1,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.03f, 0.08f, 0.29f);
    glVertex2f(-0.5,0.9);
    glVertex2f(-0.9,0.9);
    glVertex2f(-0.9,0.5);
    glVertex2f(-0.5,0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f , 1.0f, 1.0f);
    glVertex2f(-0.71, 0.78);
    glVertex2f(-0.73, 0.78);
    glVertex2f(-0.715, 0.77);
    glVertex2f(-0.72, 0.75);
    glVertex2f(-0.7, 0.763);
    glVertex2f(-0.68, 0.75);
    glVertex2f(-0.685, 0.77);
    glVertex2f(-0.67, 0.78);
    glVertex2f(-0.69, 0.78);
    glVertex2f(-0.7, 0.8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f , 1.0f, 1.0f);
    glVertex2f(-0.79, 0.70);
    glVertex2f(-0.81, 0.70);
    glVertex2f(-0.795, 0.69);
    glVertex2f(-0.80, 0.67);
    glVertex2f(-0.78, 0.683);
    glVertex2f(-0.76, 0.67);
    glVertex2f(-0.765, 0.69);
    glVertex2f(-0.75, 0.70);
    glVertex2f(-0.77, 0.70);
    glVertex2f(-0.78, 0.72);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f , 1.0f, 1.0f);
    glVertex2f(-0.63, 0.73);
    glVertex2f(-0.65, 0.73);
    glVertex2f(-0.635, 0.72);
    glVertex2f(-0.64, 0.70);
    glVertex2f(-0.62, 0.713);
    glVertex2f(-0.60, 0.70);
    glVertex2f(-0.605, 0.72);
    glVertex2f(-0.59, 0.73);
    glVertex2f(-0.61, 0.73);
    glVertex2f(-0.62, 0.75);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f , 1.0f, 1.0f);
    glVertex2f(-0.71, 0.55);
    glVertex2f(-0.73, 0.55);
    glVertex2f(-0.715, 0.54);
    glVertex2f(-0.72, 0.52);
    glVertex2f(-0.7, 0.533);
    glVertex2f(-0.68, 0.52);
    glVertex2f(-0.685, 0.54);
    glVertex2f(-0.67, 0.55);
    glVertex2f(-0.69, 0.55);
    glVertex2f(-0.7, 0.57);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f , 1.0f, 1.0f);
    glVertex2f(-0.66, 0.67);
    glVertex2f(-0.68, 0.67);
    glVertex2f(-0.665, 0.66);
    glVertex2f(-0.67, 0.64);
    glVertex2f(-0.65, 0.653);
    glVertex2f(-0.63, 0.64);
    glVertex2f(-0.635, 0.66);
    glVertex2f(-0.62, 0.67);
    glVertex2f(-0.64, 0.67);
    glVertex2f(-0.65, 0.69);
    glEnd();


    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.03f, 0.08f, 0.29f);
    glVertex2f(-0.66, 0.67);
    glVertex2f(-0.68, 0.67);
    glVertex2f(-0.665, 0.66);
    glVertex2f(-0.67, 0.64);
    glVertex2f(-0.65, 0.653);
    glVertex2f(-0.63, 0.64);
    glVertex2f(-0.635, 0.66);
    glVertex2f(-0.62, 0.67);
    glVertex2f(-0.64, 0.67);
    glVertex2f(-0.65, 0.69);
    glEnd();


    //3. Canada flag
    glBegin(GL_QUADS);
    glColor3f(1.0f , 1.0f, 1.0f);
    glVertex2f(-0.1, -0.9);
    glVertex2f(-0.9, -0.9);
    glVertex2f(-0.9, -0.1);
    glVertex2f(-0.1, -0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.1, -0.9);
    glVertex2f(-0.3, -0.9);
    glVertex2f(-0.3, -0.1);
    glVertex2f(-0.1, -0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.7, -0.9);
    glVertex2f(-0.9, -0.9);
    glVertex2f(-0.9, -0.1);
    glVertex2f(-0.7, -0.1);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.49, -0.67);
    glVertex2f(-0.49, -0.8);

    glVertex2f(-0.51, -0.8);
    glVertex2f(-0.51, -0.67);
    glVertex2f(-0.59, -0.7);
    glVertex2f(-0.585, -0.67);
    glVertex2f(-0.64, -0.51);
    glVertex2f(-0.62, -0.5);
    glVertex2f(-0.625, -0.41);
    glVertex2f(-0.6, -0.43);
    glVertex2f(-0.575, -0.4);
    glVertex2f(-0.545, -0.5);
    glVertex2f(-0.55, -0.3);
    glVertex2f(-0.525, -0.35);

    glVertex2f(-0.5, -0.25);
    glVertex2f(-0.475, -0.35);
    glVertex2f(-0.45, -0.3);
    glVertex2f(-0.465, -0.5);
    glVertex2f(-0.425, -0.4);
    glVertex2f(-0.4, -0.43);
    glVertex2f(-0.375, -0.41);
    glVertex2f(-0.38, -0.5);
    glVertex2f(-0.36, -0.51);
    glVertex2f(-0.415, -0.67);
    glVertex2f(-0.41, -0.7);
    glEnd();


    //4. New Zealand flag
    glBegin(GL_QUADS);
    glColor3f(0.03f, 0.08f, 0.29f);
    glVertex2f(0.1, -0.9);
    glVertex2f(0.9, -0.9);
    glVertex2f(0.9, -0.1);
    glVertex2f(0.1, -0.1);
    glEnd();

    glLineWidth(17);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f ,1.0f);
    glVertex2f(0.1, -0.15);
    glVertex2f(0.5, -0.4);
    glEnd();

    glLineWidth(17);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f ,1.0f);
    glVertex2f(0.5, -0.15);
    glVertex2f(0.1, -0.4);
    glEnd();

    glLineWidth(17);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.3, -0.1);
    glVertex2f(0.3, -0.45);
    glEnd();

    glLineWidth(17);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f ,1.0f);
    glVertex2f(0.1, -0.28);
    glVertex2f(0.5, -0.28);
    glEnd();

    glLineWidth(9);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.1, -0.15);
    glVertex2f(0.22, -0.22);
    glEnd();

    glLineWidth(9);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.39, -0.33);
    glVertex2f(0.5, -0.4);
    glEnd();

    glLineWidth(9);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.19, -0.34);
    glVertex2f(0.1, -0.4);
    glEnd();

    glLineWidth(9);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.5, -0.15);
    glVertex2f(0.38, -0.23);

    glLineWidth(9); //middle
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.3, -0.1);
    glVertex2f(0.3, -0.45);
    glEnd();

    glLineWidth(11); //middle line
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.1, -0.28);
    glVertex2f(0.5, -0.28);
    glEnd();


    //Star
    glBegin(GL_POLYGON); //last
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.71, -0.78);
    glVertex2f(0.73, -0.78);
    glVertex2f(0.715, -0.77);
    glVertex2f(0.72, -0.75);
    glVertex2f(0.7, -0.763);
    glVertex2f(0.68, -0.75);
    glVertex2f(0.685, -0.77);
    glVertex2f(0.67, -0.78);
    glVertex2f(0.69, -0.78);
    glVertex2f(0.7, -0.8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.79, -0.51);
    glVertex2f(0.81, -0.51);
    glVertex2f(0.795, -0.5);
    glVertex2f(0.8, -0.48);
    glVertex2f(0.78, -0.493);
    glVertex2f(0.76, -0.48);
    glVertex2f(0.765, -0.5);
    glVertex2f(0.75, -0.51);
    glVertex2f(0.77, -0.51);
    glVertex2f(0.78, -0.53);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.63, -0.51);
    glVertex2f(0.65, -0.51);
    glVertex2f(0.635, -0.5);
    glVertex2f(0.64, -0.48);
    glVertex2f(0.62, -0.493);
    glVertex2f(0.6, -0.48);
    glVertex2f(0.605, -0.5);
    glVertex2f(0.59, -0.51);
    glVertex2f(0.61, -0.51);
    glVertex2f(0.62, -0.53);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.71, -0.28);
    glVertex2f(0.73, -0.28);
    glVertex2f(0.715, -0.27);
    glVertex2f(0.72, -0.25);
    glVertex2f(0.7, -0.263);
    glVertex2f(0.68, -0.25);
    glVertex2f(0.685, -0.27);
    glVertex2f(0.67, -0.28);
    glVertex2f(0.69, -0.28);
    glVertex2f(0.7, -0.3);
    glEnd();


    //White star
    glLineWidth(1);
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.71, -0.78);
    glVertex2f(0.73, -0.78);
    glVertex2f(0.715, -0.77);
    glVertex2f(0.72, -0.75);
    glVertex2f(0.7, -0.763);
    glVertex2f(0.68, -0.75);
    glVertex2f(0.685, -0.77);
    glVertex2f(0.67, -0.78);
    glVertex2f(0.69, -0.78);
    glVertex2f(0.7, -0.8);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.79, -0.51);
    glVertex2f(0.81, -0.51);
    glVertex2f(0.795, -0.5);
    glVertex2f(0.8, -0.48);
    glVertex2f(0.78, -0.493);
    glVertex2f(0.76, -0.48);
    glVertex2f(0.765, -0.5);
    glVertex2f(0.75, -0.51);
    glVertex2f(0.77, -0.51);
    glVertex2f(0.78, -0.53);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.63, -0.51);
    glVertex2f(0.65, -0.51);
    glVertex2f(0.635, -0.50);
    glVertex2f(0.64, -0.48);
    glVertex2f(0.62, -0.493);
    glVertex2f(0.60, -0.48);
    glVertex2f(0.605, -0.50);
    glVertex2f(0.59, -0.51);
    glVertex2f(0.61, -0.51);
    glVertex2f(0.62, -0.53);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.71, -0.28);
    glVertex2f(0.73, -0.28);
    glVertex2f(0.715, -0.27);
    glVertex2f(0.72, -0.25);
    glVertex2f(0.7, -0.263);
    glVertex2f(0.68, -0.25);
    glVertex2f(0.685, -0.27);
    glVertex2f(0.67, -0.28);
    glVertex2f(0.69, -0.28);
    glVertex2f(0.7, -0.3);
    glEnd();

    glFlush();
}


int main(int argc, char** argv){

    glutInit(&argc, argv);
    glutInitWindowSize(720, 480);
    glutInitWindowPosition(800, 50);
    glutCreateWindow("Flags");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
