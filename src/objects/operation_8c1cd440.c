typedef struct Object Object;
typedef struct S_vv1_0 S_vv1_0;
struct Object {
    char unknown0[0x30];
    int f30;
    char unknown34[0x50];
    short f84;
    short f86;
};
struct S_vv1_0 {
    int f00;
};
void operation_8c1cd440(Object *o, int a1)
{
    int v2;
    int v1;
    if ((short)a1 >= 0) {
        if (!((short)a1 >= o->f86)) {
            goto L_entry;
        }
        return;
L_loop:;
        if (!((short)v2 > 0)) {
            goto L_done;
        }
        v2 = (int)(v2 + -1);
L_test:;
        if ((((*(S_vv1_0 **)((char *)((char *)v1 + 0x0) + ((short)v2 << 2)))->f00 & 1)) == 0) {
            goto L_loop;
        }
L_done:;
        o->f84 = v2;
        return;
L_entry:;
        v1 = (int)o->f30;
        v2 = (int)a1;
        goto L_test;
    }
}
