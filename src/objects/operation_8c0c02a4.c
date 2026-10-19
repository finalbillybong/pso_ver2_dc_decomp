typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x282];
    float f374;
    char unknown378[0x20];
    int f398;
    char unknown39c[0x4];
    int f3a0;
    int f3a4;
};
extern void call_8c01c5f0(Object *);
extern void call_8c0c1948(Object *, void *, float);
extern int check_range_8c01cf68(void *, float);
extern void call_8c05fbf8(int, void *, int, int);
extern void call_8c0521a0(Object *);
extern void operation_8c04a43c(void *, void *, float);
void operation_8c0c02a4(Object *o)
{
    void *v9;
    float v10;
    int t1;
    int t2;
    if (((o->f3a4 & 0x40000)) == 0) {
        switch (o->f398) {
        case -1:
            break;
        case 0:
            o->ff0 = 1;
            o->f398 = 1;
            o->f3a0 = 0x96;
            o->f34 &= -0x4040001;
        case 1:
            call_8c01c5f0(o);
            call_8c0c1948(o, (void *)(((char *)o + 0x54)), o->f374);
            t1 = check_range_8c01cf68((void *)o, 4.0f);
            if (t1 == 0) {
                t2 = check_range_8c01cf68((void *)o, 20.0f);
                if (t2 == 0) {
                    goto L_8c0c032a;
                }
            }
            call_8c05fbf8(0x30023, (void *)(((char *)o + 0x3c)), 0, 0);
L_8c0c032a:;
            *(int *)((char *)o + 0x3a0) -= 1;
            if (!(o->f3a0 > 0)) {
                o->ff0 = 0;
                o->f398 = 2;
                o->f3a0 = 0x5a;
            }
            call_8c0521a0(o);
            v9 = (void *)0;
            v10 = (float)0.0f;
            operation_8c04a43c((void *)o, (void *)v9, v10);
            return;
        case 2:
            call_8c01c5f0(o);
            call_8c0521a0(o);
            *(int *)((char *)o + 0x3a0) -= 1;
            if (!(o->f3a0 > 0)) {
                o->f398 = 0;
            }
        }
    }
}
