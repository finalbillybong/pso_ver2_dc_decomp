#include "src/include/motion_profile.h"

int motion_profile_finished(MotionProfile *profile, float time) {
    return time >= profile->duration;
}
