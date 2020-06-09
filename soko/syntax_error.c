/*
** EPITECH PROJECT, 2019
** error
** File description:
** syntax_error
*/
#include "my.h"

int instruction(void)
{
    my_putstr("USAGE");
    my_putstr("\n     ./my_sokoban map");
    my_putstr("\nDESCRIPTION\n");
    my_putstr("     map file representing the warehouse map, ");
    my_putstr("containing ‘#’ for walls, ");
    my_putstr("\n         ‘P’ for the player, ‘X’ for boxes and ");
    my_putstr("‘O’ for storage locations.\n");
    exit(0);
}
