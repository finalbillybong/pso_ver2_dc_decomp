#ifndef PSO_RUNNING_PROFILE_H
#define PSO_RUNNING_PROFILE_H
/* Provisional motion profile with initial velocity and a stored time counter. */
typedef struct RunningProfile {
    float acceleration;
    float deceleration;
    float initial_speed;
    float peak_speed;
    float ramp_time;
    float cruise_end;
    float duration;
    float time;
    float ramp_distance;
    float braking_start;
    float distance;
} RunningProfile;

typedef char check_running_profile_acceleration[
    (unsigned long)&((RunningProfile *)0)->acceleration == 0 ? 1 : -1];
typedef char check_running_profile_deceleration[
    (unsigned long)&((RunningProfile *)0)->deceleration == 4 ? 1 : -1];
typedef char check_running_profile_initial_speed[
    (unsigned long)&((RunningProfile *)0)->initial_speed == 8 ? 1 : -1];
typedef char check_running_profile_peak_speed[
    (unsigned long)&((RunningProfile *)0)->peak_speed == 12 ? 1 : -1];
typedef char check_running_profile_ramp_time[
    (unsigned long)&((RunningProfile *)0)->ramp_time == 16 ? 1 : -1];
typedef char check_running_profile_cruise_end[
    (unsigned long)&((RunningProfile *)0)->cruise_end == 20 ? 1 : -1];
typedef char check_running_profile_duration[
    (unsigned long)&((RunningProfile *)0)->duration == 24 ? 1 : -1];
typedef char check_running_profile_time[
    (unsigned long)&((RunningProfile *)0)->time == 28 ? 1 : -1];
typedef char check_running_profile_ramp_distance[
    (unsigned long)&((RunningProfile *)0)->ramp_distance == 32 ? 1 : -1];
typedef char check_running_profile_braking_start[
    (unsigned long)&((RunningProfile *)0)->braking_start == 36 ? 1 : -1];
typedef char check_running_profile_distance[
    (unsigned long)&((RunningProfile *)0)->distance == 40 ? 1 : -1];
typedef char check_running_profile_size[sizeof(RunningProfile) == 44 ? 1 : -1];
#endif
