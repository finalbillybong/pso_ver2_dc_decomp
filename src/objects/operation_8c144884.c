typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4da35c S_L8c4da35c;
typedef struct S_L8c4da35c_8 S_L8c4da35c_8;
typedef struct S_g8c4da358 S_g8c4da358;
typedef struct S_g8c4da35c S_g8c4da35c;
typedef struct S_g8c4da368 S_g8c4da368;
typedef struct Object Object;
struct S_L8c4da35c {
    char unknown0[0x8];
    S_L8c4da35c_8 *f08;
};
struct Object {
    char unknown0[0x3e0];
    int f3e0;
};
extern S_g8c4da358 *g_8c4da358;
extern S_g8c4da368 *g_8c4da368;
extern S_L8c4da35c g_8c4da35c;
extern void call_8c05b97c(Object *, void *, void *, void *);
extern void call_8c05b4e4(Object *, int, void *);
void operation_8c144884(Object *o, int a1)
{
    int v1;
    int v2;
    int pm5;
    int pm4;
    int v3;
    int pm1;
    int pm6;
    int pm7;
    call_8c05b97c(o, g_8c4da358, (void *)((&g_8c4da35c)->f08), g_8c4da368);
    call_8c05b4e4(o, a1, (void *)((void *)0x8c286330));
    if (o->f3e0 != 0) {
        if (o->f3e0 == 1) {
            goto L_8c1448c0;
        }
        if (o->f3e0 == 2) {
            goto L_8c1448c8;
        }
    }
    pm1 = 0;
    v3 = pm1;
    a1 = 0;
    pm7 = 0;
    v2 = a1;
    v1 = pm7;
    goto L_8c1448ce;
L_8c1448c0:
    ;
    v3 = (int)0;
    v1 = (int)0;
    v2 = (int)1;
    goto L_8c1448ce;
L_8c1448c8:
    ;
    v3 = (int)0;
    v1 = (int)0;
    v2 = (int)2;
L_8c1448ce:
    ;
    pm6 = v3 << 2;
    pm1 = v1 << 2;
    a1 = pm1;
    pm4 = pm6;
    pm5 = v2 << 2;
    call_8c05b97c(o, (void *)(*(S_g8c4da358 **)((char *)&g_8c4da358 + (pm4))), (void *)(*(S_g8c4da35c **)((pm5) + (char *)&g_8c4da35c)), (void *)(*(S_g8c4da368 **)((a1) + (char *)&g_8c4da368)));
}
