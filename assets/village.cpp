// estiak part
void drawHouse(int s)
{
    float r,g,b;
    if(s==1)
    {
        r=0;
        g=0;
        b=0;
    }
    else if(s==2 || s==3)
    {
        r=1;
        g=1;
        b=0.5;
    }

    float y=100;
    glBegin(GL_POLYGON);//ceiling
	glColor3ub(89,19,5);

	glVertex2f(280.0f, -150.0f+y);
    glVertex2f(270.0f, -100.0f+y);
	glVertex2f(210.0f, -100.0f+y);
	glVertex2f(200.0f,-150.0f+y);
    glEnd();

    glBegin(GL_POLYGON);//floor
	glColor3ub(181,147,25);
    glVertex2f(210.0f, -150.0f+y);
    glVertex2f(210.0f, -230.0f+y);
    glVertex2f(270.0f,-230.0f+y);
	glVertex2f(270.0f, -150.0f+y);
    glEnd();

    glBegin(GL_POLYGON);//door
    glColor3f(r,g,b);
    glVertex2f(230.0f, -230.0f+y);
    glVertex2f(250.0f, -230.0f+y);
    glVertex2f(250.0f,-190.0f+y);
	glVertex2f(230.0f, -190.0f+y);
    glEnd();

    glBegin(GL_POLYGON);//window
	glColor3f(r,g,b);
    glVertex2f(215.0f, -200.0f+y);
    glVertex2f(225.0f, -200.0f+y);
    glVertex2f(225.0f,-180.0f+y);
	glVertex2f(215.0f, -180.0f+y);
    glEnd();

    glBegin(GL_POLYGON);//window
	glColor3f(r,g,b);
    glVertex2f(255.0f, -200.0f+y);
    glVertex2f(265.0f, -200.0f+y);
	glVertex2f(265.0f,-180.0f+y);
	glVertex2f(255.0f, -180.0f+y);
    glEnd();
}



void drawVillage(int s)
{
    float y=100;
    float r,g,b;
    if(s==1)
    {
        r=0;
        g=0;
        b=0;
    }
    else if(s==2 || s==3)
    {
        r=1;
        g=1;
        b=0.5;
    }

    // background
    glBegin(GL_POLYGON);
	glColor3ub(28, 22, 13);
    glVertex2f(300, 100);
    glVertex2f(-300, 100);
    glVertex2f(-300, -200);
	glVertex2f(300, -200);
    glEnd();


    // big tree draw
    glBegin(GL_POLYGON);//T1
	glColor3ub(25,107,34);
	glVertex2f(190.0f, -120.0f+y);
	glVertex2f(200.0f, -120.0f+y);
	glVertex2f(200.0f, -150.0f+y);
	glVertex2f(210.0f,-100.0f+y);
	glVertex2f(220.0f, -100.0f+y);
	glVertex2f(205.0f,-50.0f+y);
	glVertex2f(190.0f, -120.0f+y);
	glVertex2f(200.0f, -120.0f+y);
	glEnd();

	glBegin(GL_POLYGON);//T2
	glColor3ub(25,107,34);
	glVertex2f(190.0f, -70.0f+y);
	glVertex2f(200.0f, -90.0f+y);
	glVertex2f(195.0f, -120.0f+y);
	glVertex2f(180.0f,-120.0f+y);
	glEnd();

	glBegin(GL_POLYGON);//(T3)
	glColor3ub(25,107,34);
	glVertex2f(180.0f,-120.0f+y);
	glVertex2f(185.0f,-100.0f+y);
	glVertex2f(165.0f, -50.0f+y);
	glVertex2f(150.0f, -120.0f+y);
	glEnd();


	// house drawing
    glBegin(GL_POLYGON);//ceiling
	glColor3ub(89,19,5);

	glVertex2f(280.0f, -150.0f+y);
    glVertex2f(270.0f, -100.0f+y);
	glVertex2f(210.0f, -100.0f+y);
	glVertex2f(200.0f,-150.0f+y);
    glEnd();

    glBegin(GL_POLYGON);//floor
	glColor3ub(181,147,25);
    glVertex2f(210.0f, -150.0f+y);
    glVertex2f(210.0f, -230.0f+y);
    glVertex2f(270.0f,-230.0f+y);
	glVertex2f(270.0f, -150.0f+y);
    glEnd();

    glBegin(GL_POLYGON);//door
    glColor3f(r,g,b);
    glVertex2f(230.0f, -230.0f+y);
    glVertex2f(250.0f, -230.0f+y);
    glVertex2f(250.0f,-190.0f+y);
	glVertex2f(230.0f, -190.0f+y);
    glEnd();

    glBegin(GL_POLYGON);//window
	glColor3f(r,g,b);
    glVertex2f(215.0f, -200.0f+y);
    glVertex2f(225.0f, -200.0f+y);
    glVertex2f(225.0f,-180.0f+y);
	glVertex2f(215.0f, -180.0f+y);
    glEnd();

    glBegin(GL_POLYGON);//window
	glColor3f(r,g,b);
    glVertex2f(255.0f, -200.0f+y);
    glVertex2f(265.0f, -200.0f+y);
	glVertex2f(265.0f,-180.0f+y);
	glVertex2f(255.0f, -180.0f+y);
    glEnd();


	//2nd Right house//

    glBegin(GL_POLYGON);// ceiling
	glColor3ub(89,19,5);
    glVertex2f(210.0f, -170.0f+y);
    glVertex2f(200.0f, -120.0f+y);
    glVertex2f(140.0f,-120.0f+y);
	glVertex2f(130.0f, -170.0f+y);
    glEnd();

    glBegin(GL_POLYGON);//floor
	glColor3ub(181,147,25);
    glVertex2f(200.0f, -250.0f+y);
    glVertex2f(200.0f, -170.0f+y);
    glVertex2f(140.0f,-170.0f+y);
	glVertex2f(140.0f, -250.0f+y);
	glEnd();

    glBegin(GL_POLYGON);//door
	glColor3f(r,g,b);
    glVertex2f(180.0f, -250.0f+y);
    glVertex2f(180.0f, -190.0f+y);
    glVertex2f(160.0f,-190.0f+y);
	glVertex2f(160.0f, -250.0f+y);
	glEnd();

	glBegin(GL_POLYGON);//window
	glColor3f(r,g,b);
    glVertex2f(145.0f, -220.0f+y);
    glVertex2f(155.0f, -220.0f+y);
    glVertex2f(155.0f,-200.0f+y);
	glVertex2f(145.0f, -200.0f+y);
	glEnd();

	glBegin(GL_POLYGON);// window
	glColor3f(r,g,b);
	glVertex2f(145.0f, -220.0f+y);
	glVertex2f(155.0f, -220.0f+y);
	glVertex2f(155.0f,-200.0f+y);
	glVertex2f(145.0f, -200.0f+y);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(r,g,b);
	glVertex2f(185.0f, -220.0f+y);
	glVertex2f(195.0f, -220.0f+y);
	glVertex2f(195.0f,-200.0f+y);
	glVertex2f(185.0f, -200.0f+y);
	glEnd();


	/////Left House///


	glBegin(GL_POLYGON);//ceiling
	glColor3ub(89,19,5);
	glVertex2f(-250.0f, -170.0f+y);
	glVertex2f(-170.0f, -170.0f+y);
	glVertex2f(-180.0f,-120.0f+y);
	glVertex2f(-240.0f,-120.0f+y);
	glEnd();

	glBegin(GL_POLYGON);//floor
	glColor3ub(181,147,25);
	glVertex2f(-240.0f, -170.0f+y);
	glVertex2f(-240.0f, -250.0f+y);
	glVertex2f(-180.0f,-250.0f+y);
	glVertex2f(-180.0f,-170.0f+y);
	glEnd();

	glBegin(GL_POLYGON);//window
	glColor3f(r,g,b);
	glVertex2f(-235.0f, -220.0f+y);
	glVertex2f(-225.0f, -220.0f+y);
	glVertex2f(-225.0f,-200.0f+y);
	glVertex2f(-235.0f,-200.0f+y);
	glEnd();

	glBegin(GL_POLYGON);//door
	glColor3f(r,g,b);
	glVertex2f(-220.0f, -250.0f+y);
	glVertex2f(-200.0f, -250.0f+y);
	glVertex2f(-200.0f,-190.0f+y);
	glVertex2f(-220.0f,-190.0f+y);
	glEnd();

	glBegin(GL_POLYGON);//window
	glColor3f(r,g,b);
	glVertex2f(-195.0f, -220.0f+y);
	glVertex2f(-185.0f, -220.0f+y);
	glVertex2f(-185.0f,-200.0f+y);
	glVertex2f(-195.0f,-200.0f+y);
	glEnd();

	//2ND LEFT//

	glBegin(GL_POLYGON);//ceiling
	glColor3ub(89,19,5);
	glVertex2f(-140.0f, -150.0f+y);
	glVertex2f(-60.0f, -150.0f+y);
	glVertex2f(-70.0f,-100.0f+y);
	glVertex2f(-130.0f,-100.0f+y);
	glEnd();

	glBegin(GL_POLYGON);// floor
	glColor3ub(181,147,25);
	glVertex2f(-130.0f, -150.0f+y);
	glVertex2f(-130.0f, -230.0f+y);
	glVertex2f(-70.0f,-230.0f+y);
	glVertex2f(-70.0f,-150.0f+y);
	glEnd();

	glBegin(GL_POLYGON);//door
	glColor3f(r,g,b);
	glVertex2f(-125.0f, -200.0f+y);
	glVertex2f(-115.0f, -200.0f+y);
	glVertex2f(-115.0f,-180.0f+y);
	glVertex2f(-125.0f,-180.0f+y);
	glEnd();

	glBegin(GL_POLYGON);//window
	glColor3f(r,g,b);
	glVertex2f(-110.0f, -230.0f+y);
	glVertex2f(-90.0f, -230.0f+y);
	glVertex2f(-90.0f,-190.0f+y);
	glVertex2f(-110.0f,-190.0f+y);
	glEnd();

	glBegin(GL_POLYGON);//window
	glColor3f(r,g,b);
	glVertex2f(-85.0f, -200.0f+y);
	glVertex2f(-75.0f, -200.0f+y);
	glVertex2f(-75.0f,-180.0f+y);
	glVertex2f(-85.0f,-180.0f+y);
	glEnd();



	glBegin(GL_POLYGON);//FT1(BOTTOM)
	glColor3ub(80,49,22);
	glVertex2f(120.0f,-150.0f+y);
	glVertex2f(120.0f, -190.0f+y);
	glVertex2f(115.0f,-190.0f+y);
	glVertex2f(115.0f, -150.0f+y);
	glEnd();

	glBegin(GL_POLYGON);//FT1(TOP)
	glColor3ub(25,107,34);
	glVertex2f(105.0f,-150.0f+y);
	glVertex2f(130.0f, -150.0f+y);
	glVertex2f(117.5f,-115.0f+y);
	glEnd();

	glBegin(GL_POLYGON);//FT2(TOP)
	glColor3ub(25,107,34);
	glVertex2f(80.0f,-180.0f+y);
	glVertex2f(115.0f, -180.0f+y);
	glVertex2f(97.5f,-130.0f+y);
    glEnd();

    glBegin(GL_POLYGON);//FT2(BOTTOM)
	glColor3ub(80,49,22);
	glVertex2f(95.0f,-180.0f+y);
	glVertex2f(95.0f, -220.0f+y);
	glVertex2f(100.0f,-220.0f+y);
	glVertex2f(100.0f,-180.0f+y);
    glEnd();

    glBegin(GL_POLYGON);//FT3(TOP)
	glColor3ub(25,107,34);
    glVertex2f(60.0f,-200.0f+y);
	glVertex2f(95.0f, -200.0f+y);
	glVertex2f(72.5f,-150.0f+y);
    glEnd();

    glBegin(GL_POLYGON);//FT3(BOTTOM)
	glColor3ub(80,49,22);
	glVertex2f(75.0f,-200.0f+y);
	glVertex2f(75.0f, -240.0f+y);
	glVertex2f(80.0f,-240.0f+y);
	glVertex2f(80.0f,-200.0f+y);
    glEnd();

    glBegin(GL_POLYGON);//FT4(TOP)
	glColor3ub(25,107,34);
	glVertex2f(30.0f,-180.0f+y);
	glVertex2f(65.0f, -180.0f+y);
	glVertex2f(47.5f,-130.0f+y);
    glEnd();

    glBegin(GL_POLYGON);//FT4(BOTTOm)
	glColor3ub(80,49,22);
	glVertex2f(45.0f,-180.0f+y);
	glVertex2f(45.0f, -220.0f+y);
	glVertex2f(50.0f,-220.0f+y);
	glVertex2f(50.0f,-180.0f+y);
    glEnd();

    glBegin(GL_POLYGON);//FT7
	glColor3ub(25,107,34);
    glVertex2f(-230.0f,-20.0f);
	glVertex2f(-190.0f, -20.0f);
	glVertex2f(-210.0f,0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-210.0f, 20.0f);
	glVertex2f(-225.0f,-5.0f);
	glVertex2f(-195.0f,-5.0f);
    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(-223.0f, 15.0f);
	glVertex2f(-197.0f,15.0f);
	glVertex2f(-210.0f,35.0f);
    glEnd();

     glBegin(GL_POLYGON);//FT5
	glColor3ub(25,107,34);
    glVertex2f(-100.0f,20.0f);
	glVertex2f(-120.0f, 0.0f);
	glVertex2f(-80.0f,0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(25,107,34);
	glVertex2f(-125.0f, 15.0f);
	glVertex2f(-75.0f,15.0f);
	glVertex2f(-100.0f,40.0f);
    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(-120.0f, 35.0f);
	glVertex2f(-80.0f,35.0f);
	glVertex2f(-100.0f,55.0f);
    glEnd();

    glBegin(GL_POLYGON);//FT6
	glColor3ub(25,107,34);
    glVertex2f(-180.0f,-20.0f);
	glVertex2f(-135.0f, -20.0f);
	glVertex2f(-157.5f,0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(25,107,34);
	glVertex2f(-185.0f, -5.0f);
	glVertex2f(-130.0f,-5.0f);
	glVertex2f(-157.5f,20.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(25,107,34);
	glVertex2f(-175.0f, 15.0f);
	glVertex2f(-140.0f,15.0f);
	glVertex2f(-157.5f,40.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(25,107,34);
	glVertex2f(-175.0f, -35.0f);
	glVertex2f(-140.0f,-35.0f);
	glVertex2f(-157.5f,-15.0f);
    glEnd();

    glBegin(GL_POLYGON);//FT6(BOTTOM)
    glColor3ub(80,49,22);
	glVertex2f(-160.0f, -100.0f);
	glVertex2f(-155.0f,-100.0f);
	glVertex2f(-155.0f,-35.0f);
	glVertex2f(-160.0f,-35.0f);
    glEnd();

    glFlush();

    // estiak part start
    //draw house
    glPushMatrix();
    glTranslatef(-250, 30, 0);
    glScaled(0.9,0.9,1);
    drawHouse(s);
    glPopMatrix();

    //draw house
    glPushMatrix();
    glTranslatef(-148, 45, 0);
    glScaled(0.7,0.7,1);
    drawHouse(s);
    glPopMatrix();

    //draw house
    glPushMatrix();
    glTranslatef(-440, 10, 0);
    glScaled(0.7,0.7,1);
    drawHouse(s);
    glPopMatrix();
    // estiak part end
}


