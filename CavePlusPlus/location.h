#ifndef LOCATION_H
#define LOCATION_H


#include <vector>

#include "thing.h"

class Location
{
public:
    Location() { ++count; }
    Location(const Location &old_location);
    Location& operator = (const Location &old_location);
    ~Location() {
        for (auto t : things)
            delete(t);
        --count;
    }

    void add(Thing *t);
    void remove(Thing *t);
    char show();
    bool isBlocking();
    vector<Thing*>* getThings() { return &things; }
    static int count; // a count of the number of locations allocated/deleted

private:
    void deepCopy(const Location& obj);
    vector<Thing*> things;

};



#endif // LOCATION_H
