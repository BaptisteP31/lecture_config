#include "configreader.h"
#include <iostream>

int main() {
    Config config;
    config.loadConfig("config.cfg");
    std::cout << config.path << '\n';
    std::cout << config.str << '\n';
    std::cout << config.flt << '\n';
}