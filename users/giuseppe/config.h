// RGB Matrix Config
// #define RGB_MATRIX_KEYPRESSES // reacts to keypresses
// #define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
// #define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
#define RGB_DISABLE_WHEN_USB_SUSPENDED false // turn off effects when suspended
// #define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
// #define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200 // limits maximum brightness of LEDs to 200 out of 255. If not defined maximum brightness is set to 255
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR // Sets the default mode, if none has been set

// Tap Dance Config
#define TAPPING_TERM 175

// Override the Grave Esc feature when ALT is pressed. This allows for CMD-ALT-ESC
#define GRAVE_ESC_ALT_OVERRIDE

// Override the Grave Esc feature when SHIFT is pressed. Cause I need SHIFT-ESC in Slack.
#define GRAVE_ESC_SHIFT_OVERRIDE
