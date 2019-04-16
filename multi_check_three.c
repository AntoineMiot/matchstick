/*
** EPITECH PROJECT, 2018
** Matchstick
** File description:
** check fonction
*/
#include "include/my.h"

void put_turn(void)
{
    my_putstr("\nYour turn:");
    my_putchar('\n');
}

int get_str(variable_map *var, getstr *get)
{
    my_putstr("Line : ");
    if (getline(&get->str, &get->size, stdin) != -1)
        var->line = my_getnbr(get->str);
    else
        return (0);
    return (73);
}

int get_str_two(variable_map *var, getstr *get)
{
    my_putstr("Matches: ");
    if (getline(&get->str_two, &get->size, stdin) != -1)
        var->matches = my_getnbr(get->str_two);
    else
        return (0);
    return (73);
}

void disp_error(variable_map *var, getstr *get)
{
    if (positive_number(get->str) == -1)
        my_putstr("Error: invalid input (positive number expected)\n");
    else if (var->line > var->nb_long || var->line == 0)
        my_putstr("Error: this line is out of range\n");
}

void disp_error_two(variable_map *var, getstr *get)
{
    if (var->matches > var->remove_max || var->matches == 0
    || positive_number(get->str_two) == -1
    || chk_nb_mch_line(var->map, var->line) < var->matches) {
        if (positive_number(get->str_two) == -1)
            my_putstr("Error: invalid input (positive number expected)\n");
        else if (var->matches == 0)
            my_putstr("Error: you have to remove at least one match\n");
        if (var->matches > var->remove_max) {
            my_putstr("Error: you cannot remove more than ");
            my_put_nbr(var->remove_max);
            my_putstr(" matches per turn\n");
        } else if (chk_nb_mch_line(var->map, var->line) < var->matches)
            my_putstr("Error: not enough matches on this line\n");
    }
}