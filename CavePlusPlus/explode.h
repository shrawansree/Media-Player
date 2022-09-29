#ifndef EXPLODE_H
#define EXPLODE_H

#include "coin.h"
#include "command.h"
#include "mushroom.h"
#include "rock.h"
#include "bomb.h"
#include <iostream>

using namespace std;

class Explode : public Command {
public:

    Explode() : Command("explode"){};

    void reset(int& iniX, int& iniY, int& x, int& y, bool& chain){
        x = iniX;
        y = iniY;
        chain = true;
    }

    void chain(Cave& c, int x, int y, bool& boom){
        int initialX = x;
        int initialY = y;

        detonate(c, x, y, boom);
        reset(initialX,initialY,x,y,boom);

        x += 1;
        detonate(c, x, y, boom);
        if(boom && x < c.getWidth()-1){
            chain(c,x,y,boom);
        }
        reset(initialX,initialY,x,y,boom);

        x -= 1;
        detonate(c, x, y, boom);
        if(boom && x >= 0){
            chain(c,x,y,boom);
        }
        reset(initialX,initialY,x,y,boom);

        y += 1;
        detonate(c, x, y, boom);
        if(boom && y < c.getHeight()-1){
            chain(c,x,y,boom);
        }
        reset(initialX,initialY,x,y,boom);

        y -= 1;
        detonate(c, x, y, boom);
        if(boom && y >= 0){
            chain(c,x,y,boom);
        }
        reset(initialX,initialY,x,y,boom);


    }

    void detonate(Cave& c, int& x, int& y, bool& chain){

        Location* point = c.getMap()[x][y];
        int count = 0;
        for(Thing* t : *point->getThings()){
            if(t->getName().compare("bomb") == 0){
                for(Thing* found : *point->getThings()){
                    if(found->getName().compare("tom") != 0){
                       point->remove(found);
                       count++;
                    }
                }

            }
            else{
                continue;
            }
        }

        if(count > 0)chain = true;
        else chain = false;
    }


    void fire(Cave& c, string userCommand) {

        if(userCommand.compare("explode")==0){}

        int tomX = c.getTom()->getX();
        int tomY = c.getTom()->getY();
        bool boom = true;

        chain(c,tomX,tomY,boom);

    }


};



#endif // EXPLODE_H
