#ifndef ENTITY_H
#define ENTITY_H
#include <SFML/Graphics.hpp>
#include <string>


class Entity
{
    public:
        Entity();
        virtual ~Entity();
        void init();
        Entity(char a);
        sf::Sprite getSprite();
        bool isAlive;

    protected:
        std::string name;
        char Type;
        double Str,Int,Cha,End,Agl,Luk;
        sf::Sprite sprite;

    private:
};

#endif // ENTITY_H
