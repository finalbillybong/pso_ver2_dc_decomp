#ifndef PSO_SPAWN_MOTION_H
#define PSO_SPAWN_MOTION_H
/* Provisional view of fields read by the spawned-effect completion check.
 * This view does not establish the complete object size or field semantics. */
typedef struct SpawnMotionView {
 unsigned char unknown_00[4];
 unsigned short field_04;
 unsigned char unknown_06[0x3a];
 float field_40[3];
 float field_4c;
} SpawnMotionView;
typedef char check_spawn_motion_04[((unsigned long)&((SpawnMotionView *)0)->field_04)==4?1:-1];
typedef char check_spawn_motion_40[((unsigned long)&((SpawnMotionView *)0)->field_40)==0x40?1:-1];
typedef char check_spawn_motion_4c[((unsigned long)&((SpawnMotionView *)0)->field_4c)==0x4c?1:-1];
#endif
