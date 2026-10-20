typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c466e20 S_L8c466e20;
typedef struct S_g8c466e20 S_g8c466e20;
typedef struct S_g8c466efc S_g8c466efc;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_b0 Arg0_b0;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x2];
    Arg0_24 *f24;
    char unknown28[0x4];
    float f2c;
    float f30;
    char unknown34[0x48];
    float f7c;
    float f80;
    char unknown84[0x14];
    float f98;
    float f9c;
    char unknowna0[0x10];
    Arg0_b0 *fb0;
};
struct Arg0_24 {
    char unknown0[0x70];
    float f70;
    char unknown74[0x14];
    unsigned char f88;
};
struct S_L8c466e20 {
    char unknown0[0xdc];
    S_g8c466efc *fdc;
};
extern S_L8c466e20 g_8c466e20;
extern int hierarchy_is_active(void *);
extern float call_8c38c154(void *);
extern void append_manager_record(void *, void *);
void operation_8c0aad98(Object *o)
{
    float v22;
    int t1;
    float t2;
    t1 = hierarchy_is_active((void *)o);
    if (t1 != 0) {
        t2 = call_8c38c154((void *)(o->fb0));
        v22 = (float)o->f24->f70 * t2;
        o->f7c = o->f2c * (v22 + 1.0f);
        o->f80 = o->f30 * (1.0f - v22);
        o->f7c *= o->f98;
        o->f80 *= o->f9c;
        if (((o->f24->f88 & 0x20)) != 0) {
            append_manager_record((void *)(*(S_g8c466efc **)((char *)&g_8c466e20.fdc + (o->f20 << 2))), (void *)(((char *)o + 0x60)));
            return;
        }
        append_manager_record((void *)(*(S_g8c466e20 **)((char *)&g_8c466e20 + (o->f20 << 2))), (void *)(((char *)o + 0x60)));
    }
}
