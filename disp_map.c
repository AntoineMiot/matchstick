/*
** EPITECH PROJECT, 2018
** Matchstick
** File description:
** main fonction
*/
#include "include/my.h"

void disp_map(char **map)
{
    for (int j = 0; map[j] != NULL; j++)
        my_putstr(map[j]);
}