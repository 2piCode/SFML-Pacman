#ifndef _STDAFX_H_
#define _STDAFX_H_

#define BLOCK_SIZE 32.f

#define size_map_y 26
#define size_map_x 26

#define frame_eyes_right sf::IntRect(64, 0, 32, 32)
#define frame_eyes_center sf::IntRect(32, 0, 32, 32)
#define frame_eyes_left sf::IntRect(0, 0, 32, 32)

#include "Unit.h"
#include <SFML/Graphics.hpp>
#include <time.h>
#include "Pacman.h"
#include "Map.h"
#include "Monster.h"
#include "GameClass.h"
#include "Direction.h"
#include "Component.h"

#endif