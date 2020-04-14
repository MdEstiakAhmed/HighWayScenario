void daySky()
{
    glBegin(GL_QUADS);
	glColor3ub(176, 206, 255);
	glVertex2f(300, 300);
	glVertex2f(-300, 300);
	glVertex2f(-300, 100);
	glVertex2f(300, 100);
	glEnd();
    glFlush();
}

void nightSky()
{
    glBegin(GL_QUADS);
	glColor3ub(0, 30, 79);
	glVertex2f(300, 300);
	glVertex2f(-300, 300);
	glVertex2f(-300, 100);
	glVertex2f(300, 100);
	glEnd();
    glFlush();
}
