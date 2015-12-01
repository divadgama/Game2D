#pragma once

#include "Globals.h"
#include "Module.h"
#include "SDL/include/SDL.h"

#include "SDL_mixer/include/SDL_mixer.h"
#pragma comment( lib, "SDL_mixer/lib/x86/SDL2_mixer.lib")

class ModuleSound: public Module
{
public:
	ModuleSound();
	~ModuleSound();

	bool Init();
	bool Start();
	bool CleanUp();

public:
	bool SoundJump();

private:
	Mix_Music *musicGame = NULL;
	Mix_Chunk *jump = NULL;
	int channel = 0;
};

