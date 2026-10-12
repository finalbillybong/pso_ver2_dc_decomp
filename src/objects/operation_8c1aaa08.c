typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x2];
    short f02;
    char unknown4[0x8];
    int f0c;
    short f10;
};
struct Arg1 {
    char unknown0[0x6d4];
    short f6d4;
    short f6d6;
};
extern void call_8c1aab1c(Object *);
extern int call_8c1aaafc(Object *);
extern int call_8c02606c(int, int);
extern void call_8c0dda80(int);
void operation_8c1aaa08(Object *o, Arg1 *a1, int a2, int a3)
{
    int v1;
    int v2;
    int v5;
    int v6;
    int t1;
    int t2;
    v1 = (int)(((o->f0c & 2)) != 0);
    if (v1 != 0) {
        v2 = (int)(((o->f0c & 0x20)) == 0);
        if (v2 != 0) {
            goto L_8c1aaa3c;
        }
    }
    o->f0c |= 4;
L_8c1aaa3c:;
    v5 = (int)(((o->f0c & 2)) != 0);
    if (v5 != 0) {
        v6 = (int)(((o->f0c & 4)) != 0);
        if (v6 == 0) {
            o->f0c |= 1;
            call_8c1aab1c(o);
            t1 = call_8c1aaafc(o);
            if ((short)t1 > (short)a3) {
                o->f10 = a3;
            }
            t2 = call_8c02606c((int)a1, a2);
            a1->f6d4 = 2;
            a1->f6d6 = t2;
            o->f02 = t2;
            call_8c0dda80(a2);
        }
    }
}
