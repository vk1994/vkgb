/* not sure at what point in gb enulation do we launch the UI... 
but w edo it surely so keeping it here. 
for now it contains a function that when called just launches
a blank SDL window.
Another reason to keep it here was to get all dependecy ready
and here SDL2 was needed
*/
#include <SDL2/SDL.h>
#include <stdbool.h>

// open SDL window
void display_window();