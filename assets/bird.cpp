int birdFrameNumber = 0;
void drawBird()
{
    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
    glVertex2f(103,202);
    glVertex2f(100,200);
    glVertex2f(97,202);
	glVertex2f(100,198);
    glEnd();
}

void showDird()
{
    int xPos = 0;
    for(int i=0; i<3; i++)
    {
        glPushMatrix();
        glTranslatef(xPos, 0, 0);
        glTranslated(-10+birdFrameNumber,30,0);
        drawBird();
        glPopMatrix();
        xPos=xPos+10;
    }
    xPos = 5;
    for(int i=0; i<2; i++)
    {
        glPushMatrix();
        glTranslatef(xPos, -10, 0);
        glTranslated(-10+birdFrameNumber,30,0);
        drawBird();
        glPopMatrix();
        xPos=xPos+10;
    }

    xPos = -70;
    for(int i=0; i<3; i++)
    {
        glPushMatrix();
        glTranslatef(xPos, -30, 0);
        glTranslated(-10+birdFrameNumber,30,0);
        drawBird();
        glPopMatrix();
        xPos=xPos+10;
    }
    xPos = -65;
    for(int i=0; i<2; i++)
    {
        glPushMatrix();
        glTranslatef(xPos, -40, 0);
        glTranslated(-10+birdFrameNumber,30,0);
        drawBird();
        glPopMatrix();
        xPos=xPos+10;
    }
}

void birdFrame(int v)
{
    birdFrameNumber++;
    if(birdFrameNumber > 310)
    {
        birdFrameNumber = -300;
    }
    glutPostRedisplay();
    glutTimerFunc(50,birdFrame,0);
}
