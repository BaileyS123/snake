#include "snake.h"

Snake::Snake(){
    length = 3;
    

}

int Snake::move(){
    if (dir == "Up"){
        coords.second++;
    } else if (dir == "Down"){
        coords.second--;
    } else if (dir == "Left"){
        coords.first--;
    } else if (dir == "Right"){
        coords.first++;
    }
    return 0;
}

void Snake::die(){
    isAlive = false;
}