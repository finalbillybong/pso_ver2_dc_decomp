typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_600 Arg0_600;
typedef struct Arg0_638 Arg0_638;
typedef struct Arg0_63c Arg0_63c;
typedef struct Arg0_640 Arg0_640;
typedef struct Arg0_650 Arg0_650;
typedef struct Arg0_664 Arg0_664;
typedef struct Arg0_670 Arg0_670;
typedef struct Arg0_6d8 Arg0_6d8;
typedef struct Arg0_6e8 Arg0_6e8;
typedef struct Arg0_6ec Arg0_6ec;
typedef struct Arg0_6f0 Arg0_6f0;
typedef struct Arg0_75c Arg0_75c;
typedef struct Arg0_760 Arg0_760;
typedef struct S_vv1 S_vv1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv12 S_vv12;
typedef struct S_vv18 S_vv18;
typedef struct S_vv21 S_vv21;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x61c];
    Arg0_638 *f638;
    Arg0_63c *f63c;
    char unknown640[0x30];
    Arg0_670 *f670;
    char unknown674[0x64];
    Arg0_6d8 *f6d8;
    char unknown6dc[0xc];
    Arg0_6e8 *f6e8;
    Arg0_6ec *f6ec;
    Arg0_6f0 *f6f0;
    char unknown6f4[0x68];
    Arg0_75c *f75c;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_760 {
    char unknown0[0x4];
    short f04;
};
struct S_vv10 {
    char unknown0[0x4];
    short f04;
};
struct S_vv12 {
    char unknown0[0x4];
    short f04;
};
struct S_vv18 {
    char unknown0[0x4];
    short f04;
};
struct S_vv21 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_664 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_650 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_600 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_640 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4da3ac;
extern void call_8c18de08(void *);
extern void operation_8c0f3384(int, int);
extern void operation_8c052124(void *);
extern void destroy_hierarchy_node(void *, short);
extern void destroy_color_rise_8c05bd84(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c144094(Object *o, int a1)
{
    S_vv1 *v1;
    int v4;
    int v5;
    int v9;
    S_vv10 *v10;
    S_vv12 *v12;
    S_vv18 *v18;
    S_vv21 *v21;
    int v24;
    int v25;
    int v28;
    int v29;
    int v30;
    int v32;
    int v33;
    int v34;
    int v36;
    int v37;
    int v38;
    int v40;
    int v41;
    if (o == 0) {
    } else {
        o->dispatch = (void *)0x8c26df5c;
        if (o->f75c != 0) {
            v1 = (S_vv1 *)o->f75c;
            v1->f04 |= 1;
            o->f75c = (Arg0_75c *)0;
        }
        v9 = (int)0;
        goto L_8c1440e6;
        v4 = (int)0;
L_8c1440ce:;
        v5 = (int)(v4 << 2);
        if (*(int *)((char *)((char *)o + 0x760) + (v5)) != 0) {
            (*(Arg0_760 **)((char *)((char *)o + 0x760) + (v5)))->f04 |= 1;
            *(int *)((char *)((char *)o + 0x760) + (v5)) = 0;
        }
        v9 = (int)(v4 + 1);
L_8c1440e6:;
        v4 = (int)v9;
        if (6 > v9) {
            goto L_8c1440ce;
        }
        call_8c18de08((void *)(o->f638));
        o->f638 = (Arg0_638 *)0;
        if (o->f6ec != 0) {
            v10 = (S_vv10 *)o->f6ec;
            v10->f04 |= 1;
            o->f6ec = (Arg0_6ec *)0;
        }
        if (o->f6f0 != 0) {
            v12 = (S_vv12 *)o->f6f0;
            v12->f04 |= 1;
            o->f6f0 = (Arg0_6f0 *)0;
        }
        if (o->f6e8 != 0) {
            operation_8c0f3384((int)(o->f6e8), 1);
            o->f6e8 = (Arg0_6e8 *)0;
        }
        if (o->f6d8 != 0) {
            v18 = (S_vv18 *)o->f6d8;
            v18->f04 |= 1;
            o->f6d8 = (Arg0_6d8 *)0;
        }
        if (o->f670 != 0) {
            v21 = (S_vv21 *)o->f670;
            v21->f04 |= 1;
            o->f670 = (Arg0_670 *)0;
        }
        v28 = (int)2;
        goto L_8c144184;
        v24 = (int)2;
L_8c144170:;
        v25 = (int)(v24 << 2);
        (*(Arg0_664 **)((char *)((char *)o + 0x664) + (v25)))->f04 |= 1;
        *(int *)((char *)((char *)o + 0x664) + (v25)) = 0;
        v28 = (int)(v24 + -1);
L_8c144184:;
        v24 = (int)v28;
        if (v28 >= 0) {
            goto L_8c144170;
        }
        v32 = (int)4;
        goto L_8c1441a8;
        v29 = (int)4;
L_8c144194:;
        v30 = (int)(v29 << 2);
        (*(Arg0_650 **)((char *)((char *)o + 0x650) + (v30)))->f04 |= 1;
        *(int *)((char *)((char *)o + 0x650) + (v30)) = 0;
        v32 = (int)(v29 + -1);
L_8c1441a8:;
        v29 = (int)v32;
        if (v32 >= 0) {
            goto L_8c144194;
        }
        v36 = (int)9;
        goto L_8c1441cc;
        v33 = (int)9;
L_8c1441b8:;
        v34 = (int)(v33 << 2);
        (*(Arg0_600 **)((char *)((char *)o + 0x600) + (v34)))->f04 |= 1;
        *(int *)((char *)((char *)o + 0x600) + (v34)) = 0;
        v36 = (int)(v33 + -1);
L_8c1441cc:;
        v33 = (int)v36;
        if (v36 >= 0) {
            goto L_8c1441b8;
        }
        v40 = (int)3;
        goto L_8c1441f0;
        v37 = (int)3;
L_8c1441dc:;
        v38 = (int)(v37 << 2);
        (*(Arg0_640 **)((char *)((char *)o + 0x640) + (v38)))->f04 |= 1;
        *(int *)((char *)((char *)o + 0x640) + (v38)) = 0;
        v40 = (int)(v37 + -1);
L_8c1441f0:;
        v37 = (int)v40;
        if (v40 >= 0) {
            goto L_8c1441dc;
        }
        call_8c18de08((void *)(o->f63c));
        operation_8c052124((void *)o);
        v41 = (int)g_8c4da3ac;
        if (v41 == (int)(o)) {
            g_8c4da3ac = 0;
        }
        destroy_hierarchy_node((void *)(((char *)o + 0x3f4)), (short)-1);
        destroy_color_rise_8c05bd84((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
