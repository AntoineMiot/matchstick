/*
** EPITECH PROJECT, 2018
** Matchstick
** File description:
** ia fonction
*/
#include "include/my.h"

int line_with_stick_ia_two(char **map, int i)
{
    int counter = 0;

    for (int z = 1; map[i][z] != '*'; z++) {
        if (map[i][z] == '|') {
            counter = 1;
            return (counter);
        }
    }
    counter = 0;
    return (counter);
}

int line_with_stick_ia(char **map, int line)
{
    for (int i = line; i != 0; i--)
        if (line_with_stick_ia_two(map, i) == 1)
            return (i);
    return (-1);
}

int nb_stick_max(char **map, int rdm_line, int remove_max)
{
    int count_stick = 0;

    for (int i = 1; map[rdm_line][i] != '*'; i++)
        if (map[rdm_line][i] == '|')
            count_stick++;
    if (count_stick < remove_max)
        return (count_stick);
    if (count_stick > remove_max)
        return (remove_max);
    if (count_stick = remove_max)
        return (remove_max);
}

int random_remove_stick_ia(char **map, int rdm_line, int remove_max)
{
    int random_remove;

    srandom(time(NULL));
    random_remove = 1 + random() % nb_stick_max(map, rdm_line, remove_max);
    return (random_remove);
}

char **rewrite_map_ia(char **map, int nb_long, int matches, int remove_max)
{
    int rdm_line = line_with_stick_ia(map, nb_long);
    int random_remove = random_remove_stick_ia(map, rdm_line, remove_max);

    my_putstr("\nAI's turn...\n");
    my_putstr("AI removed ");
    my_put_nbr(random_remove);
    my_putstr(" match(es) from line ");
    my_put_nbr(rdm_line);
    my_putchar('\n');
    return (rewrite_map(map, rdm_line, random_remove));
}