typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct S_vv7 S_vv7;
struct Object {
    char unknown0[0x20];
    int f20;
    Arg0_24 *f24;
};
struct S_vv7 {
    char unknown0[0xc];
    int f0c;
};
extern void operation_8c172be8(void *, int);
extern int call_8c18e768(void *, int);
void operation_8c077778(Object *o)
{
    int v4;
    int v5;
    int v6;
    int v3;
    int v1;
    S_vv7 *v7;
    v1 = (int)-0x1000000;
    for (v3 = 0; v3 != call_8c18e768((void *)(o->f24), 2); v3++) {
        v4 = (int)(v3 << 2);
        v5 = (int)(v4 << 2);
        v6 = (int)(v5 << 1);
        v7 = (S_vv7 *)((int)o->f20 + v6);
        operation_8c172be8((void *)((int)v7 + 0xc), 0x3f);
        if (((v7->f0c & v1)) == 0) {
            o->f24 = (Arg0_24 *)(v3 << 1);
            return;
        }
        operation_8c172be8((void *)((char *)(int *)((int)o->f20 + v6 + 0x10) + 0xc), 0x3f);
    }
}
