#include "src/include/vector3.h"
typedef struct Entry { short tag; char unknown2[14]; Vector3 position; char unknown28[40]; } Entry;
typedef char check_position[(unsigned long)&((Entry *)0)->position==16?1:-1];
typedef char check_entry[sizeof(Entry)==68?1:-1];
extern int scene_index;
extern int scene_counts[];
extern Entry *scene_entries;
extern Entry *extra_entries;
Entry *find_nearest_scene_entry(void *unused,const Vector3 *position) {
 int scene=scene_index;
 Entry *best=0,*cursor;
 int i,count;
 float distance;
 if(scene>17) cursor=0;
 else {
  int preceding=0;
  for(i=0;i<scene;i++) preceding+=*(int *)((char *)scene_counts+((unsigned int)i<<2));
  cursor=scene_entries+preceding;
 }
 count=*(int *)((char *)scene_counts+((unsigned int)scene<<2));
 distance=100000000.0f;
 { short invalid=-1;
 for(i=0;i<count;i++,cursor++) {
  if(cursor->tag!=invalid) {
   float x=position->x-cursor->position.x;
   float y=position->y-cursor->position.y;
   float z=position->z-cursor->position.z;
   float current=x*x+y*y+z*z;
   if(distance>current) { distance=current; best=cursor; }
  }
 }
 }
 cursor=extra_entries;
 { short invalid=-1;
 for(i=0;i<256;i++,cursor++) {
  if(cursor->tag!=invalid) {
   float x=position->x-cursor->position.x;
   float y=position->y-cursor->position.y;
   float z=position->z-cursor->position.z;
   float current=x*x+y*y+z*z;
   if(distance>current) { distance=current; best=cursor; }
  }
 }
 }
 return best;
}
