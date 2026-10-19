typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
};
extern int keyboard_character(void);
extern int operation_8c25c884(Object *);
extern void operation_8c01c1a4(int);
void operation_8c25c748(Object *o)
{
    int v4;
    int t1;
    int t2;
    t1 = keyboard_character();
    v4 = t1;
    if (t1 >= 0x61 && 0x7a >= t1) {
        v4 = t1 + -0x61;
    } else if (v4 >= 0x41 && 0x5a >= v4) {
        v4 = v4 + -0x41;
    } else {
        v4 = -1;
    }
    if (v4 != -1) {
        switch (o->f20) {
        case 0:
            if (v4 == 0x14) {
                o->f20 = 1;
                goto L_8c25c85a;
            }
            o->f20 = 0;
            break;
        case 1:
            if (v4 == 0x11) {
                o->f20 = 2;
                goto L_8c25c85a;
            }
            o->f20 = 0;
            break;
        case 2:
            if (v4 == 0) {
                o->f20 = 3;
                goto L_8c25c85a;
            }
            o->f20 = 0;
            break;
        case 3:
            if (v4 == 4) {
                o->f20 = 4;
                goto L_8c25c85a;
            }
            o->f20 = 0;
            break;
        case 4:
            if (v4 == 0xd) {
                o->f20 = 5;
                goto L_8c25c85a;
            }
            o->f20 = 0;
            break;
        case 5:
            if (v4 == 3) {
                o->f20 = 6;
                goto L_8c25c85a;
            }
            o->f20 = 0;
            break;
        case 6:
            if (v4 == 8) {
                o->f20 = 7;
                goto L_8c25c85a;
            }
            o->f20 = 0;
            break;
        case 7:
            if (v4 == 0xd) {
                o->f20 = 8;
                goto L_8c25c85a;
            }
            o->f20 = 0;
            break;
        case 8:
            if (v4 == 6) {
                o->f20 = 9;
            } else {
                o->f20 = 0;
            }
        }
    }
L_8c25c85a:;
    if (o->f20 == 9) {
        t2 = operation_8c25c884(o);
        if (t2 == 0) {
            operation_8c01c1a4(0x20);
        }
    }
}
