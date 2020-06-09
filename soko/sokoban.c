/*
** EPITECH PROJECT, 2019
** sokoban
** File description:
** sokoban
*/
#include "my.h"
#include "sokoban.h"

int find(char **buffer_two)
{
    int i = 0;
    int j = 0;

    while (buffer_two[j]) {
        while (buffer_two[j][i] != '\0') {
            if (buffer_two[j][i] != '#' && buffer_two[j][i] != ' ' &&
                buffer_two[j][i] != 'O' && buffer_two[j][i] != 'P' &&
                    buffer_two[j][i] != 'X') {
                return (84);
            }
            i++;
        }
        i = 0;
        j++;
    }
    return (0);
}

void cat_map(char **buffer_two, char *av)
{
    initscr();
    keypad(stdscr, TRUE);
    curs_set(0);
    while (1) {
        clear();
        for (int j = 0; buffer_two[j] != NULL; j++) {
            printw(buffer_two[j]);
            printw("\n");
        }
        refresh();
        buffer_two = key(buffer_two, av);
    }
    endwin();
}

var_t search_p(var_t var, char **buffer_two)
{
    int i = 0;
    int j = 0;

    while (buffer_two[j]) {
        while (buffer_two[j][i] != '\0') {
            if (buffer_two[j][i] == 'P') {
                var.posX = i;
                var.posY = j;
            }
            i++;
        }
        i = 0;
        j++;
    }
    return (var);
}

int sokoban(char *av)
{
    var_t *var = malloc(sizeof(var_t));
    char *buffer = buffer_map(av);
    char **buffer_two = twod_array(buffer);

    if (find(buffer_two) == 84)
        return (84);
    if (buffer_map(av) == NULL)
        return (84);
    search_p(*var, buffer_two);
    cat_map(buffer_two, av);
    free(buffer_two);
    return (0);
}