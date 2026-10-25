#include <Arduino.h>
#include "config.h"

#define AUDIO_PIN PD2
#define STYLUS_PIN PA2
#define SWITCH_1 PC0
#define SWITCH_2 PC1

uint32_t halfPeriod = 0;
uint32_t lastToggle = 0;

bool audioState = false;

int8_t lastKey = 0;


int8_t getKey(int16_t adcValue);
void updateAudio();

void setup() {

    pinMode(AUDIO_PIN, OUTPUT);
    digitalWrite(AUDIO_PIN, LOW);

    pinMode(STYLUS_PIN, INPUT_ANALOG);

    pinMode(SWITCH_1, INPUT_PULLUP);
    pinMode(SWITCH_2, INPUT_PULLUP);
}

void loop() {

    updateAudio();

    int value = analogRead(STYLUS_PIN);
    int8_t key = getKey(value);

    if (key != lastKey) {
        lastKey = key;

        if (key == 0) {
            halfPeriod = 0;
            audioState = false;
            digitalWrite(AUDIO_PIN, LOW);
        }
        else {
            uint16_t frequency = noteFrequencies[key - 1];

            halfPeriod = 500000UL / frequency;
            lastToggle = micros();

        }

    }


}

int8_t getKey(int16_t adcValue) {

    if (adcValue < 25) {
        return 0;
    }

    int8_t key = (adcValue * 21L + 511) / 1023;

    if (key < 1 || key > NUM_KEYS) {
        return 0;
    }
    else {
        return key;
    }
}

void updateAudio() {

    if (halfPeriod == 0) {
        return;
    }

    uint32_t timeNow = micros();

    if (timeNow - lastToggle >= halfPeriod) {
        
        lastToggle = timeNow;

        audioState = !audioState;
        digitalWrite(AUDIO_PIN, audioState);
    }
}