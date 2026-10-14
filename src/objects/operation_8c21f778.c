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
    char unknown20[0x48];
    char f68;
    char unknown69[0x3];
    int f6c;
    int f70;
    int f74;
    int f78;
};
extern void initialize_base_8c0db1d0(void *, int);
Object *operation_8c21f778(Object *o, int a1, int a2)
{
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c3369c4));
    o->dispatch = (void *)0x8c278820;
    o->tag = (int)(*(int *)0x8c3369c0);
    o->size = 0x7c;
    o->f68 = 0;
    o->f6c = a1;
    o->f70 = a2;
    o->f74 = 0;
    o->f78 = 0;
    return o;
}
