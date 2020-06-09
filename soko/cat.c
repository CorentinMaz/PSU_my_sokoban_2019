/*
** EPITECH PROJECT, 2019
** cat
** File description:
** cat
*/

#include "my.h"
#include "sokoban.h"

int nb_charact(char *buffer)
{
    int i = 0;
    int curs = 0;

    while (buffer[i] != '\n') {
        curs++;
        i++;
    }
    return (curs);
}

int nb_line(char *buffer)
{
    int i = 0;
    int curs = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == '\n')
            curs++;
        i++;
    }
    return (curs);
}

char **twod_array(char *buffer)
{
    int i = 0;
    int j = 0;
    int line = nb_line(buffer);
    int caract = nb_charact(buffer);
    char **buffer_two = malloc(sizeof(char *) * (line + 1));

    for (int x = 0; j < line; j++, x++) {
        buffer_two[j] = malloc(sizeof(char) * (caract + 1));
        for (i = 0; buffer[x] != '\n'; i++, x++) {
            buffer_two[j][i] = buffer[x];
        }
        buffer_two[j][i] = '\0';
    }
    buffer_two[j] = NULL;
    return (buffer_two);
}

char *buffer_map(char *av)
{
    char *buffer;
    struct stat size;
    int fd = open(av, O_RDONLY);

    stat(av, &size);
    buffer = malloc(sizeof(char) * size.st_size + 1);
    read(fd, buffer, size.st_size);
    buffer[size.st_size] = '\0';
    twod_array(buffer);
    close(fd);
    return (buffer);
}