#ifndef PSO_TRACK_KEYS_H
#define PSO_TRACK_KEYS_H
/* Provisional layouts established by interpolation field accesses and strides. */
typedef struct FloatTrackKey {unsigned int frame;float x,y,z;} FloatTrackKey;
typedef struct AngleTrackKey {unsigned int frame;int x,y,z;} AngleTrackKey;
typedef struct AngleScalarKey {unsigned int frame;int x;} AngleScalarKey;
typedef char check_FloatTrackKey_frame[(unsigned long)&((FloatTrackKey *)0)->frame == 0 ? 1 : -1];
typedef char check_FloatTrackKey_x[(unsigned long)&((FloatTrackKey *)0)->x == 4 ? 1 : -1];
typedef char check_FloatTrackKey_y[(unsigned long)&((FloatTrackKey *)0)->y == 8 ? 1 : -1];
typedef char check_FloatTrackKey_z[(unsigned long)&((FloatTrackKey *)0)->z == 12 ? 1 : -1];
typedef char check_FloatTrackKey_size[sizeof(FloatTrackKey)==16?1:-1];
typedef char check_AngleTrackKey_frame[(unsigned long)&((AngleTrackKey *)0)->frame == 0 ? 1 : -1];
typedef char check_AngleTrackKey_x[(unsigned long)&((AngleTrackKey *)0)->x == 4 ? 1 : -1];
typedef char check_AngleTrackKey_y[(unsigned long)&((AngleTrackKey *)0)->y == 8 ? 1 : -1];
typedef char check_AngleTrackKey_z[(unsigned long)&((AngleTrackKey *)0)->z == 12 ? 1 : -1];
typedef char check_AngleTrackKey_size[sizeof(AngleTrackKey)==16?1:-1];
typedef char check_AngleScalarKey_frame[(unsigned long)&((AngleScalarKey *)0)->frame == 0 ? 1 : -1];
typedef char check_AngleScalarKey_x[(unsigned long)&((AngleScalarKey *)0)->x == 4 ? 1 : -1];
typedef char check_AngleScalarKey_size[sizeof(AngleScalarKey)==8?1:-1];
#endif
