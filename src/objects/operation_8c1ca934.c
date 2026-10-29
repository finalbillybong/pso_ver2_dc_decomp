typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_44 S_g8c467180_44;
typedef struct Object Object;
typedef struct S_vv10_0 S_vv10_0;
typedef struct S_vv9_0 S_vv9_0;
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
    int f5c;
};
extern S_g8c467180 *g_8c467180;
extern int operation_8c04b8dc(void *);
void operation_8c1ca934(Object *o, int a1, int a2)
{
    char *v9;
    int v1;
    char *v10;
    int v5;
    int t1;
    int t2;
    v1 = (int)(a1 << 2);
    v9 = (char *)g_8c467180->f44;
    t2 = operation_8c04b8dc((void *)(*(S_vv9_0 **)((char *)((char *)v9 + 0x0) + (v1))));
    o->f48 = (640.0f - (float)(unsigned int)t2) / 2.0f;
    v5 = (int)(a2 << 2);
    o->f58 = (int)(*(int *)((char *)((char *)g_8c467180->f44 + 0x0) + (v1)));
    v10 = (char *)g_8c467180->f44;
    t1 = operation_8c04b8dc((void *)(*(S_vv10_0 **)((char *)((char *)v10 + 0x0) + (v5))));
    o->f50 = (640.0f - (float)(unsigned int)t1) / 2.0f;
    o->f5c = (int)(*(int *)((char *)((char *)g_8c467180->f44 + 0x0) + (v5)));
    o->f4c = 375.0f;
    o->f54 = o->f4c + 20.0f;
}
