typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_1d4 Arg0_1d4;
typedef struct Arg0_23c Arg0_23c;
struct Object {
    char unknown0[0x1d4];
    Arg0_1d4 *f1d4;
    char unknown1d8[0x5c];
    int f234;
    char unknown238[0x4];
    Arg0_23c *f23c;
};
extern void call_8c37e02c(int, void *);
extern void call_8c3aa716(void *);
void operation_8c23bd7c(Object *o)
{
    char *v62;
    v62 = (char *)*(int *)0x8c4689f0;
    if ((int)(v62) > 0 && 4 > (int)(v62)) {
        call_8c37e02c(0, (void *)(o->f23c));
        return;
    }
    if ((int)(v62) == 4 && o->f1d4 != 0 && o->f234 == 1) {
        call_8c3aa716((void *)(o->f1d4));
    }
}
