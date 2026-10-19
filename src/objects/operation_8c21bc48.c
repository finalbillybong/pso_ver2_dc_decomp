typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct S_x73072_0 S_x73072_0;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void mark_effect_for_release(void *);
extern void destroy_object_state(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c21bc48(Object *o, int a1)
{
    int v3;
    int v2;
    int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c2783a4;
        v2 = (int)0;
        v1 = (int)0x374;
        while (2 > v2) {
            v3 = (int)(v2 << 2);
            if (*(int *)((char *)((char *)((int)o + v1) + 0x0) + (v3)) != 0) {
                mark_effect_for_release((void *)(*(S_x73072_0 **)((char *)((char *)((int)o + v1) + 0x0) + (v3))));
                *(int *)((char *)((char *)((int)o + v1) + 0x0) + (v3)) = 0;
            }
            v2 = (int)(v2 + 1);
        }
        destroy_object_state((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
