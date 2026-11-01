typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_38 S_frame_38;
typedef struct Object Object;
typedef struct Arg0_40 Arg0_40;
typedef struct Arg0_48 Arg0_48;
typedef struct Arg0_5c Arg0_5c;
typedef struct Arg0_78 Arg0_78;
typedef struct S_vv6_0 S_vv6_0;
struct Arg0_78 {
    char unknown0[0x2c];
    int f2c;
    int f30;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14[3];
    int f20[3];
    int f2c[3];
    int f38[3];
    int f44[3];
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x36];
    int f3c;
    Arg0_40 *f40;
    char unknown44[0x4];
    Arg0_48 *f48;
    char unknown4c[0x10];
    Arg0_5c *f5c;
};
struct Arg0_5c {
    int f00;
};
struct Arg0_48 {
    int f00;
};
struct Arg0_40 {
    int f00;
};
extern int call_8c1334f0(int, void *, Frame *, int, int);
extern void game_free_8c011ec0(int);
extern int operation_8c13f2ac(void *);
extern void call_8c09b428(void *, int, int);
extern void call_8c09bf94(int);
extern void operation_8c14081c(void *);
void operation_8c1405bc(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    int v5;
    int v3;
    int v4;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int t1;
    int t2;
    int t3;
    v1 = (int)0;
    while (6 > v1) {
        v2 = (int)((*(Arg0_78 **)((char *)((char *)o + 0x78) + (v1 << 2)))->f30 == 2);
        if (v2 == 0) {
            return;
        }
        v1 = (int)(v1 + 1);
    }
    v3 = (int)0x4e4a544c;
    v5 = (int)0;
    v4 = (int)0x4e4a434d;
    while (6 > v5) {
        v6 = (int)(v5 << 2);
        (&frame)->f04 = 0;
        v7 = (int)((*(Arg0_78 **)((char *)((char *)o + 0x78) + (v6)))->f30 == 2);
        v8 = (int)0;
        if (v7 != 0) {
            v8 = (int)(*(Arg0_78 **)((char *)((char *)o + 0x78) + (v6)))->f2c;
        }
        t1 = call_8c1334f0(v8, (void *)(&(&frame)->f04), (Frame *)((&frame)), 0, 0);
        if (t1 == 0) {
            return;
        }
        v9 = (int)(&frame)->f00;
        if (v9 != v3) {
            return;
        }
        game_free_8c011ec0(t1);
        v10 = (int)((*(Arg0_78 **)((char *)((char *)o + 0x78) + (v6)))->f30 == 2);
        if (v10 != 0) {
            v11 = (int)(*(Arg0_78 **)((char *)((char *)o + 0x78) + (v6)))->f2c;
        } else {
            v11 = (int)0;
        }
        t2 = call_8c1334f0(v11, (void *)(&(&frame)->f04), (Frame *)((&frame)), 0, 0);
        *(int *)((char *)((char *)v6 + 0x0) + ((int)(&(&frame)->f38))) = (int)(t2);
        if (*(int *)((char *)((char *)v6 + 0x0) + ((int)(&(&frame)->f38))) != 0) {
            v12 = (int)(&frame)->f00;
            if (v12 == v4) {
                goto L_8c14069e;
            }
        }
        v14 = (int)0;
        while (6 > v14) {
            game_free_8c011ec0((int)(*(S_frame_38 **)((char *)frame.f38 + (v14 << 2))));
            v14 = (int)(v14 + 1);
        }
        return;
L_8c14069e:;
        t3 = operation_8c13f2ac((void *)(*(S_vv6_0 **)((char *)((char *)v6 + 0x0) + ((int)(&(&frame)->f38)))));
        if (t3 == 0) {
            v15 = (int)0;
            while (6 > v15) {
                game_free_8c011ec0((int)(*(S_frame_38 **)((char *)frame.f38 + (v15 << 2))));
                v15 = (int)(v15 + 1);
            }
            return;
        }
        v5 = (int)(v5 + 1);
    }
    (&frame)->f08 = (int)(o->f3c);
    (&frame)->f0c = (int)(o->f5c->f00);
    (&frame)->f10 = (int)(o->f48->f00);
    v16 = (int)0;
    while (3 > v16) {
        v17 = (int)(v16 << 2);
        *(int *)((char *)frame.f14 + (v17)) = (int)(*(int *)((char *)((char *)o + 0x6c) + (v17)));
        *(int *)((char *)frame.f20 + (v17)) = (int)(*(int *)((char *)frame.f38 + (v17)));
        *(int *)((char *)frame.f2c + (v17)) = (int)(*(int *)((char *)frame.f44 + (v17)));
        v16 = (int)(v16 + 1);
    }
    call_8c09b428((void *)(&(&frame)->f08), v16, 3);
    call_8c09bf94((int)((int)o->f3c + 0x48));
    v18 = (int)0;
    while (6 > v18) {
        game_free_8c011ec0((int)(*(S_frame_38 **)((char *)frame.f38 + (v18 << 2))));
        v18 = (int)(v18 + 1);
    }
    o->f40->f00 &= -0x81;
    operation_8c14081c((void *)o);
    o->f04 |= 1;
}
