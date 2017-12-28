#ifndef TILE_H
#define TILE_H
#include <SFML/Graphics.hpp>
#include <string>

class Tile
{
    public:
        Tile();
        Tile(char a);
        virtual ~Tile();
        bool isWalkable;
        bool setPos(int x, int y);
        sf::Rect<int> pos;
        std::string getName();
        int getType();

    protected:

    private:
        std::string ID;
        int type;
};

#endif // TILE_H
