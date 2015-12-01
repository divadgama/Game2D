#include "ModuleScene.h"
#include "ModuleTextures.h"
#include "ModuleRender.h"
#include "Application.h"

ModuleScene::ModuleScene()
{
}

//destructor
ModuleScene::~ModuleScene()
{
}


bool ModuleScene::Init(){

	LOG("Scene Init.............");
	return true;
}


bool ModuleScene::Start(){

	LOG("Scene Start.............");
	
	

    return true;
}

update_status ModuleScene::Update(){

	if (!(App->renderer->Blit(App->textures->Load("../Game/"SPRITE_FILE), 0, 0, NULL)))//render return true
		return UPDATE_ERROR;

	return UPDATE_CONTINUE;
}


bool ModuleScene::CleanUp(){

	LOG("Scene CleanUp.............");
	return true;
}