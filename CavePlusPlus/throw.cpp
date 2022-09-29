
#include "throw.h"
#include "cave.h"

void Throw::throwDirection(string s, int &x, int& y){

    if(s.compare("north")==0) y=-1;
    if(s.compare("south")==0)y=1;
    if(s.compare("east")==0) x=1;
    if(s.compare("west")==0) x= -1;

}


