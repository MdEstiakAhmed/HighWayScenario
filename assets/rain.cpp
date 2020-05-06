int x,y;
float wx,wy;

void rain()
{
    for(int i=1;i<=1000;i++)
    {
        x=rand(),y=rand();
        x%=1500; y%=1500;
        glBegin(GL_LINES);
        glLineWidth(5);
        glColor3b(1,1,1);
        glVertex2d(x,y);
        glVertex2d(x+5,y+5);
        glEnd();
    }
}
void drawRain()
{
    wx -= 0.5;
    wy -= 0.5;
    if(wx == -600 || wy == -600)
    {
        wx = 6;
        wy = 300;
    }
    glPushMatrix();
    glTranslatef(wx, wy, 0);
    rain();
    glPopMatrix();
}
