
#include <iostream>
#include <game.h>
// Note: may need GLAD for Windows settup - Device specific<GPU (NVIDIA/AMD/INTEL/etc.)
using namespace std;

// Resolution needs to Jump is x2 in the X,Y axis 
// default resolution set 1
// ( 640x480 ) ( 800x600 )  ( 1200x800 ) (  ) (  )  (  ) (  )  (  ) (  )  (  ) (  )  (  ) (  )
// To compile with gcc:  (tested on Ubuntu 14.04 64bit):
//	 g++ sdl2_opengl.cpp -lSDL2 -lGL
// To compile with msvc: (tested on Windows 7 64bit)
//   cl sdl2_opengl.cpp /I C:\sdl2path\include /link C:\path\SDL2.lib C:\path\SDL2main.lib /SUBSYSTEM:CONSOLE /NODEFAULTLIB:libcmtd.lib opengl32.lib

// Entry Point for our program
int main (int ArgCount, char **Args)
{

  Game game
  game.set_up_Game();

    return 0;
}