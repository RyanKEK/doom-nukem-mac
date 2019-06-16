/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 13:11:45 by ohavryle          #+#    #+#             */
/*   Updated: 2019/06/16 13:11:46 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/doom.h"
#define WINDOW_WIDTH 1000

void swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

float   fNumberPart(float n)
{
    if (n > 0)
    {
        return (n - (int)n);
    }
    else
    {
        return (n - ((int)n + 1));
    }
}

float   rfNumberPart(float n)
{
    return (1 - fNumberPart(n));
}

void    draw_pixel(SDL_Renderer *renderer, float x, float y, float brightness, t_color color)
{
    SDL_SetRenderDrawColor(renderer, color.r * brightness, color.g * brightness, color.b * brightness, 255);
    SDL_RenderDrawPoint(renderer, x, y);
}

void    line(SDL_Renderer *renderer, t_point start, t_point end)
{
    int steep;
    t_fpoint diff;
    float gradient;
    float intersecY;
    t_color color;

    color.r = 255;
    color.g = 255;
    color.b = 255;
    if (abs(end.y - start.y) > abs(end.x - start.x))
        steep = 1;
    else
        steep = 0;
    if (steep)
    {
        swap(&start.x, &start.y);
        swap(&end.x, &end.y);
    }
    if (start.x > end.x)
    {
        swap(&start.x, &end.x);
        swap(&start.y, &end.y);
    }
    diff.x = end.x - start.x;
    diff.y = end.y - start.y;
    gradient = diff.y / diff.x;
    if (diff.x == 0.0)
        gradient = 1;
    intersecY = start.y;
    if (steep)
    {
        while (start.x <= end.x)
        {
            draw_pixel(renderer, (int)intersecY, start.x, rfNumberPart(intersecY), color);
            draw_pixel(renderer, (int)intersecY - 1, start.x, fNumberPart(intersecY), color);
            intersecY += gradient;
            start.x++;
        }
    }
    else
    {
        while (start.x <= end.x)
        {
            draw_pixel(renderer, start.x, (int)intersecY, rfNumberPart(intersecY), color);
            draw_pixel(renderer, start.x, (int)intersecY - 1, fNumberPart(intersecY), color);
            intersecY += gradient;
            start.x++;
        }
    }
    SDL_RenderPresent(renderer);
}


int main()
{
    SDL_Event event;
    SDL_Renderer *renderer;
    SDL_Window *window;
    t_point start;
    t_point end;

    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(WINDOW_WIDTH, WINDOW_WIDTH, 0, &window, &renderer);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    SDL_RenderClear(renderer);
    while (1)
    {
        if (SDL_PollEvent(&event) && event.type == SDL_QUIT)
            break;
        start.x = 100;
        start.y = 100;
        end.x = 500;
        end.y = 200;
        line(renderer, start, end);
        SDL_SetRenderDrawColor(renderer ,255, 255, 255, 255);
        SDL_RenderClear(renderer);
    }
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_SUCCESS;
}