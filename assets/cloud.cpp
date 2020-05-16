float cloudPosition = 0;
float speed = 5;
void cloudPart(float x, float y, float radius)
{
    int i;
    int triangleAmount = 100;
    double PI = 3.14;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();
    glFlush();
}

void drawCloud()
{
    glColor3ub(255,255,255);
    cloudPart(0,200,20);
    cloudPart(30,200,25);
    cloudPart(10,218,20);
    cloudPart(-20,204,15);
    cloudPart(40,220,17);
    cloudPart(49,205,13);
}

void showCloud()
{
    glPushMatrix();
    glTranslatef(140+cloudPosition,20,0);
    drawCloud();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20+cloudPosition,50,0);
    drawCloud();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-150+cloudPosition,30,0);
    drawCloud();
    glPopMatrix();
}

void cloudAnimationTimer(int value) {

    if(cloudPosition >300)
        cloudPosition = -300;

    cloudPosition += speed;

	glutPostRedisplay();

	glutTimerFunc(100, cloudAnimationTimer, 0);
}
