#ifndef FLUID_H_
#define FLUID_H_

#include <iostream>
#include "config.h"
#include <unordered_map>
#include <vector>
#include <cmath>

struct pairHash{
    std::size_t operator()(const std::pair<int, int>& p) const {
        std::size_t h1 = std::hash<int>()(p.first);
        std::size_t h2 = std::hash<int>()(p.second);
        return h1 ^ (h2 << 1);
    }
};

void findNeighbors(std::vector<float>& centers, std::unordered_map<std::pair<int, int >, std::vector<int>, pairHash>& grid, int numCircles);

#endif
