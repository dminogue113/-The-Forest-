#ifndef PLAYERCHARACTER_H
#define PLAYERCHARACTER_H
#include <string>
#include <SFML/Graphics.hpp>
#include <Entity.h>

class PlayerCharacter : public Entity
{
    public:
        PlayerCharacter();
        PlayerCharacter(char lass, sf::Sprite a);
        void init();
        virtual ~PlayerCharacter();
        sf::Sprite getSprite();

    protected:

    private:
        char Class;
        int tml, tif;
        sf::Sprite sprite;
};

#endif // PLAYERCHARACTER_H
