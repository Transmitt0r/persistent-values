//
// Created by Lukas Grotz on 03.11.17.
//

#ifndef PERSISTENTE_WERTE_PERSISTENT_H
#define PERSISTENTE_WERTE_PERSISTENT_H

#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>

template <class type>
class persistent {
private:
    std::string dateipfad;
    type wert;
    char * buffer;
    int length;
public:
    persistent(std::string dateipfad_){
        dateipfad = dateipfad_;
        if (std::ifstream(dateipfad, std::ios::in | std::ios::binary)) {
            std::ifstream infile;
            infile.open(dateipfad, std::ios::in | std::ios::binary);
            infile.seekg(0, infile.end);
            length = infile.tellg();
            infile.seekg(0, infile.beg);
            buffer = new char [length];
            infile.read(buffer, length);
            infile.close();
        } else {
            std::ofstream outfile;
            outfile.open(dateipfad, std::ios::out | std::ios::binary);
            outfile.close();
        }
    };
    type operator=(type wert_){
        wert = wert_;
        std::ofstream outfile;
        outfile.open(dateipfad, std::ios::out | std::ofstream::trunc);
        outfile << wert;
        outfile.close();
        return wert;
    };
    ~persistent(void){
    }
};

#endif //PERSISTENTE_WERTE_PERSISTENT_H
