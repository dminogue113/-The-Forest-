#include <Tile.h>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace sf;

Rect<int> pos;
string ID;
bool isWalkable;
int type;

Tile::Tile()
{
    Rect<int> pos(0,0,63,63);
    isWalkable = false;
    ID = "BlankTile";
}
Tile::Tile(char a)
{
    //set name
    switch(a)
    {
    case '.':
        ID = "OOB";
        pos = Rect<int>(0,0,63,63);
        isWalkable = false;
        type = 0;
        break;
    case '#':
        ID = "TestTile";
        pos = Rect<int>(63,0,63,63);
        isWalkable = true;
        type = 1;
        break;
    default:
        cout<<"done goofed";
        break;
    }
}

int Tile::getType()
{
    return type;
}

string Tile::getName()
{
    return ID;
}

bool Tile::setPos(int x, int y)
{
    Rect<int> a(x,y,63,63);
    pos = a;
    return true;
}

Tile::~Tile()
{
    //dtor
}
