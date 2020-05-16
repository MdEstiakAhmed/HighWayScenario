#include "main.h"
int status = 1;
int rainStatus = 0;
int cloudStatus = 1;
int snowStatus = 0;

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

void evening()
{
    eveningSky();
    drawEveningSun();
    drawMountain(50, 168, 82, 50, 191, 88);
}

void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	drawVillage();
	drawRoad();
	drawVehicles();

    if(status==1)
    {
        day();
    }
    else if(status==2)
    {
        night();
    }
    else if(status==3)
    {
        evening();
    }

    if(cloudStatus==1)
    {
        showCloud();
    }

    showWindMill();
    if(rainStatus==1)
    {
        drawRain();
    }
    if(snowStatus==1)
    {
        drawSnow();
    }

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
    else if(key == 'e')
    {
        status=3;
    }
    else if(key == 'r')
    {
        rainStatus = 1;
    }
    else if(key == 'R')
    {
        rainStatus = 0;
    }
    else if(key == 's')
    {
        snowStatus = 1;
    }
    else if(key == 'S')
    {
        snowStatus = 0;
    }
    else if(key == 'c')
    {
        cloudStatus = 1;
    }
    else if(key == 'C')
    {
        cloudStatus = 0;
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
    carFrame(0);
    glutMainLoop();
    return 0;
}
