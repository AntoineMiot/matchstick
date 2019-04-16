/*
** EPITECH PROJECT, 2018
** Matchstick
** File description:
** check fonction
*/
#include "include/my.h"

int positive_number(char *str)
{
    for (int i = 0; str[i+1] != '\0'; i++)
        if (str[i] < 48 || str[i] > 57)
            return (-1);
    return (0);
}

int check_map_empty_two(char **map, int i)
{
    for (int z = 0; map[i][z] != '\n'; z++)
        if (map[i][z] == '|')
            return (-1);
    return (0);
}

int check_map_empty(char **map)
{
    for (int i = 0; map[i] != NULL; i++)
        if (check_map_empty_two(map, i) == -1)
            return (-1);
    return (0);
}

int chk_nb_mch_line(char **map, int line)
{
    int counter = 0;

    for (int z = 0; map[line][z] != '\n'; z++)
        if (map[line][z] == '|')
            counter++;
    return (counter);
}

int check_error(int ac, char **av)
{
    if (ac != 3)
        return (84);
    if (positive_number(av[1]) == -1 || positive_number(av[2]) == -1)
        return (84);
    if (my_getnbr(av[1]) == 1 || my_getnbr(av[1]) == 100)
        return (84);
}