#include "src/include/vector3.h"
/* Provisional collision prefix and registry header. */
typedef struct CollisionEntry { unsigned int unknown0; Vector3 position; float radius; unsigned int flags; } CollisionEntry;
typedef struct RegistryPrefix { char unknown0[32]; } RegistryPrefix;
typedef char check_position[(unsigned long)&((CollisionEntry *)0)->position==4?1:-1];
typedef char check_radius[(unsigned long)&((CollisionEntry *)0)->radius==16?1:-1];
typedef char check_flags[(unsigned long)&((CollisionEntry *)0)->flags==20?1:-1];
typedef char check_entry_prefix[sizeof(CollisionEntry)==24?1:-1];
typedef char check_registry_prefix[sizeof(RegistryPrefix)==32?1:-1];
CollisionEntry *collect_nearby_entries(const Vector3 *point,unsigned int mask) {
 CollisionEntry **cursor=(CollisionEntry **)((RegistryPrefix *)*(void **)0x8c4dc5e0+1);
 CollisionEntry *entry;
 CollisionEntry **result=(CollisionEntry **)0x8c417b80;
 int count=0;
 while((entry=*cursor++)!=0) {
  float x,z;
  if(!(entry->flags&mask)) continue;

  x=entry->position.x-point->x;
  z=entry->position.z-point->z;
  if(x*x+z*z>entry->radius*entry->radius) continue;
  if(++count>=256) break;
  *result++=entry;
 }
 *result=0;
 return *(CollisionEntry **)0x8c417b80;
}
