#include <rkb/keyboard.h>
#include <iostream>
#include <sstream>

using namespace std;

void callback(const int _vkCode, const bool _up) {
    cout << (_up ? "UP" : "DOWN") << ":" << _vkCode << endl;
    if (_vkCode == 0x1B) {
        // terminate on ESC
        rkb::stop();
    }
}

int WINAPI main() {
    rkb::scan(callback);
}
