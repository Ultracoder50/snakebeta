//
// Created by shinjitsu on 6/16/22.
//

#ifndef NCURSES_C___GUI_GAME_HPP
#define NCURSES_C___GUI_GAME_HPP

#endif //NCURSES_C___GUI_GAME_HPP

#include "base.hpp"
#include <ncurses.h>

class SnakeGame{
public:
    SnakeGame(int height, int width){
        board = Board(height, width);
        board.initialize();
        game_over = false;
    }
    void processInput(){
        chtype input = board.getInput();
    }
    void updateState(){
        board.add(Drawable(3,3,'#'));
        board.add(Drawable(3,5,'@'));
    }
    void redraw(){
        board.refresh();
    }
    bool isOver() const{
        return game_over;
    }
private:
    Board board;
    bool game_over;
};