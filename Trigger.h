#ifndef TRIGGER_H
#define TRIGGER_H
#include <string>
#include <PlayerCharacter.h>
#include <SFML/Graphics.hpp>
#include <Entity.h>

class Trigger
{
    public:
        Trigger();
        Trigger(char a);
        void enter(PlayerCharacter (&party)[4], int ch, sf::RenderWindow &window);
        void fight(PlayerCharacter (&party)[4], sf::RenderWindow &window, Entity enemy[6]);

        void enter(PlayerCharacter (&a)[6], int ch, sf::RenderWindow &window);

    protected:

    private:
        std::string nam;
        int proc;
        char typ;

};

#endif // TRIGGER_H
