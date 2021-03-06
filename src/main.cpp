#include "SDL2/SDL.h"
#include <iostream>

int main(int argc, char *argv[])
{
  if(SDL_Init(SDL_INIT_VIDEO) > 0)
  {
    std::cout << "FAILED TO INITIALIZE SDL. SDL_ERROR: " << SDL_GetError() <<std::endl;
    return -1;
  }

  SDL_Window *window = SDL_CreateWindow(
    "SDL2Test",
    SDL_WINDOWPOS_UNDEFINED,
    SDL_WINDOWPOS_UNDEFINED,
    640,
    480,
    0
  );

  SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
  SDL_RenderClear(renderer);
  SDL_RenderPresent(renderer);

  SDL_Delay(3000);

  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}
