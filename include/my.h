/*
** EPITECH PROJECT, 2020
** d
** File description:
** d
*/

#ifndef MY_H
#define MY_H

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/Window/Mouse.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

typedef struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
} framebuffer_t;

typedef struct run
{
    sfRenderWindow *main;
    sfRenderWindow *window;
    sfRenderWindow *loose;
    sfVideoMode video_mode;
    sfEvent        event;
    sfMusic *music;
    sfMusic *sound;
    sfMusic *sound2;
    sfMouseButtonEvent mouse;
    sfMouseMoveEvent movve;
    sfTexture *menu;
    sfSprite *menusprite;
    sfTexture *map;
    sfSprite *mapsprite;
    int hp;
    sfVector2f pos1;
    sfVector2f pos2;
    sfVector2f pos3;
    sfVector2f pos4;
    sfVector2f pos5;
    sfVector2f pos6;
    sfVector2f pos7;
    sfVector2f pos8;
    sfVector2f pos9;
    sfVector2f pos10;
    int pos;
    int mon;
}run_t;

typedef struct fight
{
    sfVector2f sfv;
    sfVector2f sfv2;
    sfVector2f sfv3;
    sfVector2f sfv4;
    sfTexture *sft;
    sfTexture *sft2;
    sfTexture *sft3;
    sfTexture *sft4;
    sfSprite *sfs;
    sfSprite *sfs2;
    sfSprite *sfs3;
    sfSprite *sfs4;
    sfClock *clock;
    sfEvent event;
}fight_t;

typedef struct score
{
    int score;
    int score2;
    int score3;
    char *str;
    char *str2;
    char *str3;
}score_t;

void tchange_map(sfRenderWindow *main);
void my_map1(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void map1_col(sfRenderWindow *main, sfSprite *sprite);
void my_map2(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void map2_col(sfRenderWindow *main, sfSprite *sprite);
void my_map3(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void map3_col(sfRenderWindow *main, sfSprite *sprite);
void my_map4(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void my_map5(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void my_map6(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void map4_col(sfRenderWindow *main, sfSprite *sprite);
void map5_col(sfRenderWindow *main, sfSprite *sprite);
void map6_col(sfRenderWindow *main, sfSprite *sprite);
void my_map7(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void map7_col(sfRenderWindow *main, sfSprite *sprite);
void my_map8(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void map8_col(sfRenderWindow *main, sfSprite *sprite);
void my_map9(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void pmy_map1(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void pmap1_col(sfRenderWindow *main, sfSprite *sprite);
void pmy_map2(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void pmap2_col(sfRenderWindow *main, sfSprite *sprite);
void pmy_map3(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void pmap3_col(sfRenderWindow *main, sfSprite *sprite);
void pmy_map4(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void pmy_map5(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void pmy_map6(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void pmy_map7(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void pmy_map8(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void pmy_map9(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void pmap4_col(sfRenderWindow *main, sfSprite *sprite);
void pmap5_col(sfRenderWindow *main, sfSprite *sprite);
void pmap6_col(sfRenderWindow *main, sfSprite *sprite);
void pmap7_col(sfRenderWindow *main, sfSprite *sprite);
void pmap8_col(sfRenderWindow *main, sfSprite *sprite);
void move_guy(sfSprite *sprite);
void draw_game(void);
void collision_map1(sfRenderWindow *main, sfSprite *sprite);
void collision_map11(sfSprite *sprite);
void pcollision_map1(sfRenderWindow *main, sfSprite *sprite);
void pcollision_map11(sfSprite *sprite);
int event_map1(sfRenderWindow *main, sfSprite *sprite);
int event_map2(sfRenderWindow *main, sfSprite *sprite);
int event_map3(sfRenderWindow *main, sfSprite *sprite);
void key_event(sfRenderWindow *main, sfSprite *sprite);
void start_map(sfRenderWindow *main, sfSprite *sprite);
void start_map2(sfRenderWindow *main, sfSprite *sprite);
void my_map0(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void map0_col(sfRenderWindow *main, sfSprite *sprite);
void pmy_map0(sfRenderWindow *main, sfSprite *sprite, int x, int y);
void pmap0_col(sfRenderWindow *main, sfSprite *sprite);
int event_map0(sfRenderWindow *main, sfSprite *sprite);
int map_start(sfRenderWindow *main, sfSprite *sprite);
int map_start2(sfRenderWindow *main, sfSprite *sprite);
int pmap_start(sfRenderWindow *main, sfSprite *sprite);
int pmap_start2(sfRenderWindow *main, sfSprite *sprite);
void map8_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock);
void map9_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock);
void set_lifes(sfRenderWindow *main);
void pset_lifes(sfRenderWindow *main);
void shop_map(sfRenderWindow *main, sfSprite *sprite);
void shop_col(sfRenderWindow *main, sfSprite *sprite);
void collision_map0(sfSprite *sprite);
void collision_map2(sfSprite *sprite);
void pshop_map(sfRenderWindow *main, sfSprite *sprite);
int pshop_col(sfRenderWindow *main, sfSprite *sprite);
void pcollision_map0(sfSprite *sprite);
void pcollision_map2(sfSprite *sprite);
void event_minimap(sfRenderWindow *main, sfSprite *sprite);
void draw_sprite(sfRenderWindow *main, char  const *filepath);
void draw_sprite2(sfRenderWindow *main, char  const *filepath, int x, int y);
void dia1(sfRenderWindow *main, sfSprite *sprite);
void move_rec(sfIntRect *rect, int offset, int max_value, sfClock *clock);
int map_dia1(sfRenderWindow *main);
void pfight1(sfRenderWindow *main, sfSprite *sprite, char  const *file, char
            const *att);
int map_fight(sfRenderWindow *main, sfSprite *sprite, int i, int j);
int close_game(sfRenderWindow *main);
void anime_goku(sfSprite *sprite, sfClock *clock);
void anime_picolo(sfSprite *sprite, sfClock *clock);
void collision_map22(sfSprite *sprite);
void pcollision_map22(sfSprite *sprite);
void loose_map(sfRenderWindow *main);
void win_map(sfRenderWindow *main);
void draw_sprite3(sfRenderWindow *main, char  const *filepath, int x, int y);
void collision_map00(sfSprite *sprite);
void map11_col(sfRenderWindow *main, sfSprite *sprite);
void pcollision_map00(sfSprite *sprite);
void pmap11_col(sfRenderWindow *main, sfSprite *sprite);
void status(sfRenderWindow *main, sfSprite *sprite);
int map_status(sfRenderWindow *main, sfSprite *sprite);
int pevent_map0(sfRenderWindow *main, sfSprite *sprite);
int pevent_map1(sfRenderWindow *main, sfSprite *sprite);
int pevent_map2(sfRenderWindow *main, sfSprite *sprite);
int pevent_map3(sfRenderWindow *main, sfSprite *sprite);
int pevent_map4(sfRenderWindow *main, sfSprite *sprite);
int pevent_map5(sfRenderWindow *main, sfSprite *sprite);
int pevent_map6(sfRenderWindow *main, sfSprite *sprite);
int pevent_map7(sfRenderWindow *main, sfSprite *sprite);
int pevent_map8(sfRenderWindow *main, sfSprite *sprite);
int pevent_map9(sfRenderWindow *main, sfSprite *sprite);
void pmap8_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock);
void pmap9_func(sfRenderWindow *main, sfSprite *sprite, sfClock *clock);
void save_if(sfRenderWindow *main, sfSprite *sprite);
void save_if2(sfRenderWindow *main, sfSprite *sprite);
int my_strcmp(char *s1, char *s2);
int event_map4(sfRenderWindow *main, sfSprite *sprite);
int event_map5(sfRenderWindow *main, sfSprite *sprite);
int event_map6(sfRenderWindow *main, sfSprite *sprite);
int event_map9(sfRenderWindow *main, sfSprite *sprite);
int mmm(sfRenderWindow *main);
int map_start0(sfRenderWindow *main, sfSprite *sprite);
int pmap_start0(sfRenderWindow *main, sfSprite *sprite);
void start_map0(sfRenderWindow *main, sfSprite *sprite);
void pstart_map0(sfRenderWindow *main, sfSprite *sprite);
int pevent_map6(sfRenderWindow *main, sfSprite *sprite);
int nnn(sfRenderWindow *main, int x);
void pstart_map(sfRenderWindow *main, sfSprite *sprite);
char *my_put_nbr_to_char(int n);
int draw_int(sfRenderWindow *window, int round, int x, int y);
void save_pos(sfSprite *sprite);
int print_posx(void);
int print_posy(void);
int my_getnbr(const char *str);
void write_file(char  const *filepath, char *str);
void set_highscore2(int x);
void save_pos2(sfSprite *sprite);
void talk1(sfRenderWindow *main, sfSprite *sprite);
int fight_talk(void);
int print_posx2(void);
int print_posy2(void);
void minimap_printx1(sfSprite *sprite, char  const *file);
void minimap_printx2(sfSprite *sprite, char  const *file);
void minimap_printx3(sfSprite *sprite, char  const *file);
void minimap_printy1(sfSprite *sprite, char  const *file);
void minimap_printy2(sfSprite *sprite, char  const *file);
void minimap_printy3(sfSprite *sprite, char  const *file);
void save_if(sfRenderWindow *main, sfSprite *sprite);
void save_if2(sfRenderWindow *main, sfSprite *sprite);
void save_if3(sfRenderWindow *main, sfSprite *sprite);
void save_if4(sfRenderWindow *main, sfSprite *sprite);
int event_map7(sfRenderWindow *main, sfSprite *sprite);
int event_map8(sfRenderWindow *main, sfSprite *sprite);
void minimap(sfRenderWindow *main, sfSprite *sprite, int x, int y);
int minimap_func(sfRenderWindow *main, sfSprite *sprite);
void save(void);
int print_miniposx(void);
int print_miniposy(void);
int print_miniposx2(void);
int print_miniposy2(void);
void pevent_minimap(sfRenderWindow *main, sfSprite *sprite);
void pminimap(sfRenderWindow *main, sfSprite *sprite, int x, int y);
int pminimap_func(sfRenderWindow *main, sfSprite *sprite);
void pstatus(sfRenderWindow *main, sfSprite *sprite);
int pmap_status(sfRenderWindow *main, sfSprite *sprite);
int draw_money(sfRenderWindow *window, char *str, sfFont *font);
int print_score(char const *filepath);
int add_int(int x, char  const *file);
void game_over(sfRenderWindow *main);
int draw_name(sfRenderWindow *window, char *str, sfFont *font);
int draw_level(sfRenderWindow *window, char *str, sfFont *font);
void set_ki2(sfRenderWindow *main);
void set_ki(sfRenderWindow *main);
int set_hp2(sfRenderWindow *main);
int set_hp(sfRenderWindow *main);
int check_ki(void);
int return_ki(char  const *filepath);
void ball_param(sfRenderWindow *main, sfSprite *sprite);
void ball2_param(sfRenderWindow *main, sfSprite *sprite);
void ball3_param(sfRenderWindow *main, sfSprite *sprite);
void set_highscore3(int x);
void mvt(void);
void mouse_func2(sfRenderWindow *main,  sfEvent event);
char *print_name2(char const *filepath);
void draw_menu(void);
void goku_coll(sfRenderWindow *main, sfSprite *sprite, sfSprite *sprite2);
void buu_coll(sfSprite *sprite, sfSprite *sprite2, sfSprite *sprite3);
void anime_fightbuu(sfSprite *sprite, int x);
void choose_game(sfRenderWindow *main);
void save2(void);
int check_game(sfRenderWindow *main);
void move_guy1(sfSprite *sprite);
void move_guy2(sfSprite *sprite);
void anime_picolo1(sfSprite *sprite, sfClock *clock);
void anime_picolo2(sfSprite *sprite, sfClock *clock);
void anime_goku1(sfSprite *sprite, sfClock *clock);
void anime_goku2(sfSprite *sprite, sfClock *clock);
void settings(sfRenderWindow *main);
int return_ki(char  const *filepath);
int return_fps(void);
void map_score(void);
void set_all_to_nul(void);
char *abcd(void);
int back_to_menu2(sfRenderWindow *main);
int draw_fps(sfRenderWindow *window, char *str, sfFont *font);
void back_to_menu(sfRenderWindow *main);
void check_save(sfRenderWindow *main, sfSprite *sprite);
void check_save2(sfRenderWindow *main, sfSprite *sprite);
void check_save3(sfRenderWindow *main, sfSprite *sprite);
void check_save4(sfRenderWindow *main, sfSprite *sprite);
void test(void);
int return_ki(char  const *filepath);
int return_ki2(char  const *filepath);
int return_key(void);
int my_strlen(char *str);
void ptalk1(sfRenderWindow *main, sfSprite *sprite);
void pdia1(sfRenderWindow *main, sfSprite *sprite);
void pwin_map(sfRenderWindow *main);
void ploose_map(sfRenderWindow *main);
void fight1(sfRenderWindow *main, sfSprite *sprite, char  const *file, char
            const *att);
int pset_hp2(sfRenderWindow *main);
int pset_hp(sfRenderWindow *main);
void pgame_over(sfRenderWindow *main);
int return_life(char const *filepath);
void pause1(sfRenderWindow *main, sfSprite *sprite);
void pause2(sfRenderWindow *main, sfSprite *sprite);
int pause_col(sfRenderWindow *main, sfSprite *sprite);
int pause_col2(sfRenderWindow *main, sfSprite *sprite);
void pause_game(sfRenderWindow *main, sfSprite *sprite);
void pause_game2(sfRenderWindow *main, sfSprite *sprite);
void map111_col(sfRenderWindow *main, sfSprite *sprite);
int win_or_not(void);
void talk2(sfRenderWindow *main, sfSprite *sprite);
void talk3(sfRenderWindow *main, sfSprite *sprite);
void goal(sfRenderWindow *main, sfSprite *sprite);
int goal_if(sfRenderWindow *main, sfSprite *sprite);
void pgoal(sfRenderWindow *main, sfSprite *sprite);
int pgoal_if(sfRenderWindow *main, sfSprite *sprite);
void shop_col2(sfRenderWindow *main, sfSprite *sprite);
void ball_param1(sfSprite *sprite);
void ptalk2(sfRenderWindow *main, sfSprite *sprite);
void ptalk3(sfRenderWindow *main, sfSprite *sprite);
void dia2(sfRenderWindow *main, sfSprite *sprite);
void dia3(sfRenderWindow *main, sfSprite *sprite);
void pdia2(sfRenderWindow *main, sfSprite *sprite);
void pdia3(sfRenderWindow *main, sfSprite *sprite);
void pball_param(sfRenderWindow *main, sfSprite *sprite);
void pball_param1(sfSprite *sprite);
void talk4(sfRenderWindow *main, sfSprite *sprite);
void check_enemy(void);
void check_enemy1(void);
void check_enemy2(void);
void check_enemy4(void);
void key_event2(sfRenderWindow *main, sfSprite *sprite);
void name1(void);
void name2(void);
void set_all_to_nul2(void);
void pmap111_col(sfRenderWindow *main, sfSprite *sprite);
int pwin_or_not(void);
void dia4(sfRenderWindow *main, sfSprite *sprite);
void pdia4(sfRenderWindow *main, sfSprite *sprite);
void goal1(sfRenderWindow *main, sfSprite *sprite, char  const *filepath);
void pgoal1(sfRenderWindow *main, sfSprite *sprite, char  const *filepath);
int draw_name2(sfRenderWindow *window, char *str, sfFont *font);
int draw_score1(sfRenderWindow *window, char *str, int y, sfFont *font);
int draw_score2(sfRenderWindow *window, char *str, int y, sfFont *font);
int goal_if2(sfRenderWindow *main, sfSprite *sprite);
void go_inv2(sfRenderWindow *main, sfSprite *sprite);
void go_inv(sfRenderWindow *main, sfSprite *sprite);
void go_shop(sfRenderWindow *main, sfSprite *sprite);
void pgo_shop(sfRenderWindow *main, sfSprite *sprite);
int draw_inv(sfRenderWindow *window, char *str, int x, sfFont *font);
void pset_highscore(int x);
void pset_highscore3(int x);
void pset_highscore2(int x);
int pback_to_menu3(sfRenderWindow *main);
void end(sfRenderWindow *main);
void end2(sfRenderWindow *main);
void anime_goku11(sfSprite *sprite, sfClock *clock);
int return_sword(char  const *fil);
int return_cloud(char  const *fil);
int return_ssj(void);
int return_level(char  const *fil);
void talk5(sfRenderWindow *main, sfSprite *sprite);
void ptalk5(sfRenderWindow *main, sfSprite *sprite);
void set_highscore(int x);
int back_to_menu3(sfRenderWindow *main);
int shop_col33(sfRenderWindow *main, sfSprite *sprite);
void  pgoku_coll(sfRenderWindow *main, sfSprite *sprite, sfSprite *sprite2);
void anime_fightgoku1(sfSprite *sprite);
void shenron(sfRenderWindow *main);
void shenron_col(sfRenderWindow *main);
void shenronl(sfRenderWindow *main);
void htp(sfRenderWindow *main);
void make_db(sfRenderWindow *main);
void my_clock(sfClock *clock);
int event_map0(sfRenderWindow *main, sfSprite *sprite);
int time_retur(void);
void anime_fgoku(sfSprite *sprite);
void anime_fightgokuu(sfSprite *sprite);
void anime_goku101(sfSprite *sprite);
void anime_gokuu(sfSprite *sprite, sfClock *clock);
void anime_fightgoku(sfSprite *sprite);
void menu_mouse_func(run_t window);
void menu_mouse_func1(run_t window);
void menu_mouse_func2(run_t window);
void menu_mouse_func3(run_t window);
void my_putstr(char *str);
void anime_picolo101(sfSprite *sprite);
void anime_picoolo(sfSprite *sprite, sfClock *clock);
int return_attack(void);
void anime_attack(sfSprite *sprite);
void anime_attack1(sfSprite *sprite, int x);
fight_t fight_struct(sfSprite *sprite, fight_t fightt, char const *file, char
                        const *att);
void set_ki_hp(sfRenderWindow *main);
fight_t fight_struct_2(sfSprite *sprite, fight_t fightt, char const *file, char
                    const *att);
void txt_cloud(sfRenderWindow *main, sfSprite *sprite);
void txt_money(sfRenderWindow *main, sfSprite *sprite);
score_t fill_score(score_t sc);
run_t fill_window(run_t window);
fight_t fight_struct_3(fight_t fightt, char const *file);
fight_t fight_struct_4(fight_t fightt, char const *file);
int event_check(sfEvent event, sfRenderWindow *window);
void handle_music(bool play_music, sfMusic *music);
void play_music(sfRenderWindow *main);
void shop_col3(sfRenderWindow *main, sfSprite *sprite);
void play_sound(char  const *file);
int  return_music(void);
void anime_fightpicolo(sfSprite *sprite);
void set_ki_hp2(sfRenderWindow *main);
void collision_map4(sfSprite *sprite);
void collision_map5(sfSprite *sprite);
framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
sfRenderWindow *create_window(unsigned int w, unsigned int h, char const *str);
void draw(framebuffer_t *frame);
void draw_p(void);
void my_put_pixel(framebuffer_t *framebuffer, unsigned int x,
                  unsigned int y, sfColor color);
int p_event(sfEvent event, sfRenderWindow *window);

#endif
