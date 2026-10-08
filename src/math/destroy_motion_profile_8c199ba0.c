#include "src/include/motion_profile.h"

#define release_at ((void (*)(void *))0x8c011ed8)

/* Preserve the observed signed-short deleting-destructor control. */
MotionProfile *destroy_motion_profile_8c199ba0(MotionProfile *profile, short release) {
    if (profile && release > 0) release_at(profile);
    return profile;
}
