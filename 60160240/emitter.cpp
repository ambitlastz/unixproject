// 60160240 chonpisit seangwitthayanon
#include <iostream>
#include <cmath>
#include <cstring>
#include "emitter.hpp"
void emit(std::string msg, double v){
 double newv=round(v);

 std::cout << std::fixed << v << " becomes " << newv << ": " << msg << std::endl ;
 fflush(stdout);
 return;
}
