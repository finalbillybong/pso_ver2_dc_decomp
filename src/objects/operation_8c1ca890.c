typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_44 S_g8c467180_44;
typedef struct Object Object;
typedef struct S_vv4_0 S_vv4_0;
struct S_g8c467180 {
    char unknown0[0x44];
    S_g8c467180_44 *f44;
};
struct Object {
    char unknown0[0x48];
    float f48;
    float f4c;
    float f50;
    float f54;
    int f58;
    void *f5c;
};
extern S_g8c467180 *g_8c467180;
extern int call_8c04b8dc(void *);
void operation_8c1ca890(Object *o, int a1)
{
    char *v4;
    int t1;
    int off;
    off = a1 << 2;
    v4 = (char *)g_8c467180->f44;
    t1 = call_8c04b8dc((void *)(*(S_vv4_0 **)(v4 + off)));
    o->f48 = (640.0f - (float)(unsigned int)t1) / 2.0f;
    o->f58 = (int)(*(int *)((char *)g_8c467180->f44 + off));
    o->f50 = 320.0f;
    o->f5c = (void *)0x8c3290d0;
    o->f4c = 375.0f;
    o->f54 = o->f4c + 20.0f;
}
