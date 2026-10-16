typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct Object Object;
typedef struct S_vv7_0 S_vv7_0;
typedef struct S_vv8_0 S_vv8_0;
struct S_g8c467180 {
    char unknown0[0x38];
    int f38;
};
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x118];
    float f140;
    float f144;
    float f148;
    float f14c;
};
extern int call_8c04b8dc(void *);
void operation_8c0ec020(Object *o)
{
    char *v7;
    char *v8;
    int t1;
    int t2;
    v7 = (char *)(*(S_g8c467180 **)0x8c467180)->f38;
    t1 = call_8c04b8dc((void *)(*(S_vv7_0 **)((char *)((char *)v7 + 0x0) + (o->f24 << 1 << 2))));
    o->f140 = (640.0f - (float)(unsigned int)t1) / 2.0f;
    o->f144 = 375.0f;
    v8 = (char *)(*(S_g8c467180 **)0x8c467180)->f38;
    t2 = call_8c04b8dc((void *)(*(S_vv8_0 **)((char *)((char *)v8 + 0x0) + ((o->f24 << 1) + 1 << 2))));
    o->f148 = (640.0f - (float)(unsigned int)t2) / 2.0f;
    o->f14c = o->f144 + 20.0f;
}
