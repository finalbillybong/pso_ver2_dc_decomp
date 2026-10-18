typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_48 Arg0_48;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x26];
    Arg0_48 *f48;
    char unknown4c[0x8];
    int f54;
    char unknown58[0x1c];
    int f74;
};
struct Arg0_48 {
    char unknown0[0x34];
    int f34;
};
struct S_g8c4dbde0 {
    char unknown0[0x20];
    int f20;
};
extern S_g8c4dbde0 *g_8c4dbde0;
extern int hierarchy_is_active(void *);
extern int operation_8c1dd614(void *);
extern void request_resource_release(void *);
extern int operation_8c027138(void);
extern void *spawn_item_8c0fc440(unsigned short);
extern void operation_8c0fc508(void *, int);
void operation_8c0dd1c0(Object *o)
{
    int v1;
    int v16;
    int v17;
    int t3;
    if (o->f48 != 0) {
        if (hierarchy_is_active((void *)o->f48) == 0 || (v1 = !(o->f48->f34 & 1)) != 0) {
            o->f48 = (Arg0_48 *)0;
        }
    }
    v16 = (unsigned short)o->f20;
    if ((v16 & 4) == 0) {
        if (g_8c4dbde0 == 0) {
            v17 = 0;
        } else {
            v17 = g_8c4dbde0->f20 & 1;
        }
        if (v17 == 0 && (v16 & 1) == 0 && o->f74 == 0) {
            if (o->f54 == 0 || operation_8c1dd614((void *)o->f54) == 0) {
                goto L_8c0dd254;
            }
        }
    }
    if (o->f48 != 0) {
        request_resource_release((void *)(o->f48));
        o->f48 = (Arg0_48 *)0;
    }
    return;
L_8c0dd254:;
    t3 = operation_8c027138();
    if ((unsigned short)t3 != 0xffff) {
        if (o->f48 == 0) {
            o->f48 = (Arg0_48 *)spawn_item_8c0fc440((unsigned short)t3);
            return;
        }
        operation_8c0fc508((void *)(o->f48), t3);
    }
}
