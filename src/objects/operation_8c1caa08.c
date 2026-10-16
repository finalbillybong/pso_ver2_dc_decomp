typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x2];
    char f2a;
    char unknown2b[0x2d];
    void *f58;
    void *f5c;
    int f60;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern int operation_8c01d8a8(void *, int);
void operation_8c1caa08(Object *o)
{
    int t1;
    switch (o->f2a) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 5:
    case 6:
        if ((unsigned int)0x14 > (unsigned int)++o->f24) {
            o->f5c = (void *)0x8c3290d0;
            o->f58 = (void *)0x8c3290d0;
            o->f60 = 0;
            return;
        }
        switch (o->f2a) {
        case 4:
        case 5:
        case 6:
            if (*(char *)0x8c4e2e20 == 1) {
                o->f60 = 1;
                if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
                    t1 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
                    if (t1 == 0) {
                        return;
                    }
                }
                *(char *)0x8c4e2ce0 = 0;
                o->f60 = 0;
            }
        }
        return;
    case 3:
        break;
    }
}
