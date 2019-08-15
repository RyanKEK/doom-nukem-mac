#include "sdl_head.h"

void    draw_weapon_frame(SDL_Surface *screen, t_anim animation)
{
    int framew;
    int frameh;
    framew = animation.frames[(int)animation.frameCount]->w;
    frameh = animation.frames[(int)animation.frameCount]->h;
    int x = W / 2 - framew * 2 / 2 - 100;
    int y = H - frameh * 2;
    draw_image(screen, animation.frames[(int)animation.frameCount], x, y, framew * 2, frameh * 2);
}
