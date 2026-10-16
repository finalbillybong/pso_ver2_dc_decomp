typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x3c];
    int f5c;
    int f60;
};
struct Arg1 {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x1a4];
    int f1d0;
    int f1d4;
    char unknown1d8[0x5c];
    int f234;
};
extern void operation_1abe00(void *, void *, void *, void *);
Object *operation_8c251aec(Object *o, Arg1 *a1, int a2, int a3)
{
    int v1;
    int v4;
    int v2;
    operation_1abe00((void *)o, (void *)a1, (void *)a2, (void *)a3);
    o->dispatch = (void *)0x8c27f478;
    o->tag = (int)(*(int *)0x8c33f974);
    o->size = 0x64;
    v1 = (int)(((a1->f234 & 4)) != 0);
    v2 = (int)a1->f28;
    if (v1 != 0) {
        v4 = (int)a1->f1d4;
    } else {
        v4 = (int)a1->f1d0;
    }
    o->f5c = (int)(v4);
    o->f60 = (int)(v2);
    return o;
}
