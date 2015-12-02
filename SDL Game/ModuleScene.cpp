#include "ModuleScene.h"
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
	
	texturePlayer = App->textures->Load("../Game/"SPRITE_FILE);// load texture player 
	if (texturePlayer==NULL){
		LOG("Texture player don't load")
		return false;
	}

    return true;
}

update_status ModuleScene::Update(){

	if (!(App->renderer->Blit(texturePlayer, 0, 0, NULL)))//render return true
		return UPDATE_ERROR;

	return UPDATE_CONTINUE;
}


bool ModuleScene::CleanUp(){

	LOG("Scene CleanUp.............");
	return true;
}