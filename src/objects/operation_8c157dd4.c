typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daa80 S_g8c4daa80;
typedef struct S_g8c4daa80_42c S_g8c4daa80_42c;
typedef struct Object Object;
struct Object {
    char unknown0[0x90];
    int f90;
    char unknown94[0x74];
    int f108;
};
struct S_g8c4daa80 {
    char unknown0[0x42c];
    S_g8c4daa80_42c *f42c;
};
struct S_g8c4daa80_42c {
    char unknown0[0x1c];
    int f1c;
};
extern char g_8c316250[];
extern void call_8c089348(Object *);
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c157dd4(Object *o)
{
    call_8c089348(o);
    call_8c38c5b6(-0xff0100);
    if (!(o->f90 >= 0)) {
        o->f108 = (int)(*(int *)0x8c4daa84);
        call_8c38cf80(0x130020, (void *)((g_8c316250 + 0x173)));
    } else {
        o->f108 = (int)((*(S_g8c4daa80 **)0x8c4daa80)->f42c->f1c);
        call_8c38cf80(0x130020, (void *)((g_8c316250 + 0x18d)));
    }
    call_8c38c5b6(-0xf0f10);
}
