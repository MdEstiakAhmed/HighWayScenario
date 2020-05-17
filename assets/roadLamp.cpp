void drawRoadLamp(int light)
{
    int r,g,b;
    if(light==1)
    {
        r=194;
        g=194;
        b=194;
    }
    else if(light==2 || light==3)
    {
        r=255;
        g=255;
        b=0;
    }
    // lamp stand
    glBegin(GL_POLYGON);
	glColor3ub(46, 46, 46);
    glVertex2f(-290, -185);
    glVertex2f(-285, -185);
    glVertex2f(-285, -110);
	glVertex2f(-290, -110);
    glEnd();

    // lamp light
    glBegin(GL_POLYGON);
	glColor3ub(r, g, b);
    glVertex2f(-275, -110);
    glVertex2f(-285, -90);
    glVertex2f(-290, -90);
	glVertex2f(-300, -110);
    glEnd();
}

void showLampUp(int lampStatus)
{
    int xPos = 0;
    for(int i=0; i<8; i++)
    {
        glPushMatrix();
        glTranslatef(xPos, 0, 0);
        drawRoadLamp(lampStatus);
        glPopMatrix();
        xPos=xPos+80;
    }
}

void showLampDown(int lampStatus)
{
    int xPos = 0;
    for(int i=0; i<8; i++)
    {
        glPushMatrix();
        glTranslatef(xPos, -110, 0);
        drawRoadLamp(lampStatus);
        glPopMatrix();
        xPos=xPos+80;
    }
}
