typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x654];
    int f654;
    int f658;
    int f65c;
    int f660;
};
extern int operation_8c09a64c(int);
extern void call_8c197044(Object *);
extern void call_8c196ec4(Object *);
void operation_8c1971cc(Object *o)
{
    int v3;
    int t1;
    int t2;
    t1 = operation_8c09a64c(0x20000);
    if (t1 != 0) {
        if (!((*(int *)((char *)o + 0x658) += 4) > 0x96)) {
            goto L_8c197224;
        }
        o->f658 = 0x96;
    } else {
        t2 = operation_8c09a64c(0x10000);
        if (t2 != 0) {
            *(int *)((char *)o + 0x658) -= 4;
            if (0xa > o->f658) {
                o->f658 = 0xa;
            }
            v3 = (int)o->f658;
            if (o->f654 > v3) {
                o->f654 = (int)(v3);
            }
        }
    }
L_8c197224:;
    if (!(--*(int *)((char *)o + 0x654) >= 0)) {
        call_8c197044(o);
        *(int *)((char *)o + 0x65c) += 1;
        if (o->f65c >= 0x20 || o->f660 == 0) {
            call_8c196ec4(o);
            o->f65c = 0;
        } else {
        }
        o->f654 = (int)(o->f658);
    }
}
