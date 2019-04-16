/*
** EPITECH PROJECT, 2018
** Matchstick
** File description:
** main fonction
*/
#include "include/my.h"

char **rewrite_map(char **map, int line, int matches)
{
    int counter = 0;

    for (int i = 0; map[line][i] != '\0'; i++) {
        if (map[line][i] == '|' && counter != matches) {
            map[line][i] = 32;
            counter += 1;
        }
    }
    disp_map(map);
    return (map);
}

int after_loop(variable_map *var, getstr *get)
{
    disp_info(var->matches, var->line);
    var->map = rewrite_map(var->map, var->line, var->matches);
    if (check_map_empty_rtrn(var->map) == 2)
        return (2);
    return (73);
}

int after_loop_two(variable_map *var, getstr *get)
{
    var->map = rewrite_map_ia(var->map, var->nb_long,
    var->matches, var->remove_max);
    if (check_map_empty_ia_rtrn(var->map) == 1)
        return (1);
    return (73);
}

int into_loop(variable_map *var, getstr *get)
{
    if (get_str(var, get) == 0)
        return (0);
    disp_error(var, get);
    if (var->line <= var->nb_long && var->line != 0
    && positive_number(get->str) != -1) {
        if (get_str_two(var, get) == 0)
            return (0);
        disp_error_two(var, get);
    }
    return (73);
}

int loop(variable_map *var, getstr *get)
{
    do {
        if (into_loop(var, get) == 0)
            return (0);
    } while (loop_chk_one(var, get) == 73);
    return (73);
}