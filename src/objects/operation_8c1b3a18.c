typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct S_x13968_0 S_x13968_0;
typedef struct S_x8464_0 S_x8464_0;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x380];
    int f39c;
    char unknown3a0[0xe0];
    int f480;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void mark_effect_for_release(void *);
extern void operation_8c161c38(int);
extern void operation_8c052124(void *);
extern void operation_8c0120f4(void *, int);
extern void operation_8c122774(void *, void *);
Object *operation_8c1b3a18(Object *o, int a1)
{
    int v2;
    int v1;
    int v3;
    int v10;
    int v12;
    if (o != 0) {
        o->dispatch = (void *)0x8c274da4;
        v1 = (int)0x3f8;
        v2 = (int)0;
        while (0xd > v2) {
            v3 = (int)(v2 << 2);
            if (*(int *)((char *)((char *)((int)o + v1) + 0x0) + (v3)) != 0) {
                mark_effect_for_release((void *)(*(S_x8464_0 **)((char *)((char *)((int)o + v1) + 0x0) + (v3))));
                *(int *)((char *)((char *)((int)o + v1) + 0x0) + (v3)) = 0;
            }
            v2 = (int)(v2 + 1);
        }
        v2 = (int)0;
        v10 = (int)0x42c;
        while (3 > v2) {
            v12 = (int)(v2 << 2);
            operation_8c161c38((int)(*(S_x13968_0 **)((char *)((char *)((int)o + v10) + 0x0) + (v12))));
            *(int *)((char *)((char *)((int)o + v10) + 0x0) + (v12)) = 0;
            v2 = (int)(v2 + 1);
        }
        operation_8c161c38((int)(o->f480));
        o->f480 = 0;
        operation_8c052124((void *)o);
        o->f39c = 0;
        operation_8c0120f4((void *)o, 0);
        if ((short)a1 > 0) {
            operation_8c122774(g_8c4d97e0, (void *)o);
        }
    }
    return o;
}
