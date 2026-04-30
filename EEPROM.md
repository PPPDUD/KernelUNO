# EEPROM FAQ
## How do I save my work to EEPROM in Coconix?
Run the `sync` command.

## How do I reset the filesystem to its default state?
Run the `reset-fs` command, which overwrites your EEPROM data and then reboots.

## How do I check if EEPROM storage is supported in my copy of Coconix?
Run the `build-info` command and look at the `NO_EEPROM` entry. In setups where EEPROM storage is disabled, the associated number will be nonzero.

## Why is EEPROM disabled on my board even though I set `NO_EEPROM` to 0?
On some boards, like the Arduino Due or Adafruit Metro M0 Express, the `EEPROM.h` library isn't available, usually because the affected board doesn't have an EEPROM chip; when this happens, Coconix automatically disables EEPROM support at build-time.
