typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
};
extern void TItemObject_ctor_8c0e71c8(void *, int, void *);
Object *TItemObjRecovery_ctor_8c24db48(Object *o, int a1, int a2)
{
    TItemObject_ctor_8c0e71c8((void *)o, a1, (void *)a2);
    o->dispatch = (void *)0x8c27e240;
    o->tag = (int)(*(int *)0x8c33ee90);
    o->size = 0x148;
    return o;
}
