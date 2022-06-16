//
// Created by shinjitsu on 6/16/22.
//
#include <ncurses.h>
#include "drawable.hpp"
#ifndef NCURSES_C___GUI_BASE_HPP
#define NCURSES_C___GUI_BASE_HPP



#endif //NCURSES_C___GUI_BASE_HPP

class Board{
public:
    Board(){
        construct(0,0);
    }
    Board(int height, int widith) {
        construct(height, widith);
    }
    void initialize(){
        clear();
        refresh();
    }
    void addBorder(){
        box(board_win, 0, 0);
    };
    void add(Drawable drawable){
        addAt(drawable.getY(), drawable.getX(), drawable.getIcon());
    }
    void addAt(int y, int x, chtype ch){
        mvwaddch(board_win, y, x, ch);
    }
    chtype getInput(){
        return wgetch(board_win);
    }
    void clear(){
        wclear(board_win);
        addBorder();
    }
    void refresh(){
        wrefresh(board_win);
    }
private:
    WINDOW * board_win;
    void construct(int height, int width){
        int xMax, yMax;
        getmaxyx(stdscr, yMax, xMax);

        board_win = newwin(height, width, (yMax/2)-(height / 2), (xMax / 2)-(width/2));
    }
};