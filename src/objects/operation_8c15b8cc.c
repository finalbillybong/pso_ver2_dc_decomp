typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    unsigned char f01;
    unsigned char f02;
    char unknown3[0x1];
    unsigned char f04;
};
extern char g_8c4dab80[];
extern int operation_8c1ccb10(void *);
extern int operation_8c15ba54(void);
int operation_8c15b8cc(Object *o)
{
    int i;
    int off;
    int f;
    if (o->tag != 3) {
        return 0;
    }
    if (operation_8c1ccb10(o) == 0) {
        return 0;
    }
    for (i = 0; i < 0x3c; i++) {
        off = i * 0x18;
        f = *(short *)((char *)(g_8c4dab80 + 0x16) + off) == 0;
        if (f == 0 && o->tag == *(unsigned char *)(g_8c4dab80 + off) && *(unsigned char *)((char *)(g_8c4dab80 + 0x1) + off) == o->f01 && *(unsigned char *)((char *)(g_8c4dab80 + 0x2) + off) == o->f02 && *(unsigned char *)((char *)(g_8c4dab80 + 0x4) + off) == o->f04) {
            return 0xa - *(short *)((char *)(g_8c4dab80 + 0x14) + off);
        }
    }
    if (operation_8c15ba54() == 0) {
        return 0;
    }
    return 0xa;
}
