int frameNumber = 0;
void drawWindmill() {
	int i;
	glColor3f(0.8f, 0.8f, 0.9f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.5f, 0);
	glVertex2f(2.5f, 0);
	glVertex2f(2.5f, 150);
	glVertex2f(-2.5f, 150);
	glEnd();
	glTranslatef(0, 150, 0);
	glRotated(frameNumber * (180.0/46), 0, 0, 1);
	glColor3f(0.4f, 0.4f, 0.8f);
	for (i = 0; i < 3; i++) {
		glRotated(120, 0, 0, 1);
		glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(25, 5);
		glVertex2f(75,0);
		glVertex2f(25, -5);
		glEnd();
	}
}

void showWindMill()
{
    glPushMatrix();
	glTranslated(-200,50,0);
	glScaled(0.7,0.7,1);
	drawWindmill();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0,50,0);
	glScaled(0.7,0.7,1);
	drawWindmill();
	glPopMatrix();

	glPushMatrix();
	glTranslated(200,50,0);
	glScaled(0.7,0.7,1);
	drawWindmill();
	glPopMatrix();
}

void doFrame(int v) {
    frameNumber++;
    glutPostRedisplay();
    glutTimerFunc(30,doFrame,0);
}
