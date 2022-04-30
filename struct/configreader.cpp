#include "configreader.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void Config::loadConfig(std::string filename) {
    std::ifstream fin(filename);
    std::string line;
    while (std::getline(fin, line)) {
        std::istringstream sin(line.substr(line.find("=") + 1));
        if (line.find("path") != -1)
            sin >> /*config.*/path;
        else if (line.find("str") != -1)
            sin >> /*config.*/str;
        else if (line.find("flt") != -1)
            sin >> /*config.*/flt;
    }
}