#include "src/include/motion_profile.h"

#define root_at ((float (*)(float))0x8c37f6c0)

void configure_motion_profile(MotionProfile *profile, float acceleration,
                              float deceleration, float distance, float speed) {
    float ramp_distance, brake_distance;
    profile->acceleration = acceleration;
    if (profile->acceleration <= 0.0f) profile->acceleration = 0.1f;
    profile->deceleration = deceleration;
    if (profile->deceleration >= 0.0f) profile->deceleration = -0.1f;
    profile->distance = distance;
    profile->speed = speed;
    ramp_distance = profile->acceleration;
    ramp_distance = speed * speed * 0.5f / ramp_distance;
    brake_distance = -(speed * speed) * 0.5f / profile->deceleration;
    if (profile->distance <= ramp_distance + brake_distance) {
        profile->speed = root_at(profile->acceleration * 2.0f * profile->deceleration *
                                profile->distance / (profile->deceleration - profile->acceleration));
        speed = profile->speed * profile->speed;
        profile->ramp_time = profile->cruise_end = profile->speed / profile->acceleration;
        profile->ramp_distance = profile->braking_start = speed * 0.5f / profile->acceleration;
        profile->duration = -profile->speed / profile->deceleration + profile->cruise_end;
    } else {
        profile->ramp_distance = ramp_distance;
        profile->ramp_time = profile->speed / profile->acceleration;
        profile->braking_start = profile->distance - brake_distance;
        profile->cruise_end = (profile->braking_start - ramp_distance) / profile->speed + profile->ramp_time;
        profile->duration = -profile->speed / profile->deceleration + profile->cruise_end;
    }
}
