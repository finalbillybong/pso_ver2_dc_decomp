#include "src/include/transform_tracks.h"
#define current (*(TrackState **)0x8c46f440)
unsigned int find_track_key(char *keys, unsigned int stride, unsigned int count, unsigned int frame) {
 unsigned int low = 0;
 while (count - low > 1) {
  unsigned int middle = (low + count) >> 1;
  if (frame >= *(unsigned int *)(keys + middle * stride)) low = middle;
  else count = middle;
 }
 return low;
}
