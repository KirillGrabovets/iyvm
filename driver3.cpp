#include <unistd.h>
#include <cstdlib>

int main() {
    system("xdotool key Caps_Lock"); // симуляция нажатия CapsLock и NumLock
    system("xdotool key Num_Lock");  //

    return 0;
}
