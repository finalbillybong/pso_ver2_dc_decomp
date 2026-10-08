#include "src/include/transform_tracks.h"
#define current (*(TrackState **)0x8c46f440)
void select_transform_state(unsigned int index) {
 current = (TrackState *)(0x8c46f444 + (index << 6));
}
