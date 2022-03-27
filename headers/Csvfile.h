// #pragma once
// #define CSVFILE_H
// #include <string>
// #include <iostream>
// #include <fstream>
// #include <sstream>

// class Csvfile;

// inline static Csvfile& endrow(Csvfile& file);
// inline static Csvfile& flush(Csvfile& file);

// class Csvfile
// {
//     std::ofstream fs_;
//     bool is_first_;
//     const std::string separator_;
//     const std::string escape_seq_;
//     const std::string special_chars_;
// public:
//     Csvfile(const std::string filename, const std::string separator = ",")
//         : fs_()
//         , is_first_(true)
//         , separator_(separator)
//         , escape_seq_("\"")
//         , special_chars_("\"")
//     {
//         fs_.exceptions(std::ios::failbit | std::ios::badbit);
//         fs_.open(filename);
//     }

//     ~Csvfile()
//     {
//         flush();
//         fs_.close();
//     }

//     void flush();

//     void endrow()
//     {
//         fs_ << std::endl;
//         is_first_ = true;
//     }

//     Csvfile& operator << ( Csvfile& (* val)(Csvfile&))
//     {
//         return val(*this);
//     }

//     Csvfile& operator << (const char * val)
//     {
//         return write(escape(val));
//     }

//     Csvfile& operator << (const std::string & val)
//     {
//         return write(escape(val));
//     }

//     template<typename T>
//     Csvfile& operator << (const T& val)
//     {
//         return write(val);
//     }

// private:
//     template<typename T>
//     Csvfile& write (const T& val)
//     {
//         if (!is_first_)
//         {
//             fs_ << separator_;
//         }
//         else
//         {
//             is_first_ = false;
//         }
//         fs_ << val;
//         return *this;
//     }

//     std::string escape(const std::string & val)
//     {
//         std::ostringstream result;
//         result << '"';
//         std::string::size_type to, from = 0u, len = val.length();
//         while (from < len &&
//                 std::string::npos != (to = val.find_first_of(special_chars_, from)))
//         {
//             result << val.substr(from, to - from) << escape_seq_ << val[to];
//             from = to + 1;
//         }
//         result << val.substr(from) << '"';
//         return result.str();
//     }
// };


// inline static Csvfile& endrow(Csvfile& file)
// {
//     file.endrow();
//     return file;
// }

// inline static Csvfile& flush(Csvfile& file)
// {
//     file.flush();
//     return file;
// }




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