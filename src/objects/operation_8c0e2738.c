typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_68 Arg0_68;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void destroy_context_8c0db244(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c0e2738(Object *o, int a1)
{
    int v2;
    int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c2677bc;
        v1 = (int)0;
        while (4 > v1) {
            v2 = (int)(v1 << 2);
            if (*(int *)((char *)((char *)o + 0x68) + (v2)) != 0) {
                request_resource_release((void *)(*(Arg0_68 **)((char *)((char *)o + 0x68) + (v2))));
                *(int *)((char *)((char *)o + 0x68) + (v2)) = 0;
            }
            v1 = (int)(v1 + 1);
        }
        destroy_context_8c0db244((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
