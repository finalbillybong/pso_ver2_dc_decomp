#include "src/include/running_profile.h"

#define clear_at ((void (*)(RunningProfile *))0x8c042b18)

RunningProfile *construct_running_profile(RunningProfile *profile) {
    clear_at(profile);
    return profile;
}
