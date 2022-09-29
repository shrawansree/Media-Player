#ifndef THROW_H
#define THROW_H

#include "coin.h"
#include "command.h"
#include "mushroom.h"
#include "rock.h"
#include "bomb.h"
#include <iostream>

using namespace std;

class Throw : public Command {
public:

    Throw() : Command("throw") {};

    void throwDirection(string s, int &x, int& y);

    void fire(Cave& c, string userCommand) {

        string type = head(tail(userCommand));
        string dir = tail(tail(userCommand));

        int throwX = 0;
        int throwY = 0;
        throwDirection(dir,throwX,throwY);

        Location* loc = c.getMap()
                [c.getTom()->getX()+throwX]
                [c.getTom()->getY()+throwY];



        if(loc->isBlocking()){
            return;
        }
        else{
            if (type.compare("coin")==0)
                loc -> add(new Coin());
            else if (type.compare("mushroom") ==0)
                loc -> add(new Mushroom());
            else if (type.compare("bomb") ==0)
                loc -> add(new Bomb());
            else
                return;

        }
    }

};



#endif // THROW_H
