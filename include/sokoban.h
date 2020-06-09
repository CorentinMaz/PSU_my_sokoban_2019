/*
** EPITECH PROJECT, 2019
** sokoban
** File description:
** sokoban
*/

#ifndef SOKOBAN_H_
#define SOKOBAN_H_

typedef struct var {
    int posX;
    int posY;
}var_t;


int instruction(void);
int sokoban(char *av);
char *buffer_map(char *av);
char **twod_array(char *buffer);
int nb_line(char *buffer);
int nb_charact(char *buffer);
void cat_map(char **buffer_two, char *av);
var_t search_p(var_t var, char **buffer_two);
char **key(char **buffer_two, char *av);
void moove_down(char **buffer_two);
void moove_up(char **buffer_two);
void moove_left(char **buffer_two);
void moove_right(char **buffer_two);
int check_map(char *buffer_map);
int find(char **buffer_two);

#endif
