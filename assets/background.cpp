void dayBackgroundColor()
{

	glLineWidth(1.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.4f, 0.0f); // Red

	glVertex2f(-0.5f, 0.5f);    // x, y
	glVertex2f(-0.5f, -0.5f);    // x, y
	glVertex2f(0.5f, -0.5f);    // x, y
	glVertex2f(0.5f, 0.5f);    // x, y

	glEnd();

    glFlush();
}

void nightBackgroundColor()
{
            // Clear the color buffer (background)
	glLineWidth(1.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.4f, 0.0f); // Red

	glVertex2f(-0.5f, 0.5f);    // x, y
	glVertex2f(-0.5f, -0.5f);    // x, y
	glVertex2f(0.5f, -0.5f);    // x, y
	glVertex2f(0.5f, 0.5f);    // x, y

	glEnd();

    glFlush();
}
