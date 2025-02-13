/*
** EPITECH PROJECT, 2024
** my
** File description:
** contain the prototype of all the function in libmy.a
*/

#include "circle.h"
#include "mylist.h"
#include "script.h"
#include "macro.h"
#include "enum.h"
#include "display.h"
#include <math.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/CircleShape.h>
#include <SFML/Graphics/RectangleShape.h>
#include <SFML/Graphics/Text.h>
#include <SFML/Graphics/Font.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Audio/Sound.h>
#include <SFML/System.h>
#include <SFML/Graphics/Color.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <unistd.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/sysmacros.h>
#include <stdbool.h>
#ifndef MY_H_
    #define MY_H_

char *concat_params(int argc, char **argv);

int my_compute_power_rec(int nb, int p);

int my_compute_square_root(int nb);

int my_find_prime_sup(int nb);

float my_getnbr(char const *str);

int my_isneg(int n);

int my_is_prime(int nb);

void my_putchar(char c);

int my_put_nbr(int nb);

int my_putstr(char const *str);

char *my_revstr(char *str);

int my_showmem(char const *str, int size);

int my_showstr(char const *str);

int my_show_word_array(char *const *tab);

void my_sort_int_array(int *array, int size);

char *my_strcapitalize(char *str);

char *my_strcat(char *dest, char const *src);

int my_strcmp(char const *s1, char const *s2);

char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src);

int my_str_isalpha(char const *str);

int my_str_islower(char const *str);

int my_str_isnum(char const *str);

int my_str_isprintable(char const *str);

int my_str_isupper(char const *str);

int my_strlen(char const *str);

char *my_strlowcase(char *str);

char *my_strncat(char *dest, char const *src, int nb);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strncpy(char *dest, char const *src, int n);

char *my_strstr(char *str, char const *to_find);

char **my_str_to_word_array(char const *str);

char *my_strupcase(char *str);

void my_swap(int *a, int *b);

int my_strcmp2(char const *s1, char const *s2, int k, int i);

int my_strncmp2(char const *s1, char const *s2, int n, int i);

bool my_strstr2(int i, int e, char *str, char const *to_find);

int count_spaces(char const *str, int k);

int count_char(char const *str, int *i, int k);

int function_bizzare(char const *str, int *k, int count);

int count_function(char const *str, int count);

int my_list_size(linked_list_t const *begin);

int my_char_isnum(char c);

int my_printf(const char *format, ...);

int open_script(script_t *script, char *filepath);

sfSprite *init_sprite(sfTexture *texture);

entity_t *init_entity(game_t *game, sfTexture **texture, script_t *script);

void destroy_main(game_t *game, entity_t *entity, sfTexture **texture);

void destroy_window(game_t *game, sfTexture *texture_background);

void destroy_entity(entity_t *entity, sfTexture **texture);

int init_main(game_t *game, entity_t **entity, sfTexture **texture,
    script_t *script);

int init_background(game_t *game, sfTexture *texture);

int init_text_start(text_t *text_start);

int init_text_quit(text_t *text_quit);

int init_window(game_t *game);

int display_loop(game_t *game, entity_t *entity);

int display_main(game_t *game, entity_t *entity);

void display_window(game_t *game);

void update_plane(plane_t *plane, game_t *game, plane_t **origin,
    entity_t *entity);

void display_entity(game_t *game, entity_t *entity);

bool get_action_time(sfClock *clock, const float every, float *last_action);

void del_funct(plane_t *prev,
    plane_t **current, plane_t **begin);

int update_timer(game_t *game);

int display_text(game_t *game);

object_t init_object(sfTexture *texture, sfVector2f position);

int update_tower(plane_t **plane, entity_t *entity);

bool calcul_screen_loc(sfVector2f plane_position, sfVector2f screen_part,
    sfVector2f size);

plane_t *move_pln(plane_t *current, plane_t **head);

void del_funct_bis(plane_t *prev,
    plane_t **current, plane_t **begin);

void display_plane_bot_left(plane_t *prev_left, plane_t **cur_left,
    game_t *game, entity_t *entity);

void display_plane_bot_right(plane_t *prev_right, plane_t **cur_right,
    game_t *game, entity_t *entity);

void display_plane_top_left(plane_t *prev_left, plane_t **cur_left,
    game_t *game, entity_t *entity);

void display_plane_top_right(plane_t *prev_right, plane_t **cur_right,
    game_t *game, entity_t *entity);

float calculate_angle(sfVector2f *direction, plane_t *plane);

void rotation(entity_t *entity, plane_t *plane);

void display_plane_bis(game_t *game, plane_t *current, entity_t *entity);

#endif /* MY_H_ */
