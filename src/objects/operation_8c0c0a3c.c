typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x20e];
    short f30a;
    char unknown30c[0x60];
    Arg0_36c *f36c;
    char unknown370[0x20];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    int f3a0;
    int f3a4;
    char unknown3a8[0x4c];
    float f3f4;
};
struct Arg0_36c {
    char unknown0[0x8];
    Arg0_36c_8 *f08;
};
extern int scan_actor_view_entries(void *);
extern void call_8c0c200c(Object *);
extern void create_effect_777c(void *, int);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern void call_8c0c1a90(Object *, int);
extern void call_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, float, void *);
extern void refresh_follow_effect_8c052180(void *);
extern void call_8c0446f8(float, float, float, Object *, void *);
extern int check_range_8c01cf68(void *, float);
extern void call_8c05fbf8(int, void *, int, int);
extern int call_8c04a52c(Object *, int, float);
void operation_8c0c0a3c(Object *o)
{
    int v1;
    short v6;
    int v17;
    int v19;
    int v16;
    short v49;
    int t1;
    int t2;
    int t3;
    int t4;
    int st;
    st = o->f398;
    switch (st) {
    case 0:
        {
            int flag = 0x1000000;
            o->f34 &= -0x4040001;
            v1 = (int)0;
            if (((o->f34 & flag)) == 0) {
            t4 = scan_actor_view_entries((void *)o);
                v1 = (int)t4;
            }
        }
        if (v1 > 0) {
            o->ff0 = 2;
            o->f3a0 = 0x5a;
            o->f398 = 1;
        } else {
            if (((o->f34 & 0x1000000)) != 0) {
                if (((o->f3a4 & 1)) != 0) {
                    goto L_8c0c0b00;
                }
                if (o->f30a == 0xb) {
                    goto L_8c0c0b00;
                }
                o->f39c = o->f30a;
                o->f390 = 0xb;
            } else {
                if (((o->f3a4 & 1)) == 0) {
                    v6 = (short)o->f30a;
                    if (v6 != 0) {
                        o->f39c = (int)(v6);
                        o->f390 = 0;
                    }
                }
            }
        }
L_8c0c0b00:;
        o->f3a4 &= -0x40001;
        return;
    case 1:
    case 2:
    case 3:
        switch (st) {
        case 1:
            if (!(5.0f > o->ff8)) {
                call_8c0c200c(o);
                create_effect_777c((void *)(((char *)o + 0x3b8)), 0xf7);
                create_effect_777c((void *)(((char *)o + 0x3c4)), 0xf7);
                o->f398 = 2;
            }
            break;
        case 2:
            call_8c05fd7c(0x3001e, o, (void *)(((char *)o + 0x3c)), 0, 0);
            if (!(20.0f > o->ff8)) {
                call_8c0c200c(o);
                v16 = (int)0x3d0;
                for (v17 = 0; *(int *)((char *)o + v16) > v17; v17++) {
                    call_8c0c1a90(o, v17);
                }
                o->f398 = 3;
            }
            break;
        }
        call_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        refresh_follow_effect_8c052180((void *)o);
        *(int *)((char *)o + 0x3a0) -= 1;
        if (o->f3a0 > 0) {
            return;
        }
        o->f3a0 = 0x2d;
        o->ff0 = 1;
        o->f398 = 4;
        return;
    case 4:
        call_8c0446f8(o->f3f4, 100.0f, 100.0f, o, (void *)(o->f36c->f08));
        call_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        refresh_follow_effect_8c052180((void *)o);
        t1 = check_range_8c01cf68((void *)o, 4.0f);
        if (t1 == 0) {
            t2 = check_range_8c01cf68((void *)o, 20.0f);
            if (t2 == 0) {
                goto L_8c0c0c2e;
            }
        }
        call_8c05fbf8(0x30023, (void *)(((char *)o + 0x3c)), 0, 0);
L_8c0c0c2e:;
        t3 = call_8c04a52c(o, 0, 50.0f);
        if ((unsigned short)t3 != 0xffff) {
            if (((o->f3a4 & 1)) != 0) {
                return;
            }
            if (o->f30a == 0xb) {
                return;
            }
            o->f39c = o->f30a;
            o->f390 = 0xb;
            return;
        }
        *(int *)((char *)o + 0x3a0) -= 1;
        if (!(o->f3a0 > 0)) {
            if (((o->f3a4 & 1)) == 0) {
                v49 = (short)o->f30a;
                if (v49 != 0) {
                    o->f39c = (int)(v49);
                    o->f390 = 0;
                }
            }
        }
        return;
    case -1:
        break;
    }
}
