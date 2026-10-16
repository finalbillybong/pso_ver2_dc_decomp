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
    char unknown20[0x118];
    unsigned char f138;
    char unknown139[0x9];
    short f142;
    char unknown144[0x7c];
    int f1c0;
    char unknown1c4[0x20];
    int f1e4;
};
extern void operation_8c0e8360(void *, int, int);
Object *operation_8c255200(Object *o, int a1, int a2)
{
    unsigned char v1;
    operation_8c0e8360((void *)o, a1, a2);
    o->dispatch = (void *)0x8c2810d8;
    o->tag = (int)(*(int *)0x8c33fda0);
    o->size = 0x1e8;
    o->f142 = 0x24;
    o->f1e4 = 0;
    v1 = (unsigned char)o->f138;
    if ((unsigned char)v1 == 0x27 || (unsigned int)(unsigned char)v1 >= (unsigned int)0x33) {
        o->f142 = 0x22;
        o->f1e4 = 1;
        goto L_8c255272;
    }
    if ((unsigned char)v1 == 0x30) {
        o->f142 = 0x28;
    } else {
        if ((unsigned char)v1 == 0x2a) {
            o->f1e4 = 1;
        } else {
            if ((unsigned char)v1 == 0x32) {
                o->f142 = 0x3a;
                o->f1e4 = 1;
            }
        }
    }
L_8c255272:;
    if ((unsigned char)v1 == 0x31) {
        o->f142 = 0x3a;
        o->f1c0 |= 2;
        o->f1e4 = 1;
    }
    return o;
}
