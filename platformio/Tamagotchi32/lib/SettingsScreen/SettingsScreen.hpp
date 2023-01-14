#ifndef __SETTINGSSCREEN_H__
#define __SETTINGSSCREEN_H__

#include <BaseScreen.hpp>

class SettingsScreen: public BaseScreen {
    public:
        SettingsScreen();
        void onButtonBPressed();
        inline static const char* display_options[2] = {
            "  RESET"
            "  Exit"
        };
};


#endif // __SETTINGSSCREEN_H__