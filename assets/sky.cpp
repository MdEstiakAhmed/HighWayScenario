void daySky()
{
    glBegin(GL_QUADS);
	glColor3ub(204, 255, 250);
	glVertex2f(300, 300);
	glColor3ub(150, 178, 224);
	glVertex2f(-300, 300);
	glColor3ub(141, 169, 217);
	glVertex2f(-300, 100);
	glColor3ub(112, 210, 255);
	glVertex2f(300, 100);
	glEnd();
    glFlush();
}

void eveningSky()
{
    glBegin(GL_QUADS);
	glColor3ub(255, 220, 43);
	glVertex2f(300, 300);
	glColor3ub(255, 198, 13);
	glVertex2f(-300, 300);
	glColor3ub(255, 188, 33);
	glVertex2f(-300, 100);
	glColor3ub(255, 156, 51);
	glVertex2f(300, 100);
	glEnd();
    glFlush();
}

void nightSky()
{
    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(300, 300);
	glVertex2f(-300, 300);
	glVertex2f(-300, 100);
	glColor3ub(10, 0, 82);
	glVertex2f(300, 100);
	glEnd();
    glFlush();
}
