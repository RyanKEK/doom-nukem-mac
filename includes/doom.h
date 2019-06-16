/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 16:54:12 by ohavryle          #+#    #+#             */
/*   Updated: 2019/06/16 14:35:52 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOM_H
# define DOOM_H
# define WIDTH 1000
# define HEIGHT 900
# include <stdio.h>
# include "../libft/includes/libft.h"
# include "/Users/ohavryle/.brew/Cellar/sdl2/2.0.9_1/include/SDL2/SDL.h"
# include <math.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <sys/time.h>
# include <pthread.h>
# define RAD 0.0174533

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

typedef struct	s_color
{
	int			r;
	int			g;
	int			b;
}				t_color;

typedef struct	s_fpoint
{
	double		x;
	double		y;
}				t_fpoint;

typedef struct	s_texture
{
	int			w;
	int			h;
	void		*tx_ptr;
	char		*tx_data;
}				t_texture;

typedef struct	s_line
{
	t_point		start;
	t_point		end;
}				t_line;
typedef struct	s_data
{
	void		*mlx_ptr;
	void		*win_ptr;
	void		*img_ptr;
	char		*img_data;
	int			*int_data;
	t_color		color;
	char		**map;
	double		pov;
	double		fov;
	int			cell;
	int			map_rows;
	int			map_cols;
	double		px;
	double		py;
	int			ppc;
	int			speed;
	void		**tx_ptrs;
	int			**tx_datas;
	int			tx_index;
	int			w[9];
	int			h[9];
	void		**an_ptrs;
	char		**an_datas;
	int			an_w[16];
	int			an_h[16];
	int			textures;
	double		angle;
	int			rounded_angle;
	void		*floor_tex;
	int			*floor_data;
	int			floor_w;
	int			floor_h;
	void		*ceiling_tex;
	int			*ceiling_data;
	int			ceiling_w;
	int			ceiling_h;
	double		floor_tex_w;
	double		floor_tex_h;
	int			shadows;
	int			fog;
	double		fog_value;
	int			x;
	int			bottom;
	double		dist;
	double		right_angle;
	double		height;
	double		hlen;
	double		vlen;
	int			spleet_screen[8];
}				t_data;

typedef struct	s_splt_scrn
{
	int			start;
	int			end;
	t_data		*data;
}				t_splt_scrn;

int				get_next_line(const int fd, char **line);
// int				motion_hook(int x, int y, void *param);
// int				key_hook(int keycode, void *param);
// void			pixel_put(int x, int y, t_data data);
// void			crosshair(t_data *data);
// void			put_line(t_point start, t_point end, t_data data);
// void			set_color(t_data *data, int r, int g, int b);
// int				mouse_hook(int button, int x, int y, void *param);
// void			crt_animation(t_data *data);
// void			animation_tex(int start, int end, int tx, t_data *data);
// void			is_error(int ac, char **av, t_data *data);
// void			floor_casting(t_data *data, double wall_dist,
// 								t_fpoint wall, int bottom);
// void			ceiling_casting(t_data *data,
// 								double wall_dist, t_fpoint wall, int top);
// void			line_texturing(int start, int end, double tx, t_data *data);
// void			crt_textures(char **av, int ac, t_data *data);
// void			crt_floor_and_ceiling_tex(t_data *data);
// void			toggle_fog_and_night(int keycode, t_data *data);
// void			nearest_wall(t_data *data, t_fpoint v, t_fpoint h, t_line l);
// void			define_h(t_data *data, t_fpoint v, t_fpoint h);
// void			critical_angles(t_fpoint *horiz, t_fpoint *vert, t_data *data);
// void			apply_weather(t_data *data, int index,
// 								int color, double intensity);
// void			threads_creation(t_data *data);
// void			ray_casting(t_data *data);
// int				is_valid_tx_index(t_data *data, t_fpoint intersec);

#endif
