#pragma once

#include "Globals.h"
#include "Module.h"


class ModuleScene : public Module
{
public:
	ModuleScene();
	~ModuleScene();

	bool Init();
	bool Start();
	update_status Update();
	bool CleanUp();




};

