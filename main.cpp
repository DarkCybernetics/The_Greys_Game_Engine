#include <iostream>
#include <SDL2/SDL.h>
#include <Vulkan.h>
#include <OpenGL.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <SDL2/SDL_opengl.h>
#include <GL/gl.h>

// Note: may need GLAD for Windows settup - Device specific<GPU (NVIDIA/AMD/INTEL/etc.)
using namespace std;
// Error Checking Included
int main()
{
//https://github.com/mborgerson/basic_sdl2_gl    
// Mod this to get started
cout<<"Map data did not load";
cout<<"UV map data was not present";
cout<<"Fog not active ";
cout<<"Draw distance not working";
cout<<"Error Loading Shader Files";
cout<<"Error Loading Resource Files";
cout <<"Error Loading Audio Files";
cout <<"Fail to load 3D Graphics Package";
cout<<"Game Controller/ GamePad not plugged in";
cout <<"Error Starting SDL2 , dll missing";
cout <<"Audio Format not supported";
cout<<"3D models Fail to load";
cout<< "Depth sorting unsuccessful";
cout<< "Motion Blur not working";
cout<< "Particle System not active";
cout<<"Refraction not working";
cout <<"Reflection are not working";
cout<< "Surfaces are not transparent";
cout<<"Raytracing not working";
cout <<"Obient Occulsion not working";
cout <<"3D Colliders not working";
cout<< "Spot Lights not working";
cout<< "Far 3d objects are not billboarding";
cout<< "Level of Detail effects not working on 3D models";
cout<<" SHadows not active";
cout<< "Pathfinding not working for 3D objects";
cout<<" 3D vehicles and paths not active";
cout << "3D Elevators and doors not working";
cout << "Game events and Switches not working";
cout<<"Failed to load video";
cout<<"Blinn Phong Shading not working"
cout<< "video files not supported";
cout << "keyboard not plugged in";
cout<<"Mouse not working";
cout<<"Game Engine Running" <<endl;   
cout<<"Game Engine Exited and Closed Successfully"<<endl;
// Resolution needs to Jump is x2 in the X,Y axis 
// default resolution set 1
// ( 640x480 ) ( 800x600 )  ( 1200x800 ) (  ) (  )  (  ) (  )  (  ) (  )  (  ) (  )  (  ) (  )
// To compile with gcc:  (tested on Ubuntu 14.04 64bit):
//	 g++ sdl2_opengl.cpp -lSDL2 -lGL
// To compile with msvc: (tested on Windows 7 64bit)
//   cl sdl2_opengl.cpp /I C:\sdl2path\include /link C:\path\SDL2.lib C:\path\SDL2main.lib /SUBSYSTEM:CONSOLE /NODEFAULTLIB:libcmtd.lib opengl32.lib


typedef int32_t i32;
typedef uint32_t u32;
typedef int32_t b32;

#define Window_Width 640
#define Window_Height 480

int main (int ArgCount, char **Args)
{

  u32 WindowFlags = SDL_WINDOW_OPENGL;
  SDL_Window *Window = SDL_CreateWindow("The Greys", 0, 0, Window_Width, Window_Height, WindowFlags);
  assert(Window);
  SDL_GLContext Context = SDL_GL_CreateContext(Window);
  
  b32 Running = 1;
  b32 FullScreen = 0;
  while (Running)
  {
    SDL_Event Event;
    while (SDL_PollEvent(&Event))
    {
      if (Event.type == SDL_KEYDOWN)
      {
        switch (Event.key.keysym.sym)
        {
          case SDLK_ESCAPE:
            Running = 0;
            break;
          case 'f':
            FullScreen = !FullScreen;
            if (FullScreen)
            {
              SDL_SetWindowFullscreen(Window, WindowFlags | SDL_WINDOW_FULLSCREEN_DESKTOP);
            }
            else
            {
              SDL_SetWindowFullscreen(Window, WindowFlags);
            }
            break;
          default:
            break;
        }
      }
      else if (Event.type == SDL_QUIT)
      {
        Running = 0;
      }
    }

    glViewport(0, 0, WinWidth, WinHeight);
    glClearColor(1.f, 0.f, 1.f, 0.f);
    glClear(GL_COLOR_BUFFER_BIT);

    SDL_GL_SwapWindow(Window);
  }
    return 0;
}