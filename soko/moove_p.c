/*
** EPITECH PROJECT, 2019
** moove_p
** File description:
** moove_p
*/
#include "my.h"
#include "sokoban.h"

void moove_down(char **buffer_two)
{
    var_t var = search_p(var, buffer_two);

    if (buffer_two[var.posY + 1][var.posX] != '#' &&
        buffer_two[var.posY + 1][var.posX] != 'X') {
        buffer_two[var.posY][var.posX] = ' ';
        buffer_two[var.posY + 1][var.posX] = 'P';
    }
    if (buffer_two[var.posY + 1][var.posX] == 'X' &&
        buffer_two[var.posY + 2][var.posX] != '#' &&
        buffer_two[var.posY + 2][var.posX] != 'X') {
        buffer_two[var.posY][var.posX] = ' ';
        buffer_two[var.posY + 1][var.posX] = 'P';
        buffer_two[var.posY + 2][var.posX] = 'X';
    }
}

void moove_up(char **buffer_two)
{
    var_t var = search_p(var, buffer_two);

    if (buffer_two[var.posY - 1][var.posX] != '#' &&
        buffer_two[var.posY - 1][var.posX] != 'X') {
        buffer_two[var.posY][var.posX] = ' ';
        buffer_two[var.posY - 1][var.posX] = 'P';
    }
    if (buffer_two[var.posY - 1][var.posX] == 'X' &&
        buffer_two[var.posY - 2][var.posX] != '#' &&
        buffer_two[var.posY - 2][var.posX] != 'X') {
        buffer_two[var.posY][var.posX] = ' ';
        buffer_two[var.posY - 1][var.posX] = 'P';
        buffer_two[var.posY - 2][var.posX] = 'X';
    }
}

void moove_right(char **buffer_two)
{
    var_t var = search_p(var, buffer_two);

    if (buffer_two[var.posY][var.posX + 1] != '#' &&
        buffer_two[var.posY][var.posX + 1] != 'X') {
        buffer_two[var.posY][var.posX] = ' ';
        buffer_two[var.posY][var.posX + 1] = 'P';
    }
    if (buffer_two[var.posY][var.posX + 2] != '#' &&
        buffer_two[var.posY][var.posX + 1] == 'X' &&
        buffer_two[var.posY][var.posX + 2] != 'X') {
        buffer_two[var.posY][var.posX] = ' ';
        buffer_two[var.posY][var.posX + 1] = 'P';
        buffer_two[var.posY][var.posX + 2] = 'X';
    }
}

void moove_left(char **buffer_two)
{
    var_t var = search_p(var, buffer_two);

    if (buffer_two[var.posY][var.posX - 1] != '#' &&
        buffer_two[var.posY][var.posX - 1] != 'X') {
        buffer_two[var.posY][var.posX] = ' ';
        buffer_two[var.posY][var.posX - 1] = 'P';
    }
    if (buffer_two[var.posY][var.posX - 2] != '#' &&
        buffer_two[var.posY][var.posX - 1] == 'X' &&
        buffer_two[var.posY][var.posX - 2] != 'X') {
        buffer_two[var.posY][var.posX] = ' ';
        buffer_two[var.posY][var.posX - 1] = 'P';
        buffer_two[var.posY][var.posX - 2] = 'X';
    }
}