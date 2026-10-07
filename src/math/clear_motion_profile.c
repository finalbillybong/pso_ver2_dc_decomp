#include "src/include/motion_profile.h"

void clear_motion_profile(MotionProfile *profile) {
    profile->acceleration = profile->deceleration = 0.0f;
    profile->speed = 0.0f;
    profile->ramp_time = profile->cruise_end = profile->duration = 0.0f;
    profile->ramp_distance = profile->braking_start = profile->distance = 0.0f;
}
