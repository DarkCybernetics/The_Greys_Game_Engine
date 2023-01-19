//++++++++++++++++++++++++++++++++++++++++++Dependency Systems ++++++++++++++++++++++++++++++

#include <SDL2/SDL.h>
#include <Vulkan.h>
#include <OpenGL.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <SDL2/SDL_opengl.h>
#include <GL/gl.h>
#include<SDL2/SDL_mixer.h>
#include<SDL2/SDL_image.h>
#include<SDL2/SDL_net.h>
#include<SDL2/SDL_ttf.h>

//++++++++++++++++++++++++++++++++++ Game Classes +++++++++++++++++++++++++++++++++++++++++++
#include<display.h>
#include<audio.h>
#include<controlls.h>
#include<camera.h>
#include<shaderLoader.h>
#include<modelLoader.h>
#include<fileImporter.h>
#include<levelData.h>
#include<pathfinding.h>
#include<agentAI.h>
#include<objectPhysics.h>
#include<materials.h>
#include<light.h>
#include<gameEvents.h>
#include<shadows.h>


//===========================================================================================
typedef int32_t i32;
typedef uint32_t u32;
typedef int32_t b32;

#define Window_Width 640
#define Window_Height 480


class Game 
{

    public:
        int set_up_Game();// Starts the Game and checks to see if a game can start
        int running_Game(); // The Actual game loop event for the project
        int update_Game();// Ads changes to the camera co-ordanates or player movement
        void System_Check_Status();// Determines the OS and if hardware is compatiable
    private:
    
    protected:


};

// CLass to be update when SDL3 launches