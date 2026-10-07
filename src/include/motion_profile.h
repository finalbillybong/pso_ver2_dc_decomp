#ifndef PSO_MOTION_PROFILE_H
#define PSO_MOTION_PROFILE_H
/* Provisional scalar acceleration/cruise/deceleration profile view. */
typedef struct MotionProfile {
    float acceleration;
    float deceleration;
    float speed;
    float ramp_time;
    float cruise_end;
    float duration;
    float ramp_distance;
    float braking_start;
    float distance;
} MotionProfile;

typedef char check_motion_profile_acceleration[
    (unsigned long)&((MotionProfile *)0)->acceleration == 0 ? 1 : -1];
typedef char check_motion_profile_deceleration[
    (unsigned long)&((MotionProfile *)0)->deceleration == 4 ? 1 : -1];
typedef char check_motion_profile_speed[
    (unsigned long)&((MotionProfile *)0)->speed == 8 ? 1 : -1];
typedef char check_motion_profile_ramp_time[
    (unsigned long)&((MotionProfile *)0)->ramp_time == 12 ? 1 : -1];
typedef char check_motion_profile_cruise_end[
    (unsigned long)&((MotionProfile *)0)->cruise_end == 16 ? 1 : -1];
typedef char check_motion_profile_duration[
    (unsigned long)&((MotionProfile *)0)->duration == 20 ? 1 : -1];
typedef char check_motion_profile_ramp_distance[
    (unsigned long)&((MotionProfile *)0)->ramp_distance == 24 ? 1 : -1];
typedef char check_motion_profile_braking_start[
    (unsigned long)&((MotionProfile *)0)->braking_start == 28 ? 1 : -1];
typedef char check_motion_profile_distance[
    (unsigned long)&((MotionProfile *)0)->distance == 32 ? 1 : -1];
typedef char check_motion_profile_size[sizeof(MotionProfile) == 36 ? 1 : -1];
#endif
