#include "GroveOnOffActuator.h"

GroveOnOffActuator::GroveOnOffActuator() {
	this->_state = false;
}

void GroveOnOffActuator::_refresh() {
	digitalWrite(this->_pin, this->_state);
}

void GroveOnOffActuator::initialize(GrovePin pins) {
	this->_pin = pins.pin2;	
	pinMode(this->_pin, OUTPUT);
	this->_refresh();
}

void GroveOnOffActuator::turnOn() {
	this->_state = true;
	this->_refresh();
}

void GroveOnOffActuator::turnOff() {
	this->_state = false;
	this->_refresh();
}

void GroveOnOffActuator::toggle() {
	this->_state ^= true;
	this->_refresh();
}
