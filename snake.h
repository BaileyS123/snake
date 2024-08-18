#ifndef SNAKE_H
#define SNAKE_H

/*
Snake:
1. Needs length, grows when it eats an apple
2. Needs direction, always travels in direction at set speed
3. Changes direction when input is received
4. Alive/dead, dies when it collides with something
*/

#include <string>
#include <utility>
#include <vector>
#include "body.h"

class Snake{
    private:
        int length;         // length of snake
        std::vector<Body> parts;
        bool isAlive;
    public:
        // init
        Snake();

        // setters...
        void incLength(){length++;};
        void changeDir(std::string _dir){dir = _dir;};

        // functionality
        int move();
        void die();

        // getters
        int get_length(){ return length;};
        std::pair<int, int> get_coords(){ return coords;};
        bool get_isAlive(){ return isAlive;};
};

#endif