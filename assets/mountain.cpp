void drawMountain(int r1, int g1, int b1, int r2, int g2, int b2)
{
    //mountain 1
    glBegin(GL_POLYGON);
    glColor3ub(r1, g1, b1);
	glVertex2f(-300, 50);
	glVertex2f(-300, 150);
	glVertex2f(-225, 50);
	glEnd();

	//mountain 2
	glBegin(GL_POLYGON);
	glColor3ub(r2, g2, b2);
	glVertex2f(-300, 50);
	glVertex2f(-225, 170);
	glVertex2f(-150, 50);
	glEnd();

	//mountain 4
	glBegin(GL_POLYGON);
	glColor3ub(r2, g2, b2);
	glVertex2f(-150, 50);
	glVertex2f(-50, 170);
	glVertex2f(50, 50);
	glEnd();

	//mountain 3
	glBegin(GL_POLYGON);
	glColor3ub(r1, g1, b1);
	glVertex2f(-225, 50);
	glVertex2f(-140, 200);
	glVertex2f(-50, 50);
	glEnd();

	//mountain 5
	glBegin(GL_POLYGON);
	glColor3ub(r1, g1, b1);
	glVertex2f(-30, 50);
	glVertex2f(60, 170);
	glVertex2f(150, 50);
	glEnd();

	//mountain 7
	glBegin(GL_POLYGON);
	glColor3ub(r1, g1, b1);
	glVertex2f(180, 50);
	glVertex2f(240, 170);
	glVertex2f(300, 50);
	glEnd();

	//mountain 6
	glBegin(GL_POLYGON);
	glColor3ub(r2, g2, b2);
	glVertex2f(70, 50);
	glVertex2f(160, 170);
	glVertex2f(250, 50);
	glEnd();

	//mountain 8
	glBegin(GL_POLYGON);
	glColor3ub(r2, g2, b2);
	glVertex2f(250, 50);
	glVertex2f(300, 170);
	glVertex2f(300, 50);
	glEnd();
	glFlush();
}
