/*
** EPITECH PROJECT, 2019
** key
** File description:
** key
*/

#include "my.h"
#include "sokoban.h"

char **key(char **buffer_two, char *av)
{
    int i = getch();

    switch (i) {
        case KEY_LEFT:
            moove_left(buffer_two);
            break;
        case KEY_RIGHT:
            moove_right(buffer_two);
            break;
        case KEY_UP:
            moove_up(buffer_two);
            break;
        case KEY_DOWN:
            moove_down(buffer_two);
            break;
        case ' ':
            sokoban(av);
            break;
    }
    return (buffer_two);
}