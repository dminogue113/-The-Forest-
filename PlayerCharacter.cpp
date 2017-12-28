#include <PlayerCharacter.h>
#include <string>
#include <ctype.h>
#include <SFML/Graphics.hpp>
#include <Entity.h>
using namespace std;
using namespace sf;

char Class;
string Name = "";
int tml, tif,partysize;
bool isAlive = true;
PlayerCharacter::PlayerCharacter()
{
    Class = ' ';
    tif = 0;
    Str = 0; Int = 0; Cha = 0; End = 0; Agl = 0; Luk = 0; tml = 10000000;
    sprite = Sprite();
}

PlayerCharacter::PlayerCharacter(char lass, Sprite a)
{
    Class = toupper(lass);
    tif = 0;
    sprite = a;
    init();
}

void PlayerCharacter::init()
{
    partysize = 4;
    switch(int(Class))
    {
        case int('A'):
            Str = 10;
            Int = 1;
            Cha = 1;
            End = 8;
            Agl = 6;
            Luk = 0;
            tml = 0;
            break;
        case int('B'):
            Str = 2;
            Int = 10;
            Cha = 1;
            End = 8;
            Agl = 5;
            Luk = 0;
            tml = 260;
            break;
        case int('C'):
            Str = 10;
            Int = 1;
            Cha = 1;
            End = 9;
            Agl = 5;
            Luk = 0;
            tml = 0;
            break;
        case int('D'):
            Str = 2;
            Int = 10;
            Cha = 1;
            End = 8;
            Agl = 5;
            Luk = 0;
            tml = 0;
            break;
        case int('E'):
            Str = 2;
            Int = 10;
            Cha = 1;
            End = 8;
            Agl = 5;
            Luk = 0;
            tml = 416;
            break;
        case int('F'):
            Str = 2;
            Int = 10;
            Cha = 1;
            End = 8;
            Agl = 5;
            Luk = 0;
            tml = 260;
            break;
        case int('G'):
            Str = 2;
            Int = 10;
            Cha = 1;
            End = 8;
            Agl = 5;
            Luk = 0;
            tml = 260;
            break;
        case int('H'):
            Str = 2;
            Int = 10;
            Cha = 1;
            End = 8;
            Agl = 5;
            Luk = 0;
            tml = 312;
            break;
        case int('I'):
            Str = 2;
            Int = 10;
            Cha = 8;
            End = 3;
            Agl = 3;
            Luk = 0;
            tml = 260;
            break;
        case int('J'):
            Str = 2;
            Int = 10;
            Cha = 4;
            End = 5;
            Agl = 5;
            Luk = 0;
            tml = 260;
            break;
        case int('K'):
            Str = 2;
            Int = 10;
            Cha = 1;
            End = 8;
            Agl = 5;
            Luk = 0;
            tml = 260;
            break;
        case int('L'):
            Str = 2;
            Int = 10;
            Cha = 1;
            End = 8;
            Agl = 5;
            Luk = 0;
            tml = 260;
            break;
        case int('M'):
            Str = 2;
            Int = 10;
            Cha = 1;
            End = 8;
            Agl = 5;
            Luk = 0;
            tml = 208;
            break;
        case int('N'):
            Str = 2;
            Int = 10;
            Cha = 8;
            End = 3;
            Agl = 3;
            Luk = 0;
            tml = 260;
            break;
        case int('O'):
            Str = 1;
            Int = 1;
            Cha = 1;
            End = 1;
            Agl = 1;
            Luk = 1;
            tml = 0;
            break;
        case int('P'):
            Str = 2;
            Int = 10;
            Cha = 1;
            End = 3;
            Agl = 10;
            Luk = 0;
            tml = 104;
            break;
        case int('Q'):
            Str = 2;
            Int = 10;
            Cha = 1;
            End = 10;
            Agl = 3;
            Luk = 0;
            tml = 260;
            break;
        case int('R'):
            Str = 2;
            Int = 10;
            Cha = 1;
            End = 5;
            Agl = 8;
            Luk = 0;
            tml = 416;
            break;
        case int('S'):
            Str = 2;
            Int = 10;
            Cha = 1;
            End = 8;
            Agl = 5;
            Luk = 0;
            tml = 208;
            break;
        case int('T'):
            Str = 1;
            Int = 10;
            Cha = 1;
            End = 8;
            Agl = 3;
            Luk = 3;
            tml = 260;
            break;
        case int('U'):
            Str = 1;
            Int = 1;
            Cha = 1;
            End = 1;
            Agl = 1;
            Luk = 1;
            tml = 0;
            break;
        case int('V'):
            Str = 2;
            Int = 10;
            Cha = 1;
            End = 5;
            Agl = 8;
            Luk = 0;
            tml = 260;
            break;
        case int('W'):
            Str = 2;
            Int = 10;
            Cha = 1;
            End = 3;
            Agl = 10;
            Luk = 0;
            tml = 260;
            break;
        case int('X'):
            Str = 2;
            Int = 10;
            Cha = 5;
            End = 4;
            Agl = 5;
            Luk = 0;
            tml = 260;
            break;
        case int('Y'):
            Str = 5;
            Int = 10;
            Cha = 1;
            End = 8;
            Agl = 2;
            Luk = 0;
            tml = 260;
            partysize = 6;
            break;
        case int('Z'):
            Str = 2;
            Int = 10;
            Cha = 1;
            End = 8;
            Agl = 5;
            Luk = 0;
            tml = 416;
            break;

    }
}
Sprite PlayerCharacter::getSprite()
{
    return sprite;
}

PlayerCharacter::~PlayerCharacter()
{
    //dtor
}
