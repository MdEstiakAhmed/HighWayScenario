void drawMoon()
{
    float angle;
    const double PI = 3.14;
	glBegin(GL_POLYGON);
	glColor3ub(242, 242, 242);
	for(int d = 0; d < 360; d++)
    {
		angle = (2*d*PI)/180;
		glVertex2f(-200+25*cos(angle), 250+40*sin(angle));
	}
	glEnd();
    glFlush();
}
