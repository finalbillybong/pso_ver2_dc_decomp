#include "src/include/motion_profile.h"

#define clear_at ((void (*)(MotionProfile *))0x8c04291c)

MotionProfile *construct_motion_profile(MotionProfile *profile) {
    clear_at(profile);
    return profile;
}
