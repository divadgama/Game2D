#pragma once

#include "Globals.h"
#include "Module.h"
#include "ModuleTextures.h"
#include "ModuleRender.h"


class ModuleScene : public Module
{
public:
	ModuleScene();
	~ModuleScene();

	bool Init();
	bool Start();
	update_status Update();
	bool CleanUp();


private:
	SDL_Texture* texturePlayer=NULL;


};

