#include "src/include/running_profile.h"

#define release_at ((void (*)(void *))0x8c011ed8)

/* Preserve the observed signed-short deleting-destructor control. */
RunningProfile *destroy_running_profile(RunningProfile *profile, short release) {
    if (profile && release > 0) release_at(profile);
    return profile;
}
