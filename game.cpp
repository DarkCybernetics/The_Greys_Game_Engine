 
  void System_Check_Status()
{
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

}
 
  int set_up_Game()
  {
    // function attemps to start the program and configure hardware if successful then it tries to 
    // create a window and create the OpenGL context etc.
    System_Check_Status();

    u32 WindowFlags = SDL_WINDOW_OPENGL;
     SDL_Window *Window = SDL_CreateWindow("The Greys", 0, 0, Window_Width, Window_Height, WindowFlags);
     assert(Window);
    SDL_GLContext Context = SDL_GL_CreateContext(Window);
    
   // if everything above goes ok the the follow function will run to start the game loop 
    running_Game()
  }

  int running_Game()
  {
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

        glViewport(0, 0, Window_Width, Window_Height);
        glClearColor(1.f, 0.f, 1.f, 0.f);
        glClear(GL_COLOR_BUFFER_BIT);

        SDL_GL_SwapWindow(Window);
        // This Function will be called at the end of each loop else null after buttons are pressed
        // or if game objects move such as the Camera or the Skybox moves
        update_Game();
    }
  }

 int update_Game()
  {



  }
// Error Checking Included
// Function: System_Check_Status(void): returns sting messages to console
// This function will check to see if all the following error messages are true or false.
// Given the results the system will hopefully pick a working configuration to start the game 
// Else the program will terminate and give information about exactly what it things is wrong.
//https://github.com/mborgerson/basic_sdl2_gl    
// Mod this to get started
