#include "../headers/Csvfile.h"

void Csvfile::flush(){
	file.flush();
}

void Csvfile::endrow(){
	file << std::endl;
}

Csvfile& Csvfile::operator << (Csvfile& (* val)(Csvfile&)){
	return val(*this);
}

Csvfile& Csvfile::operator << (const char * val){
	file << '"' << val << '"' << separator;
	return *this;
}

Csvfile& Csvfile::operator << (const std::string & val){
	file << '"' << val << '"' << separator;
	return *this;
}

template<typename T>
Csvfile& Csvfile::operator << (const T& val){
	file << val << separator;
	return *this;
}