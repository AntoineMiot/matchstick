/*
** EPITECH PROJECT, 2018
** Matchstick
** File description:
** main fonction
*/
#include "include/my.h"

char *first_and_end_line(int nb_large)
{
    char *line_char = malloc(sizeof(char) * (nb_large + 4));
    int i = 0;

    for (i; i != nb_large + 2; i++)
        line_char[i] = '*';
    line_char[i] = '\n';
    line_char[i+1] = '\0';
    return (line_char);
}

char **rewrite_map_with_stick(char **map, int nb_long, int nb_large)
{
    int z_start = 1;
    int z_stop = nb_large + 1;

    for (int i = nb_long; i != 0; i--) {
        for (int z = z_start; z != z_stop; z++)
            map[i][z] = '|';
        z_start = z_start + 1;
        z_stop = z_stop - 1;
    }
    return (map);
}

char **line_stick(int nb_long, int nb_large)
{
    char **map = malloc(sizeof(char *) * (nb_long + 3));
    int i = 0;
    int z = 0;

    map[i] = first_and_end_line(nb_large);
    for (i = 1; i != nb_long + 1; i++) {
        map[i] = malloc(sizeof(char) * (nb_large + 4));
        map[i][z] = '*';
        for (z = 1; z != nb_large + 1; z++)
            map[i][z] = 32;
        map[i][z] = '*';
        map[i][z+1] = '\n';
        map[i][z+2] = '\0';
        z = 0;
    }
    map[i] = first_and_end_line(nb_large);
    map[i+1] = NULL;
    return (rewrite_map_with_stick(map, nb_long, nb_large));
}

char **tab_map_game(int nb_long)
{
    int nb_large = 1;

    for (int z = 1; z != nb_long; z++)
        nb_large = nb_large + 2;
    return (line_stick(nb_long, nb_large));
}