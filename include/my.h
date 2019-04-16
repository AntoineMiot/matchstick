/*
** EPITECH PROJECT, 2018
** include functions
** File description:
** include functions
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <time.h>

struct variable_map{
    int nb_long;
    int remove_max;
    int line;
    int matches;
    char **map;
};

typedef struct variable_map variable_map;

struct getstr{
    char *str;
    char *str_two;
    size_t size;
};

typedef struct getstr getstr;

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int check_number(char *str);
int my_getnbr(char const *str);
void my_isneg(int n);
int my_is_prime(int nb);
void my_putchar(char c);
int nb_special(long nb);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
char *my_strcapitalize(char *str);
int low(char c);
int up(char c);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_str_isalpha(char *str);
char *my_str_islower(char *str);
char *my_str_isnum(char *str);
char *my_str_isprintable(char *str);
char *my_str_isupper(char *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int nb);
char *my_strstr(char *str, char *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
void *infin_add(char *nb1, char *nb2);
int my_str_taller(char const *s1, char const *s2);
char *big_nb(char *nb1, char *nb2);
char *small_nb(char *nb1, char *nb2);
int my_str_is_equal(char *str1, char *str2);
void my_put_infinadd(int ret, char *nb, int type);
int sum_stdarg(int i, int nb, ...);
int disp_stdarg(char *s, ...);
char **tab_map_game(int nb_long);
void disp_map(char **map);
char **rewrite_map_ia(char **map, int nb_long, int matches, int remove_max);
char **rewrite_map(char **map, int line, int matches);

int loop_chk_one(variable_map *var, getstr *get);
void disp_error_two(variable_map *var, getstr *get);
int get_str_two(variable_map *var, getstr *get);
int positive_number(char *str);
int check_error(int ac, char **av);
void disp_error(variable_map *var, getstr *get);
int get_str(variable_map *var, getstr *get);
int check_map_empty_ia_rtrn(char **map);
int check_map_empty_rtrn(char **map);
void disp_info(int matches, int line);
int chk_nb_mch_line(char **map, int line);
int check_map_empty(char **map);
int after_loop(variable_map *var, getstr *get);
int after_loop_two(variable_map *var, getstr *get);
int loop(variable_map *var, getstr *get);
void put_turn(void);
void before_loop(variable_map *var, char **av);