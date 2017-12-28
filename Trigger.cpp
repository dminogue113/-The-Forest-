#include <Trigger.h>
#include <iostream>
#include <PlayerCharacter.h>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
int proc;
string nam;
char typ;
Trigger::Trigger()
{
    nam = "BlankTrigger";
    proc = 0;
    typ = ' ';
}
Trigger::Trigger(char a)
{
    switch(a)
    {
        case '.':
            nam = "OOB";
            proc = 0;
            break;
        case '#':
            nam = "TestTrigger";
            proc = 100;
            break;
    }
    typ = a;
}
void Trigger::enter(PlayerCharacter (&party)[4], int ch, sf::RenderWindow &window)
{
    if(ch<proc)
    {
        Entity enemy[6];
        switch(typ)
        {
            case ' ':
                cout<<"ok no";
                break;
            case '.':
                cout<<"What";
                break;
            case '#':
                cout<<"Fight";
                fight(party, window, enemy);
                break;
            default:
                cout<<"what";
                break;
        }
    }
}
void Trigger::fight(PlayerCharacter (&party)[4], sf::RenderWindow &window, Entity enemy[6])
{
    Texture a;
    a.loadFromFile("Background.png");
    window.draw(Sprite(a));
    Sprite epos[6];
    epos[0] = enemy[0].getSprite();
    epos[1] = enemy[1].getSprite();
    epos[2] = enemy[2].getSprite();
    epos[3] = enemy[3].getSprite();
    epos[4] = enemy[4].getSprite();
    epos[5] = enemy[5].getSprite();
    Sprite ppos[6];
    ppos[0] = party[0].getSprite();
    ppos[1] = party[1].getSprite();
    ppos[2] = party[2].getSprite();
    ppos[3] = party[3].getSprite();
    int x = 63; int y = 63;
    for(int i=0;i<6;i++)
    {
        epos[i].setPosition(x,y);
        if(i<4)
        {
            ppos[i].setPosition(x+315,y);
        }
        if(i%2==0)
        {
            x+=126;
        } else
        {
            y+=126;
            x=63;
        }
    }
    for(Sprite a:epos)
    {
        window.draw(a);
    }
    for(Sprite a:ppos)
    {
        window.draw(a);
    }
    window.display();
    window.clear();
    return;
}




void Trigger::enter(PlayerCharacter (&party)[6], int ch, sf::RenderWindow &window)
{

}
