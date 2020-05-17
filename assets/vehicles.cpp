const double PI = 3.141592654;
int carFrameNumber = 0;

void drawDisk(double radius)
{
	int d;
	glBegin(GL_POLYGON);
	for (d = 0; d < 32; d++) {
		double angle = 2*PI/32 * d;
		glVertex2d( radius*cos(angle), radius*sin(angle));
	}
	glEnd();
}

void drawWheel()
{
    int i;
	glColor3f(0,0,0);
	drawDisk(1);
	glColor3f(0.75f, 0.75f, 0.75f);
	drawDisk(0.8);
	glColor3f(0,0,0);
	drawDisk(0.2);
	glRotatef(carFrameNumber*20,0,0,1);
	glBegin(GL_LINES);
	for (i = 0; i < 15; i++) {
		glVertex2f(0,0);
		glVertex2d(cos(i*2*PI/7), sin(i*2*PI/7));
	}
	glEnd();
}

void drawCar(int r, int g, int b)
{
	glPushMatrix();
	glTranslatef(-1.5f, -0.1f, 0);
	glScalef(0.5f,0.5f,1);
	drawWheel();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(1.5f, -0.1f, 0);
	glScalef(0.5f,0.5f,1);
	drawWheel();
	glPopMatrix();

	// car structure
	glBegin(GL_POLYGON);
	glColor3ub(r, g, b);
	glVertex2f(-3.0f,0);    //1
	glVertex2f(3.0f,0);     //2
	glVertex2f(3.0f,1.5f);  //3
	glVertex2f(2.3f,1.5f);  //4
	glVertex2f(1.7f,2.5f);  //5
	glVertex2f(-1.7f,2.5f); //6
	glVertex2f(-2.3f,1.5f); //7
	glVertex2f(-3.0f,1.5f); //8
	glEnd();

	// first window
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(2, 1.5f);
	glVertex2f(1.5f,2.2f);
	glVertex2f(0.3f,2.2f);
	glVertex2f(0.3f,1.5f);
	glEnd();

	// second window
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(-2, 1.5f);
	glVertex2f(-1.5f,2.2f);
	glVertex2f(-0.3f,2.2f);
	glVertex2f(-0.3f,1.5f);
	glEnd();
}

void drawBus(int r, int g, int b)
{
	glPushMatrix();
	glTranslatef(-1.5f, -0.1f, 0);
	glScalef(0.5f,0.5f,1);
	drawWheel();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(1.5f, -0.1f, 0);
	glScalef(0.5f,0.5f,1);
	drawWheel();
	glPopMatrix();

	// car structure
	glBegin(GL_POLYGON);
	glColor3ub(r, g, b);
	glVertex2f(-3.5f,0);    //1
	glVertex2f(3.5f,0);     //2
	glVertex2f(3.5f,4);  //3
	glVertex2f(-3.5,4);  //4
	glEnd();

	// first window
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(-3.0f,3.0f);
	glVertex2f(-3.0f,2.0f);
	glVertex2f(-2.0f,2.0f);
	glVertex2f(-2.0f,3.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(-1.5f,3.0f);
	glVertex2f(-1.5f,2.0f);
	glVertex2f(-0.5f,2.0f);
	glVertex2f(-0.5f,3.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(0.0f,3.0f);
	glVertex2f(0.0f,2.0f);
	glVertex2f(1.0f,2.0f);
	glVertex2f(1.0f,3.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(1.5f,3.0f);
	glVertex2f(1.5f,2.0f);
	glVertex2f(2.5f,2.0f);
	glVertex2f(2.5f,3.0f);
	glEnd();

}

void drawVehicles()
{
    // white
    glPushMatrix();
	glTranslatef(100, -250, 0);
	glTranslated(300-carFrameNumber,30,0);
	glScaled(18, 18,1);
	drawCar(252, 252, 252);
	glPopMatrix();

	// blue
	glPushMatrix();
	glTranslatef(300, -250, 0);
	glTranslated(-50-carFrameNumber,30,0);
	glScaled(18, 18,1);
	drawCar(8, 16, 64);
	glPopMatrix();

	// green
	glPushMatrix();
	glTranslatef(-300, -260, 0);
	glTranslated(300-carFrameNumber,30,0);
	glScaled(18, 18,1);
	drawBus(0, 92, 49);
	glPopMatrix();

	// ash
    glPushMatrix();
	glTranslatef(-300, -300, 0);
	glTranslated(-50+carFrameNumber,30,0);
	glScaled(18, 18,1);
	drawCar(64, 64, 64);
	glPopMatrix();

	// red
	glPushMatrix();
	glTranslatef(100, -300, 0);
	glTranslated(0+carFrameNumber,30,0);
	glScaled(18, 18,1);
	drawCar(255, 54, 54);
	glPopMatrix();

	// blue
	glPushMatrix();
	glTranslatef(250, -300, 0);
	glTranslated(-300+carFrameNumber,30,0);
	glScaled(18, 18,1);
	drawBus(138, 154, 255);
	glPopMatrix();
}

void carFrame(int v)
{
    carFrameNumber++;
    if(carFrameNumber > 700)
    {
        carFrameNumber = -300;
    }
    glutPostRedisplay();
    glutTimerFunc(10,carFrame,0);
}
