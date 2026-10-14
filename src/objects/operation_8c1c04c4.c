typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
extern void destroy_shared_object(void *, short, int);
extern void call_8c122774(void *, Object *);
Object *operation_8c1c04c4(Object *o, int a1)
{
    int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c27589c;
        v1 = (int)0;
        while (2 > v1) {
            *(int *)((char *)((char *)o + 0xa0) + (v1 << 2)) = 0;
            *(int *)((char *)((char *)o + 0xa8) + (v1 << 2)) = 0;
            v1 = (int)(v1 + 1);
        }
        destroy_shared_object((void *)o, (short)0, v1);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
