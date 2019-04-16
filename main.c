/*
** EPITECH PROJECT, 2018
** Matchstick
** File description:
** main fonction
*/
#include "include/my.h"

int main(int ac, char **av)
{
    struct variable_map var;
    struct getstr get;

    get.str = NULL;
    get.str_two = NULL;
    if (check_error(ac, av) == 84)
        return (84);
    before_loop(&var, av);
    while (1) {
        put_turn();
        if (loop(&var, &get) == 0)
            return (0);
        if (after_loop(&var, &get) == 2)
            return (1);
        else if (after_loop_two(&var, &get) == 1)
            return (2);
    }
    return (0);
}
