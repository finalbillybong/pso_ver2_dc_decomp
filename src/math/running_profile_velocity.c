#include "src/include/running_profile.h"

float running_profile_velocity(RunningProfile *profile) {
    float time = profile->time;
    if (time < 0.0f) return 0.0f;
    if (time < profile->ramp_time) {
        return profile->acceleration * time + profile->initial_speed;
    }
    if (time < profile->cruise_end) return profile->peak_speed;
    if (time < profile->duration) {
        time -= profile->cruise_end;
        time = profile->deceleration * time;
        return time + profile->peak_speed;
    }
    return 0.0f;
}
