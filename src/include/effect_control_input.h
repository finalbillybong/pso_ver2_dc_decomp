#ifndef PSO_EFFECT_CONTROL_INPUT_H
#define PSO_EFFECT_CONTROL_INPUT_H
/* Provisional accessed layouts; wider device and object identities are unknown. */
typedef struct EffectControlInput {char unknown00[8];unsigned int flags;char unknown0c[12];short depth,unknown1a,x,y;} EffectControlInput;
typedef struct EffectControlView {char unknown00[52];int rotation;char unknown38[32];int elevation;char unknown5c[24];float vertical,depth;} EffectControlView;
typedef char check_EffectControlInput_flags[(unsigned long)&((EffectControlInput *)0)->flags==8?1:-1];
typedef char check_EffectControlInput_depth[(unsigned long)&((EffectControlInput *)0)->depth==24?1:-1];
typedef char check_EffectControlInput_x[(unsigned long)&((EffectControlInput *)0)->x==28?1:-1];
typedef char check_EffectControlInput_y[(unsigned long)&((EffectControlInput *)0)->y==30?1:-1];
typedef char check_EffectControlInput_size[sizeof(EffectControlInput)==32?1:-1];
typedef char check_EffectControlView_rotation[(unsigned long)&((EffectControlView *)0)->rotation==52?1:-1];
typedef char check_EffectControlView_elevation[(unsigned long)&((EffectControlView *)0)->elevation==88?1:-1];
typedef char check_EffectControlView_vertical[(unsigned long)&((EffectControlView *)0)->vertical==116?1:-1];
typedef char check_EffectControlView_depth[(unsigned long)&((EffectControlView *)0)->depth==120?1:-1];
typedef char check_EffectControlView_size[sizeof(EffectControlView)==124?1:-1];
typedef struct EffectRotationRecord {char unknown00[20];short horizontal;char unknown16[6];float magnitude;} EffectRotationRecord;
typedef char check_rotation_record_horizontal[(unsigned long)&((EffectRotationRecord *)0)->horizontal==20?1:-1];
typedef char check_rotation_record_magnitude[(unsigned long)&((EffectRotationRecord *)0)->magnitude==28?1:-1];
typedef char check_rotation_record_size[sizeof(EffectRotationRecord)==32?1:-1];
#endif
