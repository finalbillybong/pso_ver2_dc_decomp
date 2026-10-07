#include "src/include/running_profile.h"

#define root_at ((float (*)(float))0x8c37f6c0)

void configure_running_profile(RunningProfile *profile, float acceleration,
                               float deceleration, float distance,
                               float initial_speed, float peak_speed) {
    float ramp_distance, brake_distance;
    profile->time = 0.0f;
    profile->acceleration = acceleration;
    if (profile->acceleration <= 0.0f) profile->acceleration = 0.1f;
    profile->deceleration = deceleration;
    if (profile->deceleration >= 0.0f) profile->deceleration = -0.1f;
    profile->distance = distance;
    profile->peak_speed = peak_speed;
    profile->initial_speed = initial_speed;
    peak_speed *= peak_speed;
    if (profile->initial_speed > profile->peak_speed) {
        profile->acceleration = profile->deceleration;
    }
    ramp_distance = (peak_speed - profile->initial_speed * profile->initial_speed) *
                    0.5f / profile->acceleration;
    brake_distance = profile->deceleration;
    brake_distance = peak_speed * (-0.5f) / brake_distance;
    if (profile->distance <= ramp_distance + brake_distance) {
        if (profile->initial_speed > profile->peak_speed) {
            profile->deceleration = profile->initial_speed * profile->initial_speed *
                                    (-0.5f) / profile->distance;
            profile->ramp_time = profile->cruise_end = profile->ramp_distance = profile->braking_start = 0.0f;
            profile->duration = -profile->initial_speed / profile->deceleration;
        } else {
            profile->peak_speed = root_at(profile->acceleration * 2.0f * profile->deceleration *
                                         profile->distance / (profile->deceleration - profile->acceleration));
            peak_speed = profile->peak_speed * profile->peak_speed;
            profile->ramp_time = profile->cruise_end = profile->peak_speed / profile->acceleration;
            profile->ramp_distance = profile->braking_start = peak_speed * 0.5f / profile->acceleration;
            profile->duration = -profile->peak_speed / profile->deceleration + profile->cruise_end;
        }
    } else {
        profile->ramp_distance = ramp_distance;
        profile->ramp_time = (profile->peak_speed - profile->initial_speed) / profile->acceleration;
        profile->braking_start = profile->distance - brake_distance;
        profile->cruise_end = (profile->braking_start - ramp_distance) / profile->peak_speed + profile->ramp_time;
        profile->duration = -profile->peak_speed / profile->deceleration + profile->cruise_end;
    }
}
