#include "src/include/transform_tracks.h"
#define current (*(TrackState **)0x8c46f440)
void advance_transform_tracks(void) {
 char *next = current->cursor + current->step;
 current->cursor = next;
 current->first = (void **)next;
 current->second = (unsigned int *)(next + current->stride);
 current->index = 0;
}
