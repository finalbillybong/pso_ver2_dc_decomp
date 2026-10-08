#ifndef PSO_EFFECT_SCAN_H
#define PSO_EFFECT_SCAN_H
#include "src/include/vector3.h"
/* Provisional accessed prefixes and shared result-buffer layout. */
typedef struct EffectScanOrigin {char unknown00[36];Vector3 position;} EffectScanOrigin;
typedef struct EffectScanResource {char unknown00[60];Vector3 position;} EffectScanResource;
typedef struct EffectScanObject {char unknown00[52];unsigned int flags;} EffectScanObject;
typedef struct EffectScanResults {void *objects[16];int values[16];int count;} EffectScanResults;
typedef char check_EffectScanOrigin_position[(unsigned long)&((EffectScanOrigin *)0)->position==36?1:-1];
typedef char check_EffectScanOrigin_size[sizeof(EffectScanOrigin)==48?1:-1];
typedef char check_EffectScanResource_position[(unsigned long)&((EffectScanResource *)0)->position==60?1:-1];
typedef char check_EffectScanResource_size[sizeof(EffectScanResource)==72?1:-1];
typedef char check_EffectScanObject_flags[(unsigned long)&((EffectScanObject *)0)->flags==52?1:-1];
typedef char check_EffectScanObject_size[sizeof(EffectScanObject)==56?1:-1];
typedef char check_EffectScanResults_objects[(unsigned long)&((EffectScanResults *)0)->objects==0?1:-1];
typedef char check_EffectScanResults_values[(unsigned long)&((EffectScanResults *)0)->values==64?1:-1];
typedef char check_EffectScanResults_count[(unsigned long)&((EffectScanResults *)0)->count==128?1:-1];
typedef char check_EffectScanResults_size[sizeof(EffectScanResults)==132?1:-1];
#endif
