#include "src/include/running_profile.h"

int evaluate_running_profile(RunningProfile *profile, float time, float *position) {
    int done = 0;
    if (time < 0.0f) {
        *position = 0.0f;
    } else if (time < profile->ramp_time) {
        *position = (profile->acceleration * 0.5f * time + profile->initial_speed) * time;
    } else if (time < profile->cruise_end) {
        *position = (time - profile->ramp_time) * profile->peak_speed + profile->ramp_distance;
    } else if (time < profile->duration) {
        float remaining = profile->duration - time;
        *position = profile->deceleration * 0.5f * remaining * remaining + profile->distance;
    } else {
        *position = profile->distance;
        done = 1;
    }
    return done;
}
