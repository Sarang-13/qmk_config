#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _LOWER,
    _RAISE,
    _FN,
    _NUM
};

#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT(
    // | TAB |  Q  |  W  |  E  |  R  |  T  |					|  Y  |   U   |   I   |   O   |   P   |   FN  |
       KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,      	  			KC_Y,   KC_U,   KC_I, KC_O  ,   KC_P, MO(_FN),

    // | CTRL |  A  |  S  |  D  |  F  |  G  |					|  H  |   J   |   K   |   L   |   :   |   '    |
      KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G,      	  			KC_H,   KC_J,   KC_K,   KC_L,KC_SCLN, KC_QUOT,

    // | ALT |   Z |   X |   C |   V |   B |   					|   N |   M |   , |   . |   / | ESC  |
       KC_LALT,KC_Z, KC_X, KC_C, KC_V, KC_B, XXXXXXX, 			XXXXXXX , KC_N, KC_M, KC_COMM,KC_DOT, KC_SLSH,KC_ESC,
	
    //                	       | SHIFT |  LWR |  BSPC  |   		| ENT  |  RSE  | WIN   |
                    		KC_LSFT, LOWER, KC_BSPC,     	     LT(_RAISE, KC_ENT), LT(_NUM, KC_SPC), KC_LGUI
),

[_RAISE] = LAYOUT(
    // | ESC |   \    |   ~   |   [   |   ]   |   =  |   			|     |  PGUP  |  ↑  |  PGDN  |       |  DEL |
       KC_ESC, KC_BSLS,KC_TILD,KC_LBRC,KC_RBRC,KC_EQL,    			_______,KC_PGUP,KC_UP, KC_PGDN,_______,KC_DEL,

    // |      |   |   |   `  |    +   |   -   |   _   |   			| HOME |  ←    |  ↓    |  →    | END  |     |
       _______,KC_PIPE,KC_GRV, KC_PLUS,KC_MINS,KC_UNDS,   			KC_HOME,KC_LEFT,KC_DOWN,KC_RGHT,KC_END,_______,

    // |      |       |       |   {   |   }   | ALT+F4 | 			|     |        LDESK       |        RDESK       |       |       |       |
       _______,_______,_______,KC_LCBR,KC_RCBR,LALT(KC_F4), XXXXXXX,    XXXXXXX,_______,LCTL(LGUI(KC_LEFT)),LCTL(LGUI(KC_RIGHT)),_______,_______,_______,

    //                		   |   --  |  --    |  --   |   	|  --  |  --  |   --  |
                    	           _______,_______,_______,      	 _______,_______,_______
),

[_NUM] = LAYOUT(
    // |      |   !   |   @  |    #   |   $   |    %   |   			|   ^  |   &   |   *   |   (   |   )   | BSPC |
       _______,KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,   			KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_BSPC,

    // |     |    1   |   2  |  3  |  4  |  5  |   				|   6 |  7  |  8  |  9  |  0  |   `   |
       _______,  KC_1 , KC_2 , KC_3, KC_4, KC_5,      				 KC_6 , KC_7, KC_8, KC_9, KC_0, KC_GRV,

    // |     |     |     |     |     |     |   					|     |     |     |     |     |     |
       _______,_______,_______,_______,_______,_______,   XXXXXXX,      XXXXXXX, _______,_______,_______,_______,_______,_______,

    //                		|    |  WIN  |     |   			|     |     |     |
                    	      _______,KC_LGUI,_______,      		_______,_______,_______
),

[_FN] = LAYOUT(
    // |      |  F1  |  F2  |  F3  |  F4  |  F5  |   				|  F6 |  F7  |  F8  |  F9  |  F10  |  F11  |
       _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,      			KC_F6 , KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,

    // |      |      |      |      |      |      |   				|     |      |      |      |       |  F12  |
       _______,_______,_______,_______,_______,_______,				_______,_______,_______,_______,_______,KC_F12,

    // |      |      |      |      |      |      |   				|      |      |     |      |       |       |
       _______,_______,_______,_______,_______,_______,  XXXXXXX,       XXXXXXX, _______,_______,_______,_______,_______,_______,

    //                			|      |       |       |   		|     |     |     |
                    			_______,_______,_______,        _______,_______,_______
)

};
