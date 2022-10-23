#pragma once

#ifndef Bitmaps_H
#define Bitmaps_H

#include <SPI.h>
#include <ImageFormat.hpp>

namespace Bitmaps {
	inline constexpr unsigned char food_menu_icon[32] PROGMEM = {
		// 'food_main_menu, 16x16px
		0xff, 0xff, 0x80, 0x01, 0xaa, 0x61, 0xaa, 0x61, 0xaa, 0x71, 0xbe, 0x71, 0x9c, 0x71, 0x9c, 0x79, 
		0x9c, 0x79, 0x9c, 0x71, 0x9c, 0x41, 0x9c, 0x41, 0x9c, 0x41, 0x80, 0x01, 0x80, 0x01, 0xff, 0xff, 
	};
	
	inline constexpr ImageFormat food_menu_icon_image {
        width: 16,
        height: 16,
        data: food_menu_icon
    };

	inline constexpr unsigned char light_menu_icon[32] PROGMEM = {
		// 'light_main_menu, 16x16px
		0xff, 0xff, 0xa0, 0x05, 0x93, 0xc9, 0x84, 0x21, 0xa8, 0x15, 0x89, 0x91, 0x8a, 0x51, 0xa9, 0x95, 
		0x8d, 0xb1, 0x87, 0xe1, 0x90, 0x09, 0xa3, 0xc5, 0x80, 0x01, 0x83, 0xc1, 0x80, 0x01, 0xff, 0xff
	};

	inline constexpr ImageFormat light_menu_icon_image {
        width: 16,
        height: 16,
        data: light_menu_icon
    };

	inline constexpr unsigned char play_menu_icon[32] PROGMEM = {
			// 'play_main_menu, 16x16px
		0xff, 0xff, 0x80, 0x01, 0x8c, 0x01, 0x9e, 0x01, 0x9e, 0x1d, 0x8c, 0x3d, 0x80, 0x7d, 0x80, 0xf9, 
		0x81, 0xf1, 0x83, 0xe1, 0x83, 0xc1, 0x8f, 0x81, 0x8e, 0x01, 0x86, 0x01, 0x80, 0x01, 0xff, 0xff, 
	};

	inline constexpr ImageFormat play_menu_icon_image {
        width: 16,
        height: 16,
        data: light_menu_icon
    };

	inline constexpr unsigned char medicine_menu_icon[32] PROGMEM = {
		// 'medicine_main_menu, 16x16px
		0xff, 0xff, 0x80, 0x01, 0x80, 0xa1, 0x80, 0x51, 0x80, 0x69, 0x80, 0xb5, 0x81, 0x19, 0x82, 0x25, 
		0x87, 0x41, 0x87, 0x81, 0x87, 0x01, 0x88, 0x01, 0x90, 0x01, 0x80, 0x01, 0x80, 0x01, 0xff, 0xff, 
	};

	inline constexpr ImageFormat medicine_menu_icon_image {
        width: 16,
        height: 16,
        data: medicine_menu_icon
    };

	inline constexpr unsigned char poop_menu_icon[32] PROGMEM = {
		// 'poop_main_menu, 16x16px
		0xff, 0xff, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x83, 0x01, 0x8c, 0x81, 0x9c, 0x81, 
		0x84, 0xe5, 0x8c, 0x1d, 0x98, 0x05, 0x98, 0x0d, 0x8f, 0xf9, 0x80, 0x01, 0x80, 0x01, 0xff, 0xff, 	
	};

	inline constexpr ImageFormat poop_menu_icon_image {
        width: 16,
        height: 16,
        data: poop_menu_icon
    };

	inline constexpr unsigned char stats_menu_icon[32] PROGMEM = {
		// 'stats_main_menu, 16x16px
		0xff, 0xff, 0x80, 0x01, 0x80, 0x01, 0x87, 0xe1, 0x9c, 0x39, 0xa2, 0x45, 0xa8, 0x15, 0xa0, 0x05, 
		0xa6, 0x05, 0xa7, 0x05, 0x93, 0x89, 0x91, 0x89, 0x90, 0x09, 0x8f, 0xf1, 0x80, 0x01, 0xff, 0xff, 
	};

	inline constexpr ImageFormat stats_menu_icon_image {
        width: 16,
        height: 16,
        data: stats_menu_icon
    };

	inline constexpr unsigned char dicipline_menu_icon[32] PROGMEM = {
		// 'dicipline_main_menu, 16x16px
		0xff, 0xff, 0x80, 0x01, 0x80, 0x09, 0x87, 0x85, 0x9c, 0xd1, 0x90, 0x49, 0xb0, 0x85, 0xa1, 0x15, 
		0xa2, 0x05, 0xb1, 0xe1, 0x90, 0x21, 0x9c, 0xe1, 0x87, 0x81, 0x80, 0x01, 0x80, 0x01, 0xff, 0xff, 
	};

	inline constexpr ImageFormat dicipline_menu_icon_image {
        width: 16,
        height: 16,
        data: dicipline_menu_icon
    };

	inline constexpr unsigned char attention_menu_icon[32] PROGMEM = {
		// 'attention_main_menu, 16x16px
		0xff, 0xff, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x88, 0x01, 0x81, 0x01, 0xa0, 0x39, 0xa0, 0x0d, 
		0x90, 0x05, 0x8e, 0x05, 0x80, 0x41, 0x80, 0x01, 0x80, 0x11, 0x80, 0x01, 0x80, 0x01, 0xff, 0xff, 
	};

	inline const unsigned char* options_list[8] = {
		food_menu_icon,
		light_menu_icon,
		play_menu_icon,
		medicine_menu_icon,
		poop_menu_icon,
		stats_menu_icon,
		dicipline_menu_icon,
		attention_menu_icon
	};

	inline constexpr unsigned char poop_icon [6] PROGMEM = {
	// 'poopicon, 6x6px
	0x48, 0x90, 0x48, 0x30, 0x78, 0xfc
	};

	inline constexpr ImageFormat poop_icon_image {
        width: 6,
        height: 6,
        data: poop_icon
    };

	inline constexpr unsigned char stone_icon [6] PROGMEM = {
	// 'stone, 6x6px
	0x78, 0xfc, 0xfc, 0xfc, 0x78, 0x00
	};

	inline constexpr ImageFormat stone_icon_image {
        width: 6,
        height: 6,
        data: stone_icon
    };
};

#endif