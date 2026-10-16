typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_L8c336718 S_L8c336718;
typedef struct Object Object;
struct Object {
    char unknown0[0x38];
    Block8 f38;
    char unknown40[0x28];
    int f68;
};
extern unsigned short g_8c46fe24;
extern S_L8c336718 g_8c336718;
extern char gc_8c336718[];
void operation_8c21e000(Object *o)
{
    unsigned short v1;
    if (((o->f68 & 1)) != 0) {
        *(Block8 *)&o->f38 = *(Block8 *)&*(Block8 *)(gc_8c336718 + 0x10);
        return;
    }
    v1 = (unsigned short)g_8c46fe24;
    if (((v1 & 1)) != 0 || ((v1 & 4)) != 0 || ((v1 & 2)) != 0) {
        *(Block8 *)&o->f38 = *(Block8 *)&*(Block8 *)(gc_8c336718 + 0x8);
        return;
    }
    *(Block8 *)&o->f38 = *(Block8 *)&*(Block8 *)(gc_8c336718 + 0x0);
}
