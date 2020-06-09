/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/
#include "my.h"
#include "sokoban.h"

int main(int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0')
        instruction();
    else
        sokoban(av[1]);
    if (ac != 2)
        return (84);
    return (0);
}