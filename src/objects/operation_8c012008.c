typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x2576 S_x2576;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x14];
    int f34;
    char unknown38[0xb0];
    int fe8;
    char unknownec[0x244];
    short f330;
    char unknown332[0x1e];
    int f350;
    unsigned short f354;
    short f356;
    short f358;
    short f35a;
    int f35c;
    int f360;
    int f364;
    int f368;
    int f36c;
    char unknown370[0x14];
    int f384;
    int f388;
    int f38c;
};
struct S_x2576 {
    float f00;
};
extern void call_8c043418(Object *);
Object *operation_8c012008(Object *o)
{
    int v1;
    int v4;
    call_8c043418(o);
    o->dispatch = (void *)0x8c260fd8;
    o->tag = (int)(*(int *)0x8c2e2c18);
    o->size = 0x390;
    o->f354 = 0xffff;
    o->f384 = 0;
    o->f388 = 0;
    o->f38c = 0;
    o->f350 = 0;
    o->f35c = 0;
    o->f360 = 0;
    o->f364 = 0;
    o->f368 = 0;
    o->f36c = 0;
    o->f356 = 0;
    o->f358 = 0;
    o->f35a = o->f330;
    v4 = (int)0;
    goto L_8c012078;
    v1 = (int)0;
L_8c01206c:;
    ((S_x2576 *)((char *)(int *)((char *)o + 0x370) + (v1 << 2)))->f00 = 0.0f;
    v4 = (int)(v1 + 1);
L_8c012078:;
    v1 = (int)v4;
    if (5 > v4) {
        goto L_8c01206c;
    }
    o->f34 |= 0x20000000;
    o->fe8 |= 1;
    return o;
}
