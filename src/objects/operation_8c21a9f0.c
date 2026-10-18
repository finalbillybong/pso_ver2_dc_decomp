typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x5c];
    float f98;
};
extern void set_effect_blend_state(float);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c3827d8(void *);
extern void call_8c3aa716(void *);
extern void call_8c38ad10(void);
extern void restore_effect_blend_state(void);
void operation_8c21a9f0(Object *o)
{
    float v1;
    v1 = (float)o->f98;
    if (v1 != 0.0f) {
        if (1.0f > v1) {
            set_effect_blend_state(v1);
        }
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c3827d8((void *)(o->f28));
        call_8c3aa716((void *)(o->f38));
        call_8c38ad10();
        if (1.0f > o->f98) {
            restore_effect_blend_state();
        }
    }
}
