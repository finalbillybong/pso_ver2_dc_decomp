typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_40c Arg0_40c;
struct Object {
    char unknown0[0x40c];
    Arg0_40c *f40c;
};
struct Frame {
    char unknown0[0x10];
    Block8 f10;
};
extern int hierarchy_is_active(void *);
extern void operation_8c0f8108(void *, void *);
extern void call_8c047b24(Object *, int, int, Block8);
float operation_8c0f8afc(Object *o, int a1, int a2, Block8 a3)
{
    char *v11;
    int t1;
    if (a3.words[0] == 2) {
        v11 = (char *)o->f40c;
        if (v11 != 0) {
            t1 = hierarchy_is_active((void *)v11);
            if (t1 != 0) {
                operation_8c0f8108((void *)(o->f40c), (void *)(((char *)o + 0x3c)));
            }
        }
    }
    call_8c047b24(o, a1, a2, a3);
    return 0.0f;
}
