#ifndef CONFIGREADER_H
#define CONFIGREADER_H

#include <string>

struct Config {
    std::string path;
    std::string str;
    double flt;
    void loadConfig(std::string filename);
};

#endif