#include "src/include/transform_tracks.h"
#define current (*(TrackState **)0x8c46f440)
int sample_transform_angles(void *output) {
 int index=current->index;
 if (*(void **)((char *)current->first + (index << 2))) {
  current->angle(*(void **)((char *)current->first + (index << 2)),*(unsigned int *)((char *)current->second + (index << 2)),output,current->frame);
  ++current->index;
  return 1;
 }
 ++current->index;
 return 0;
}
