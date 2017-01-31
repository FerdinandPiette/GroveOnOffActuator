#ifndef GroveOnOffActuator_H
#define GroveOnOffActuator_H

#include <Arduino.h>
#include "../Grove/Grove.h"

class GroveOnOffActuator {
	private:
		unsigned int _pin;
		boolean _state;

	protected:
		void _refresh();
		
	public:
		GroveOnOffActuator();
		virtual ~GroveOnOffActuator() {};
		void initialize(GrovePin pins);
		void turnOn();
		void turnOff();
		void toggle();
};

#endif