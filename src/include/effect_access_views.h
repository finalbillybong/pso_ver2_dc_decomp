#ifndef PSO_EFFECT_ACCESS_VIEWS_H
#define PSO_EFFECT_ACCESS_VIEWS_H
/* Provisional accessed prefixes; names do not assert complete game object types. */
typedef struct TargetFlagView {char unknown00[52];unsigned int flags;} TargetFlagView;
typedef struct TargetOwnerView {char unknown00[820];TargetFlagView *target;char unknown338[28];unsigned short index;} TargetOwnerView;
typedef struct EffectEntryState {char unknown00[148];int state;} EffectEntryState;
typedef struct EffectResourceView {char unknown00[24];void *dispatch;char unknown1c[232];void *resource;} EffectResourceView;
typedef struct EffectCoordinateView {char unknown00[104];float first;char unknown6c[8];float second;} EffectCoordinateView;
typedef struct Coordinates {float x,y,z;} Coordinates;
typedef char check_TargetFlagView_flags[(unsigned long)&((TargetFlagView *)0)->flags == 52 ? 1 : -1];
typedef char check_TargetFlagView_size[sizeof(TargetFlagView)==56?1:-1];
typedef char check_TargetOwnerView_target[(unsigned long)&((TargetOwnerView *)0)->target == 820 ? 1 : -1];
typedef char check_TargetOwnerView_index[(unsigned long)&((TargetOwnerView *)0)->index == 852 ? 1 : -1];
typedef char check_TargetOwnerView_size[sizeof(TargetOwnerView)==856?1:-1];
typedef char check_EffectEntryState_state[(unsigned long)&((EffectEntryState *)0)->state == 148 ? 1 : -1];
typedef char check_EffectEntryState_size[sizeof(EffectEntryState)==152?1:-1];
typedef char check_EffectResourceView_dispatch[(unsigned long)&((EffectResourceView *)0)->dispatch == 24 ? 1 : -1];
typedef char check_EffectResourceView_resource[(unsigned long)&((EffectResourceView *)0)->resource == 260 ? 1 : -1];
typedef char check_EffectResourceView_size[sizeof(EffectResourceView)==264?1:-1];
typedef char check_EffectCoordinateView_first[(unsigned long)&((EffectCoordinateView *)0)->first == 104 ? 1 : -1];
typedef char check_EffectCoordinateView_second[(unsigned long)&((EffectCoordinateView *)0)->second == 116 ? 1 : -1];
typedef char check_EffectCoordinateView_size[sizeof(EffectCoordinateView)==120?1:-1];
typedef char check_Coordinates_x[(unsigned long)&((Coordinates *)0)->x == 0 ? 1 : -1];
typedef char check_Coordinates_y[(unsigned long)&((Coordinates *)0)->y == 4 ? 1 : -1];
typedef char check_Coordinates_z[(unsigned long)&((Coordinates *)0)->z == 8 ? 1 : -1];
typedef char check_Coordinates_size[sizeof(Coordinates)==12?1:-1];
#endif
