void drawStar()
{
    glPointSize(3);
	glBegin(GL_POINTS);
	glColor3ub(255,255,255);
	glVertex2f(-290,130);
	glVertex2f(-250,190);
	glVertex2f(-210,160);
	glVertex2f(-170,220);
	glVertex2f(-130,200);
	glVertex2f(-90,265);
	glVertex2f(-40,125);
	glVertex2f(0,210);
	glVertex2f(40,260);
	glVertex2f(90,170);
	glVertex2f(130,150);
	glVertex2f(170,200);
	glVertex2f(210,250);
	glVertex2f(250,180);
	glVertex2f(290,120);
	glEnd();
	glFlush();

}
