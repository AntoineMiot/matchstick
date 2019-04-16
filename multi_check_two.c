/*
** EPITECH PROJECT, 2018
** Matchstick
** File description:
** check fonction
*/
#include "include/my.h"

void disp_info(int matches, int line)
{
    my_putstr("Player removed ");
    my_put_nbr(matches);
    my_putstr(" match(es) from line ");
    my_put_nbr(line);
    my_putchar('\n');
}

int check_map_empty_rtrn(char **map)
{
    if (check_map_empty(map) == 0) {
        my_putstr("I lost... snif... but I'll get you next time!!\n");
        return (2);
    }
    return (73);
}

int check_map_empty_ia_rtrn(char **map)
{
    if (check_map_empty(map) == 0) {
        my_putstr("You lost, too bad...\n");
        return (1);
    }
    return (73);
}

int loop_chk_one(variable_map *var, getstr *get)
{
    if (var->matches > var->remove_max || var->line > var->nb_long
        || var->matches == 0 || var->line == 0
        || positive_number(get->str) == -1
        || positive_number(get->str_two) == -1
        || chk_nb_mch_line(var->map, var->line)<var->matches)
        return (73);
    return (37);
}

void before_loop(variable_map *var, char **av)
{
    var->nb_long = my_getnbr(av[1]);
    var->remove_max = my_getnbr(av[2]);
    var->map = tab_map_game(var->nb_long);
    disp_map(var->map);
}