#include <Entity.h>
#include <string>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;
string name;
char Type;
double Str,Int,Cha,End,Agl,Luk;
Sprite sprite;
bool isAlive = true;
Entity::Entity()
{
   Texture tem;
   if(!tem.loadFromFile("TestEnemy.png")){cout<<'y';};
   Sprite a(tem);
   RenderTexture rtex;
   rtex.create(63,63);
   rtex.draw(a);
   rtex.display();
   sprite = Sprite(rtex.getTexture());
}

Entity::Entity(char a)
{

}

Sprite Entity::getSprite()
{
    return sprite;
}

Entity::~Entity()
{
    //dtor
}
