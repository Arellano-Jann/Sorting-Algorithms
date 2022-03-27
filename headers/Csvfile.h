#pragma once
#define CSVFILE_H

#include <iostream>
#include <fstream>

// credit to https://gist.github.com/rudolfovich/f250900f1a833e715260a66c87369d15

class Csvfile;
inline static Csvfile& endrow(Csvfile& file); // inline function which can be used in this file only.
inline static Csvfile& flush(Csvfile& file);

class Csvfile{
    std::ofstream file;
    const std::string separator;
public:
    Csvfile(const std::string filename, const std::string separator = ",")
        : file()
        , separator(separator)
    {
        file.exceptions(std::ios::failbit | std::ios::badbit);
        file.open(filename);
    }

    ~Csvfile(){
        flush();
        file.close();
    }

    void flush();
    void endrow();
    Csvfile& operator << (Csvfile& (* val)(Csvfile&));
    Csvfile& operator << (const char * val);
    Csvfile& operator << (const std::string & val);
    template<typename T>
    Csvfile& operator << (const T& val){
	file << val << separator;
	return *this;
    }
};


inline static Csvfile& endrow(Csvfile& file){
    file.endrow();
    return file;
}

inline static Csvfile& flush(Csvfile& file){
    file.flush();
    return file;
}