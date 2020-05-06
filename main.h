#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <iostream>

#include "assets/sky.cpp"
#include "assets/sun.cpp"
#include "assets/moon.cpp"
#include "assets/cloud.cpp"
#include "assets/star.cpp"
#include "assets/road.cpp"
#include "assets/village.cpp"
#include "assets/mountain.cpp"
#include "assets/windmill.cpp"
#include "assets/vehicles.cpp"/
#include "assets/rain.cpp"

#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

using namespace std;

void drawRain();

void daySky();
void nightSky();
void eveningSky();

void drawSun();
void drawEveningSun();

void drawMoon();

void drawStar();
void cloudAnimationTimer(int value);

void drawCloud();

void drawRoad();

void drawVillage();

void drawMountain(int r, int g, int b, int r2, int g2, int b3);

void showWindMill();

void drawVehicles();

#endif // MAIN_H_INCLUDED
