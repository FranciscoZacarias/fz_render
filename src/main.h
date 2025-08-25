#ifndef MAIN_H
#define MAIN_H

#define DEBUG 1

///////////////////////////////////////////////////////
// @Section: fz_std
#include "fz_base.h"
#include "fz_opengl.h"

///////////////////////////////////////////////////////
// @Section: project

#define PROJECT_NAME S("fz_render")

// *.h
#include "camera.h"
#include "renderer.h"

// *.c
#include "camera.c"
#include "renderer.c"

global Camera3D    g_camera = {0};
global OS_Window   g_window = {0};
global Input_State g_input  = {0};

OS_Timer g_frame_timer   = {0};
u64      g_frame_counter = 0;
f32      g_delta_time    = 0.0f;
f32      g_fps           = 0.0f;

function void simulation();
function f32 oscilate(f32 bot, f32 top, f32 step, f32* amount);
function void input_update();

#endif // MAIN_H