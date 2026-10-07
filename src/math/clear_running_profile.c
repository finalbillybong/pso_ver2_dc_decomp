#include "src/include/running_profile.h"

void clear_running_profile(RunningProfile *profile) {
    profile->acceleration = profile->deceleration = 0.0f;
    profile->initial_speed = profile->peak_speed = 0.0f;
    profile->ramp_time = profile->cruise_end = profile->duration = 0.0f;
    profile->time = 0.0f;
    profile->ramp_distance = profile->braking_start = profile->distance = 0.0f;
}
