typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db520 S_g8c4db520;
typedef struct Object Object;
typedef struct Arg0_ec Arg0_ec;
struct Object {
    char unknown0[0xe8];
    int fe8;
    Arg0_ec *fec;
};
extern int operation_8c03d338(void);
extern void call_8c1b0718(Object *);
extern int operation_8c173460(void *, int);
extern void operation_8c05428c(void *, int, int);
extern void call_8c1b06e4(Object *);
void operation_8c1b0678(Object *o)
{
    int t1;
    int t2;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        call_8c1b0718(o);
        return;
    }
    if (o->fe8 != 1) {
        t2 = operation_8c173460((void *)(*(S_g8c4db520 **)0x8c4db520), (int)(o->fec));
        if (t2 != 0) {
            o->fe8 = 1;
            operation_8c05428c((void *)o, 0, 1);
        }
        call_8c1b06e4(o);
    }
}
