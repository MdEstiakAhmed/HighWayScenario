float planePos =180;
float planeSpeed = 0.2;

void planeTimer(int val)
{
    if(planePos < -300 )
    {
        planePos = 180;
    }

    planePos -= planeSpeed;

    glutPostRedisplay();

    glutTimerFunc(10, planeTimer, 0);
}

void drawPlane()
{


    //planeTimer(0);


    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex2f(0.0,0.0);
    glVertex2f(7,-6);
    glVertex2f(80,-6);
    glVertex2f(110,5);
    glVertex2f(108,7);
    glVertex2f(9,7);
    glVertex2f(0.0,0.0);

    glEnd();

    glColor3ub(255,230,0);

    glBegin(GL_POLYGON);

    glVertex2f(80,7);
    glVertex2f(100,7);
    glVertex2f(110,21);
    glVertex2f(100,21);
    glVertex2f(80,7);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(4,-3);
    glVertex2f(7,-6);
    glVertex2f(80,-6);
    glVertex2f(87,-3);
    glVertex2f(4,-3);

    glEnd();

    //glPushMatrix();
}
