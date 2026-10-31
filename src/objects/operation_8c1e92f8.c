typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    Vector3 f0c;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x2a4];
    short f30c;
    char unknown30e[0x2];
    int f310;
    char unknown314[0x68];
    int f37c;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c0c4f08(void *);
extern int call_8c02a6d4(S_c8c021ef8 *);
extern void operation_8c01d778(void *, short);
extern void operation_8c1e8e60(int, int, int);
void operation_8c1e92f8(Object *o)
{
    int v15;
    int v5;
    short v8;
    int v10;
    int v12;
    int v11;
    Object *base;
    S_c8c021ef8 *t1;
    int v1;
    int t2;
    int t3;
    unsigned short id;
    base = o;
    t1 = lookup_low_id((int)(base->f02));
    if (t1 != 0) {
        v1 = 0;
        v5 = v1;
        id = base->f02;
        if (g_8c4627c8 == 0 && id == g_8c418248) {
            v5 = 1;
        }
        if (v5 == 0) {
            t2 = call_8c0c4f08((void *)(&base->f0c));
            if (t2 == 0) {
                v1 = 1;
            }
        }
        if (v1 != 0) {
            *(Vector3 *)&t1->f3c = *(Vector3 *)&base->f0c;
            v8 = (short)base->f08;
            if (v8 >= 0) {
                t1->f37c = (int)(v8);
            }
            t1->f64 = base->f06;
            t3 = call_8c02a6d4(t1);
            if (t3 != 0) {
                v10 = (int)t1->f310;
                v11 = (int)(((v10 & 0x8100)) != 0);
                if (v11 == 0) {
                    v12 = (int)(((v10 & 0x200)) != 0);
                    if ((v12 != 0 && 2 >= t1->f30c) || (v15 = (int)(((v10 & 0x4000)) != 0), v15 != 0 && t1->f30c == 0)) {
                        return;
                    }
                    if (base->f0a >= 0) {
                        operation_8c01d778((void *)t1, base->f0a);
                    }
                    switch (base->f04) {
                    case 0:
                        t1->f34 &= -0x100001;
                        break;
                    case 1:
                        t1->f34 |= 0x100000;
                    }
                    operation_8c1e8e60((int)t1, 1, 0);
                }
            }
        }
    }
}
