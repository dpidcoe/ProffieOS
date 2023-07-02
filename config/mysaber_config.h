#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 2
#define NUM_BUTTONS 2
#define VOLUME 1000  //Default 1000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 1.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD

#define ORIENTATION ORIENTATION_USB_TOWARDS_BLADE

#endif



#ifdef CONFIG_PRESETS
Preset presets[] = {
  
  { "dpidz0r", "tracks/mars.wav",
    StylePtr<InOutHelper<EASYBLADE(OnSpark<GREEN>, Orange), 300, 800> >(),
    StyleNormalPtr<WHITE, WHITE, 300, 800>(), "green"},
  { "RgueCmdr", "tracks/mercury.wav",
    StyleRainbowPtr<300, 800>(),
    StyleRainbowPtr<300, 800>(), "rainbow"},
  { "TthCrstl", "tracks/mars.wav",
    &style_charging,
    StyleNormalPtr<BLACK, BLACK, 300, 800>(), "Battery\nLevel"}
   /*{ "SmthFuzz", "tracks/mars.wav",
    StyleNormalPtr<Gradient<RED, BLUE>, Gradient<CYAN, YELLOW>, 300, 800>(),
    StyleNormalPtr<Gradient<RED, BLUE>, Gradient<CYAN, YELLOW>, 300, 800>(), "gradient"},
   { "TeensySF", "tracks/venus.wav",
    StyleNormalPtr<CYAN, WHITE, 300, 800>(),
    StyleNormalPtr<CYAN, WHITE, 300, 800>(), "cyan"},
   { "SmthJedi", "tracks/mars.wav",
    StylePtr<InOutSparkTip<EASYBLADE(BLUE, WHITE), 300, 800> >(),
    StylePtr<InOutSparkTip<EASYBLADE(BLUE, WHITE), 300, 800> >(), "blue"},
   { "SmthGrey", "tracks/mercury.wav",
    StyleFirePtr<RED, YELLOW, 0>(),
    StyleFirePtr<RED, YELLOW, 1>(), "fire"},
   { "SmthFuzz", "tracks/uranus.wav",
    StyleNormalPtr<RED, WHITE, 300, 800>(),
    StyleNormalPtr<RED, WHITE, 300, 800>(), "red"},
   { "RgueCmdr", "tracks/venus.wav",
    StyleFirePtr<BLUE, CYAN, 0>(),
    StyleFirePtr<BLUE, CYAN, 1>(), "blue fire"},
   { "TthCrstl", "tracks/mars.wav",
    StylePtr<InOutHelper<EASYBLADE(OnSpark<GREEN>, WHITE), 300, 800> >(),
    StylePtr<InOutHelper<EASYBLADE(OnSpark<GREEN>, WHITE), 300, 800> >(), "green"},
   { "SmthGrey", "tracks/venus.wav",
    StylePtr<InOutSparkTip<EASYBLADE(MAGENTA, WHITE), 300, 800> >(),
    StylePtr<InOutSparkTip<EASYBLADE(MAGENTA, WHITE), 300, 800> >(), "magenta"},
   { "RgueCmdr", "tracks/mercury.wav",
    StyleRainbowPtr<300, 800>(),
    StyleRainbowPtr<300, 800>(), "rainbow"},
   { "TthCrstl", "tracks/mars.wav",
    &style_charging,
    StyleNormalPtr<BLACK, BLACK, 300, 800>(), "Battery\nLevel"}*/
};
BladeConfig blades[] = {
 { 0, WS2811BladePtr<115, WS2811_ACTUALLY_800kHz | WS2811_GRB>(),
    WS2811BladePtr<11, WS2811_580kHz, blade2Pin, PowerPINS<bladePowerPin6> >()
  , CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif