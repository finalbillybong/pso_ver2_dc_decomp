typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_834 Arg0_834;
typedef struct Arg0_838 Arg0_838;
typedef struct Arg0_83c Arg0_83c;
struct Object {
    char unknown0[0x118];
    int f118;
    char unknown11c[0x48c];
    float f5a8;
    char unknown5ac[0x288];
    Arg0_834 *f834;
    Arg0_838 *f838;
    Arg0_83c *f83c;
};
extern void call_8c38ade4(int);
extern void call_8c3827d8(void *);
extern void operation_8c02a998(int);
extern void restore_child_blend(void);
extern void call_8c38ad10(void);
extern void call_8c3aa716(void *);
extern void call_8c0351f0(void *, void *, float);
void operation_8c021b50(Object *o)
{
    int v1;
    int v2;
    if (o->f83c != 0) {
        call_8c38ade4((int)((int)o->f118 + 0xe80));
        call_8c3827d8((void *)(((char *)o + 0xa90)));
        operation_8c02a998((int)(o->f83c));
        restore_child_blend();
        call_8c38ad10();
    }
    if (o->f838 != 0) {
        call_8c38ade4((int)((int)o->f118 + 0xec0));
        call_8c3827d8((void *)(((char *)o + 0x964)));
        call_8c3aa716((void *)(o->f838));
        restore_child_blend();
        call_8c38ad10();
    }
    if (o->f834 != 0) {
        call_8c38ade4((int)((int)o->f118 + 0xec0));
        call_8c3827d8((void *)(((char *)o + 0x964)));
        v1 = (int)o->f834;
        v2 = (int)o + 0x7e4;
        call_8c0351f0((void *)v1, (void *)v2, o->f5a8);
        restore_child_blend();
        call_8c38ad10();
    }
}
