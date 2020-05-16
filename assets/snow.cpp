int snowX,snowY;
float snowWX,snowWY;

void snow()
{
    for(int i=1;i<=1000;i++)
    {
        snowX=rand(),snowY=rand();
        snowX%=2000; snowY%=2000;
        glColor3f(1,1,1);
        glBegin(GL_LINES);
        glLineWidth(2);
        glVertex2d(snowX,snowY);
        glVertex2d(snowX+2,snowY);
        glEnd();
    }
}
void drawSnow()
{
    snowWX -= 0.5;
    snowWY -= 0.5;
    if(snowWX == -600 || snowWY == -600)
    {
        snowWX = 6;
        snowWY = 300;
    }
    glPushMatrix();
    glTranslatef(snowWX, snowWY, 0);
    snow();
    glPopMatrix();
}
