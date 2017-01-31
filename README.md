# GroveOnOffActuator
Generic On/Off Actuator Library for Arduino + Grove shield

## Example
```c++
#include <GroveOnOffActuator.h>

GroveOnOffActuator led;

void setup() {
  led.initialize(GROVE_D8);
  led.turnOff();
}

void loop() {
  led.toggle();
  delay(1000);
}
```

## Documentation

###`void initialize(GrovePin pins)`
Initialize the sensor before using it.

Parameters:
- `pins`: Must be a digital socket (GROVE_D2 to GROVE_D8)

###`void turnOn()`
Turn the actuator on

###`void turnOff()`
Turn the actuator off

###`void toggle()`
Change the actuator state (on to off or off to on)