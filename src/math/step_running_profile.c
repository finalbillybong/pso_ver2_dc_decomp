#include "src/include/running_profile.h"

#define evaluate_at ((int (*)(RunningProfile *, float, float *))0x8c042d2c)

/* Read time again after sampling: position may alias a profile field. */
int step_running_profile(RunningProfile *profile, float *position) {
    int done = evaluate_at(profile, profile->time, position);
    profile->time += 1.0f;
    return done;
}
