#include "main.h"

int main() {
    
    CoreDockSendNotification(CFSTR("com.apple.launchpad.toggle"));
    return 0;
}

