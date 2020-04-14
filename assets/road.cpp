void drawRoad()
{
    float x=-300;
    glLineWidth(30);
	glBegin(GL_LINES);
	for(int i=0; i<12; i++)
    {
        if(i%2==0)
        {
            glColor3ub(255,255,255);
            glVertex2f(x, -300);
            glVertex2f(x+50, -300);
        }
        else
        {
            glColor3ub(0, 0, 0);
            glVertex2f(x, -300);
            glVertex2f(x+50, -300);
        }
        x=x+50;
    }
	glEnd();

    x=-300;
    glLineWidth(20);
	glBegin(GL_LINES);
	for(int i=0; i<12; i++)
    {
        if(i%2==0)
        {
            glColor3ub(255,255,255);
            glVertex2f(x, -190);
            glVertex2f(x+50, -190);
        }
        else
        {
            glColor3ub(0, 0, 0);
            glVertex2f(x, -190);
            glVertex2f(x+50, -190);
        }
        x=x+50;
    }
	glEnd();

	glLineWidth(500);
	glBegin(GL_QUADS);
	glColor3ub(130, 130, 129);
    glVertex2f(-300, -190);
    glVertex2f(-300, -290);
    glVertex2f(300, -290);
    glVertex2f(300, -190);
    glEnd();

    x=-300;
    glLineWidth(5);
	glBegin(GL_LINES);
	for(int i=0; i<12; i++)
    {
        if(i%2==0)
        {
            glColor3ub(130, 130, 129);
            glVertex2f(x, -240);
            glVertex2f(x+50, -240);
        }
        else
        {
            glColor3ub(255, 255, 255);
            glVertex2f(x, -240);
            glVertex2f(x+50, -240);
        }
        x=x+50;
    }
	glEnd();

	glFlush();

}
