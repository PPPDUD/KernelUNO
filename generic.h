// Conservative presets for a generic Arduino clone.
// This disables a lot of useful but hardware-dependent functionality, like the reboot command and getting the amount of free memory.
#define NO_MEMORY_CHECK 1
#define NO_SOFT_RESET 1
#define NO_TONE_FUNC 1
#define HW_NAME "Generic Arduino board"