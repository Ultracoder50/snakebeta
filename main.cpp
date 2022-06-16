#include "src/game.hpp"
#define BOARD_DIM 20
#define BOARD_ROWS BOARD_DIM
#define BOARD_COLS BOARD_DIM *2.5

int main(int argc, char **argv) {
    initscr();
    refresh();

    SnakeGame game(BOARD_ROWS, BOARD_COLS);

    while (!game.isOver()){
        game.processInput();

        game.updateState();

        game.redraw();
    }
    getch();
    endwin();
    return 0;
}
