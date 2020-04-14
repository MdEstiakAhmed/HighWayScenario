#include "main.h"
int status = 1;

void day()
{
    daySky();
	drawSun();
	drawMountain(50, 168, 82, 50, 191, 88);
}

void night()
{
    nightSky();
    drawMoon();
    drawStar();
	drawMountain(48, 105, 63, 59, 130, 77);
}



void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	drawRoad();
	drawVillage();

    if(status==1)
    {
        day();
    }
    else if(status==2)
    {
        night();
    }
    showCloud();
    showWindMill();
    glutSwapBuffers();
}

void key(unsigned char key, int x, int y)
{
    if(key == 'd')
    {
        status=1;
    }
    else if(key == 'n')
    {
        status=2;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInit(&argc, argv);
    glutInitWindowSize(1300, 700);
    glutInitWindowPosition(0,0);
    glutCreateWindow("");
    gluOrtho2D(-300, 300, -300, 300);
    glutDisplayFunc(display);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable( GL_BLEND );
    glutKeyboardFunc(key);
    cloudAnimationTimer(0);
    doFrame(0);
    glutMainLoop();
    return 0;
}
