#ifndef GRAVITY_H_
#define GRAVITY_H_

#include <cmath>
#include <vector>
#include <iostream>
#include "config.h"

void gravity(std::vector<float>& centers, int numCircles, std::vector<float>& speeds, float timeDiff);
void isEdge(std::vector<float>& centers, int numCircles, std::vector<float>& speeds);
void ballCollisions(std::vector<float>& centers, int numCircles, std::vector<float>& speeds);
float getDistance(std::vector<float>& centers, int circle1, int circle2);
bool checkCollision(std::vector<float>& centers, int index1, int index2);
void resolveCollision(std::vector<float>& centers, int index1, int index2, std::vector<float>& speeds);

#endif
