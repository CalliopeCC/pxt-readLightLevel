#include "pxt.h"

//% color=#B4009E weight=99 icon="\uf192"
namespace input {
  
     /**
     * Reads the light level applied to the LED screen in a range from ``0`` (dark) to ``255`` bright.
     */
    //% help=input/light-level weight=59
    //% blockId=device_get_light_level_alternative block="light level alternative" blockGap=8
    //% parts="ledmatrix"
    //% group="Sensors"
    int lightLevel_alt() {
        int light, mode;

        mode = uBit.display.getDisplayMode();
        uBit.display.setDisplayMode(DISPLAY_MODE_BLACK_AND_WHITE_LIGHT_SENSE);
        uBit.sleep(50);
        light = uBit.display.readLightLevel();
        uBit.display.setDisplayMode((DisplayMode) mode);
 
        return light;
    }
  
}
