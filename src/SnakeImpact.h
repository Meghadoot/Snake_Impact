/*****************************************************************************
 * Snake Impact - Terminal game written in C.
  
  Powered by maggot implementation Gonzalo Ciruelos

  Copyright (C) 2018  Meghadoot Gardi.  All right reserved.

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <https://www.gnu.org/licenses/>.

 ******************************************************************************/

#ifndef SNAKE_IMPACT_H
#define SNAKE_IMPACT_H

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

#define MAP_HEIGHT  21
#define KEY_ESC     27
#define FOOD_SYMBOL '*'
#define WALL_SYMBOL '$'
#define GIFT_SYMBOL '@'
#define VERSION "0.0.1"

void init_snake ();
void init_map ();
int printmap ();
int istheresnake (int y, int x);
int getch ();
int kbhit (void);
void move (unsigned int map_height);
void turn (char input, int map_height);
int lenofsnake ();
void changemode (int);
void newfood (unsigned int map_height);
void newgift (unsigned int map_height);
void grow (void);
void info (void);
void end (bool dead);
void paused (void);
void wait_for_key (char k, bool any);

// Handler Functions
int rand_lim (int limit);
double my_sqrt (float n);


#endif // SNAKE_IMPACT_H

