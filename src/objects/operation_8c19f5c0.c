typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct Frame {
    int f00;
};
struct Object {
    int tag;
    char unknown4[0x18];
    unsigned char f1c;
    char unknown1d[0xb];
    int f28;
    int f2c;
    int f30;
};
extern int lookup_low_id(int);
extern int call_8c163428(int, int, Frame *);
extern int operation_8c1c7524(void *);
extern int call_8c1c7ffc(int);
extern int call_8c1c9978(int);
extern int call_8c1c9f98(int);
extern int call_8c1c7548(int);
extern int call_8c1c9244(int);
extern int call_8c1c8e50(int, int, int);
void operation_8c19f5c0(Object *o, int a1)
{
    Frame frame;
    int t1;
    int t4;
    int t3;
    int t2;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        t4 = call_8c163428(t1, a1, (Frame *)((&frame)));
        t2 = operation_8c1c7524((void *)a1);
        if (o->f1c == 0x2d) {
            if (t2 == 0) {
                t3 = call_8c1c7ffc(a1);
                if (t3 != 0) {
                    o->f1c = 0x19;
                    goto L_8c19f624;
                }
            }
            if ((((&frame)->f00 & 1)) != 0) {
                o->f1c = 0x13;
            }
L_8c19f624:;
            o->f28 = -1;
        }
        if (t2 == 0) {
            o->f2c = -1;
            o->f30 = -0xff0004;
            return;
        }
        if (t4 != 0) {
            o->f2c = -1;
            t5 = call_8c1c9978(a1);
            if (t5 != 0) {
                o->f30 = -0x1c3d8;
                return;
            }
            t6 = call_8c1c9f98(a1);
            if (t6 == 2) {
                o->tag |= 0x800;
                return;
            }
            t7 = call_8c1c7548(a1);
            if ((unsigned int)(unsigned char)t7 >= (unsigned int)9) {
                o->f30 = -0x1600;
                return;
            }
            t8 = call_8c1c9244(a1);
            if (t8 != 0) {
                o->f30 = -0x9e17ad;
                return;
            }
            t9 = call_8c1c8e50(a1, 0x10000, 0);
            if (t9 != 0) {
                o->f30 = -0x979798;
                return;
            }
            o->f30 = -1;
            return;
        }
        if ((((&frame)->f00 & 1)) != 0) {
            o->f30 = -0x979798;
            o->f2c = -0x555556;
            return;
        }
        o->f30 = -0x979798;
        o->f2c = -0x555556;
    }
}
