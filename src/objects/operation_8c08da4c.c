typedef struct S_vv5 S_vv5;
typedef struct Block_vv5_0 {
    short f00;
    char unknown2[0xe];
} Block_vv5_0;
struct S_vv5 {
    Block_vv5_0 f00;
};
typedef struct Object {
    char unknown0[0x108];
    int f108;
} Object;
extern int get_current_area_8c032b10(void);
S_vv5 *operation_8c08da4c(Object *o, short id)
{
    S_vv5 *v5;
    int v2;
    short v1;
    short v3;
    int t1;
    char *v4;
    short k;
    v1 = 0;
    t1 = get_current_area_8c032b10();
    v2 = (int)*(int *)((char *)0x8c2ebec8 + (t1 << 2));
    v4 = (char *)v2;
    v5 = (S_vv5 *)v2;
    v3 = (short)-1;
    while (v4 != 0 && (k = v5->f00.f00, k != (int)v3)) {
        if (id == k) {
            o->f108 = v1;
            return v5;
        }
        v5 = (S_vv5 *)((char *)v5 + 16);
        v1 = (short)(v1 + 1);
    }
    return 0;
}
