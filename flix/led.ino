// Copyright (c) 2023 Oleg Kalachev <okalachev@gmail.com>
// Repository: https://github.com/okalachev/flix

#define BLINK_PERIOD 500000

void setupLED()
{
	pinMode(LED_BUILTIN, OUTPUT);
}

void setLED(bool on)
{
	digitalWrite(LED_BUILTIN, on ? HIGH : LOW);
}

void blinkLED()
{
	setLED(micros() / BLINK_PERIOD % 2);
}
