typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_40 Arg0_40;
typedef struct Arg0_44 Arg0_44;
typedef struct S_vv13 S_vv13;
typedef struct S_vv13_98 S_vv13_98;
typedef struct S_vv40 S_vv40;
typedef struct S_vv40_98 S_vv40_98;
typedef struct S_vv6 S_vv6;
typedef struct S_vv61 S_vv61;
typedef struct S_vv61_98 S_vv61_98;
typedef struct S_vv6_98 S_vv6_98;
struct Object {
    char unknown0[0x28];
    char f28;
    char f29;
    char unknown2a[0xa];
    Arg0_34 *f34;
    char unknown38[0x8];
    Arg0_40 *f40;
    Arg0_44 *f44;
};
struct Arg0_44 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv6 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0x16];
    S_vv6_98 *f98;
};
struct S_vv13 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0x16];
    S_vv13_98 *f98;
};
struct S_vv40 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0x16];
    S_vv40_98 *f98;
};
struct S_vv61 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0x16];
    S_vv61_98 *f98;
};
extern int operation_8c1571f4(void *);
extern void set_global_8c19b290(void);
extern void request_resource_release(void *);
extern void call_8c156ec0(void *);
extern void operation_8c19a044(void *, int);
extern void clear_global_8c19b29c(void);
extern int operation_8c19b054(void);
extern int call_8c372d38(int, void *);
void operation_8c1cb5e0(Object *o)
{
    int v1;
    S_vv6 *v6;
    S_vv13 *v13;
    int v17;
    S_vv40 *v40;
    S_vv61 *v61;
    int t1;
    int t2;
    int t3;
    if (((o->f44->f80 & 0xffff & 2)) == 0) {
        v17 = (int)(o->f44->f80 & 0xffff);
    } else {
        t1 = operation_8c1571f4((void *)(o->f44));
        if (t1 != 0) {
            if (t1 == 1) {
                goto L_8c1cb698;
            }
            v17 = (int)/* ? clobbered */ 0;
            goto L_8c1cb792;
        }
        o->f29 = 7;
        v1 = (int)6;
        o->f28 = v1;
        *(int *)0x8c4e2e24 = 1;
        set_global_8c19b290();
        if (o->f40 != 0) {
            request_resource_release((void *)(o->f40));
            o->f40 = (Arg0_40 *)0;
        }
        if (o->f44 != 0) {
            request_resource_release((void *)(o->f44));
            o->f44 = (Arg0_44 *)0;
        }
        if (o->f34 != 0) {
            call_8c156ec0((void *)(o->f34));
        }
        v6 = (S_vv6 *)o->f34;
        if (v6 != 0) {
            v6->f80 = (v6->f80 & 0xffff) & -3;
            if (v6->f98 != 0) {
                operation_8c19a044((void *)(v6->f98), 1);
            }
        }
        if (o->f34 == 0) {
        } else {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        return;
L_8c1cb698:;
        o->f28 = 0;
        clear_global_8c19b29c();
        if (o->f40 != 0) {
            request_resource_release((void *)(o->f40));
            o->f40 = (Arg0_40 *)0;
        }
        if (o->f44 != 0) {
            request_resource_release((void *)(o->f44));
            o->f44 = (Arg0_44 *)0;
        }
        if (o->f34 != 0) {
            call_8c156ec0((void *)(o->f34));
        }
        v13 = (S_vv13 *)o->f34;
        if (v13 != 0) {
            v13->f80 = (v13->f80 & 0xffff) & -3;
            if (v13->f98 != 0) {
                operation_8c19a044((void *)(v13->f98), 1);
            }
        }
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        return;
    }
    if (((v17 & 4)) != 0) {
        clear_global_8c19b29c();
        if (o->f40 != 0) {
            request_resource_release((void *)(o->f40));
            o->f40 = (Arg0_40 *)0;
        }
        if (o->f44 != 0) {
            request_resource_release((void *)(o->f44));
            o->f44 = (Arg0_44 *)0;
        }
        if (o->f34 != 0) {
            call_8c156ec0((void *)(o->f34));
        }
        v40 = (S_vv40 *)o->f34;
        if (v40 != 0) {
            v40->f80 = (v40->f80 & 0xffff) & -3;
            if (v40->f98 != 0) {
                operation_8c19a044((void *)(v40->f98), 1);
            }
        }
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        o->f28 = 0;
        return;
    }
L_8c1cb792:;
    t2 = operation_8c19b054();
    t3 = call_8c372d38((int)((char)t2), (void *)((void *)0x8c319870));
    if (t3 != 0) {
        clear_global_8c19b29c();
        if (o->f40 != 0) {
            request_resource_release((void *)(o->f40));
            o->f40 = (Arg0_40 *)0;
        }
        if (o->f44 != 0) {
            request_resource_release((void *)(o->f44));
            o->f44 = (Arg0_44 *)0;
        }
        if (o->f34 != 0) {
            call_8c156ec0((void *)(o->f34));
        }
        v61 = (S_vv61 *)o->f34;
        if (v61 != 0) {
            v61->f80 = (v61->f80 & 0xffff) & -3;
            if (v61->f98 != 0) {
                operation_8c19a044((void *)(v61->f98), 1);
            }
        }
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        o->f28 = 0;
    }
}
