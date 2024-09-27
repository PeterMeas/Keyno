#include "/Users/test/Desktop/User/include/utility.h"
#include <termios.h>
#include <unistd.h>

void disableEcho() {
    termios tty;
    tcgetattr(STDIN_FILENO, &tty);

    tty.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &tty);
}

void enableEcho() {
    termios tty;
    tcgetattr(STDIN_FILENO, &tty);

    tty.c_lflag |= ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &tty);
}
