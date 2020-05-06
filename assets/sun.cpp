void drawSun()
{
    float angle;
    const double PI = 3.14;
	glBegin(GL_POLYGON);
	glColor3ub(255, 234, 79);
	for(int d = 0; d < 360; d++)
    {
		angle = (2*d*PI)/180;
		glVertex2f(200+25*cos(angle), 250+40*sin(angle));
	}
	glEnd();
    glFlush();
}

void drawEveningSun()
{
    float angle;
    const double PI = 3.14;
	glBegin(GL_POLYGON);
	glColor3ub(255, 166, 33);
	for(int d = 0; d < 360; d++)
    {
		angle = (2*d*PI)/180;
		glVertex2f(200+25*cos(angle), 250+40*sin(angle));
	}
	glEnd();
    glFlush();
}
