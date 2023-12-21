#include <stdio.h>      // Standard Input-Output header
#include <SDL.h>        // SDL header
#include <stdlib.h>     // Standard Library header

// Compilation reminder
// gcc src/main.c bin/tryit.exe -I include -L Lib -lmingw32 -lSDL2main -lSDL2main

int main(int argc, char **argv) {   // Main function accepting command line arguments

    SDL_Window *window = NULL;   // Declare a window pointer and initialize to NULL
    
    // Initialize SDL for video subsystem; check for errors
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        SDL_Log("ERROR: SDL initialization > %s \n", SDL_GetError());  // Print error message
        exit(EXIT_FAILURE);   // Exit the program with failure status
    }
    
    // Create a window with given title and dimensions
    window = SDL_CreateWindow("The SKY's Window",
                              SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
                              
    // Check if window creation was successful
    if (window == NULL)
    {
        SDL_Log("ERROR: Failed to create window > %s \n", SDL_GetError());  // Print error message
        exit(EXIT_FAILURE);   // Exit the program with failure status
    }
    
    SDL_Delay(5000);    // Pause execution for 5000 milliseconds
    SDL_Quit();         // Clean up SDL resources

    return EXIT_SUCCESS;    // Return successful execution status
}
