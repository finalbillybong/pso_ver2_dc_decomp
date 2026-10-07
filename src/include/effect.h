#ifndef PSO_EFFECT_H
#define PSO_EFFECT_H
/* Provisional 0x68-byte effect layout observed at 0x8c0a6ff0 and adjacent entries.
 * Resource/owner/vector names do not establish final gameplay semantics. */
typedef struct EffectVector { float x,y,z; } EffectVector;
typedef struct Effect {
 void *field_00;
 unsigned char unknown_04[0x14];
 void *field_18;
 unsigned short field_1c,size_1e;
 float field_20;
 int field_24;
 float field_28;
 void *resource;
 unsigned short field_30,field_32;
 int field_34,field_38,field_3c,field_40;
 float field_44,field_48;
 void *owner;
 EffectVector position;
 int field_5c,field_60,field_64;
} Effect;

#define EFFECT_OFFSET(f) ((unsigned long)&((Effect *)0)->f)
typedef char check_effect_size[sizeof(Effect)==0x68?1:-1];
typedef char check_effect_vector_size[sizeof(EffectVector)==12?1:-1];
typedef char check_effect_field_00[EFFECT_OFFSET(field_00)==0x0?1:-1];
typedef char check_effect_field_18[EFFECT_OFFSET(field_18)==0x18?1:-1];
typedef char check_effect_size_1e[EFFECT_OFFSET(size_1e)==0x1e?1:-1];
typedef char check_effect_field_20[EFFECT_OFFSET(field_20)==0x20?1:-1];
typedef char check_effect_field_24[EFFECT_OFFSET(field_24)==0x24?1:-1];
typedef char check_effect_field_28[EFFECT_OFFSET(field_28)==0x28?1:-1];
typedef char check_effect_resource[EFFECT_OFFSET(resource)==0x2c?1:-1];
typedef char check_effect_field_30[EFFECT_OFFSET(field_30)==0x30?1:-1];
typedef char check_effect_field_32[EFFECT_OFFSET(field_32)==0x32?1:-1];
typedef char check_effect_field_34[EFFECT_OFFSET(field_34)==0x34?1:-1];
typedef char check_effect_field_38[EFFECT_OFFSET(field_38)==0x38?1:-1];
typedef char check_effect_field_3c[EFFECT_OFFSET(field_3c)==0x3c?1:-1];
typedef char check_effect_field_40[EFFECT_OFFSET(field_40)==0x40?1:-1];
typedef char check_effect_field_44[EFFECT_OFFSET(field_44)==0x44?1:-1];
typedef char check_effect_field_48[EFFECT_OFFSET(field_48)==0x48?1:-1];
typedef char check_effect_owner[EFFECT_OFFSET(owner)==0x4c?1:-1];
typedef char check_effect_position[EFFECT_OFFSET(position)==0x50?1:-1];
typedef char check_effect_field_5c[EFFECT_OFFSET(field_5c)==0x5c?1:-1];
typedef char check_effect_field_60[EFFECT_OFFSET(field_60)==0x60?1:-1];
typedef char check_effect_field_64[EFFECT_OFFSET(field_64)==0x64?1:-1];
#endif
