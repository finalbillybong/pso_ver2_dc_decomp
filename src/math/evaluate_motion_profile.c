#include "src/include/motion_profile.h"

float evaluate_motion_profile(MotionProfile *profile, float time) {
    if (time < 0.0f) return 0.0f;
    if (time < profile->ramp_time) {
        return profile->acceleration * 0.5f * time * time;
    }
    if (time < profile->cruise_end) {
        return (time - profile->ramp_time) * profile->speed + profile->ramp_distance;
    }
    if (time < profile->duration) {
        float remaining = profile->duration - time;
        return profile->deceleration * 0.5f * remaining * remaining + profile->distance;
    }
    return profile->distance;
}
