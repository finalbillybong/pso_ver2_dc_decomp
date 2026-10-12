typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x4];
    int f30;
    char unknown34[0x38];
    int f6c;
    int f70;
    char unknown74[0x4];
    int f78;
};
extern int call_8c03ed64(void);
extern int call_8c011ecc(int);
extern int call_8c13f47c(void *, int);
extern void call_8c03d360(int, int, void *, void *, int, int, int);
void operation_8c13f65c(Object *o)
{
    int v4;
    int v7;
    int v10;
    int t1;
    int t2;
    int t3;
    t1 = call_8c03ed64();
    if (t1 != 0) {
        if (*(int *)0x8c4d9e58 < 0 || *(int *)0x8c4d9e58 > 1) {
            v10 = (int)0;
            goto L_8c13f69e;
        }
        if (o->f70 != 0) {
            v7 = (int)0;
        } else {
            if (*(int *)0x8c4d9e58 >= 1) {
                v4 = (int)0;
            } else {
                *(int *)0x8c4d9e58 += 1;
                o->f70 = 1;
                v4 = (int)1;
            }
            v7 = (int)v4;
        }
        v10 = (int)v7;
L_8c13f69e:;
        if (v10 != 0) {
            t2 = call_8c011ecc(0x440);
            if (t2 != 0) {
                t3 = call_8c13f47c(o->f28, 0);
                call_8c03d360(t2, 6, ((char *)o + 0x64), ((char *)o + 0x68), 0, 0, t3);
            }
            o->f6c = t2;
            if (t2 != 0) {
                o->f78 = 0x12c;
                o->f30 = 1;
            }
        }
    }
}
