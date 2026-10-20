typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block36 {
    int words[9];
} Block36;
typedef struct S_g8c4dc2c4 S_g8c4dc2c4;
typedef struct S_g8c4dc2c8 S_g8c4dc2c8;
typedef struct S_g8c4dc2d4 S_g8c4dc2d4;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
typedef struct S_x45872 S_x45872;
typedef struct Block_p0_0 {
    char f00;
    char unknown1[0xd];
    short f0e;
    char unknown10[0xc];
    int f1c;
    char unknown20[0x4];
} Block_p0_0;
struct Object {
    Block_p0_0 tag;
};
struct S_vv4 {
    int f00;
};
struct S_x45872 {
    Block36 f00;
};
extern S_g8c4dc2c4 *g_8c4dc2c4;
extern S_g8c4dc2c8 *g_8c4dc2c8;
extern S_g8c4dc2d4 *g_8c4dc2d4;
extern int operation_8c1929ac(int);
extern void call_8c1929d4(int);
extern int operation_8c1926e0(int);
extern int call_8c18e768(int, int);
extern void call_8c12b77c(int, int, int);
int operation_8c192360(Object *o)
{
    char v31;
    int v3;
    S_vv4 *v4;
    int v7;
    int v11;
    int v20;
    int v8;
    int v10;
    int t3;
    int v12;
    int v14;
    int v5;
    int v13;
    int t1;
    int t2;
    int v6;
    if (o != 0) {
        if (operation_8c1929ac((int)(o->tag.f00)) != 0) {
            call_8c1929d4((int)(o->tag.f00));
        }
        if (0x12 > o->tag.f00 && operation_8c1926e0(o->tag.f00) != 0) {
            v12 = o->tag.f00 << 2;
            v3 = (int)*(int *)((char *)((char *)g_8c4dc2c4 + 0x0) + v12);
            if (v3 != 0) {
                v4 = (S_vv4 *)&*(int *)((char *)((char *)g_8c4dc2c8 + 0x0) + v12);
                v5 = (int)v4->f00;
                v13 = -1;
                v8 = v5 + v13;
                v6 = (int)o->tag.f1c;
                if (v8 > v13 && *(int *)((char *)((char *)v3 + 0x1c) + (v8 * 0x24)) > v6) {
                    v7 = 0;
                    while (v8 > v7) {
                        t3 = call_8c18e768((int)(v7 + v8), 2);
                        if (v6 > *(int *)((char *)((char *)v3 + 0x1c) + (t3 * 0x24))) {
                            v7 = t3 + 1;
                        } else {
                            v8 = t3;
                        }
                    }
                    if (*(int *)((char *)((char *)v3 + 0x1c) + (v7 * 0x24)) == v6) {
                        return 0;
                    }
                    v14 = v3 + v7 * 0x24;
                    call_8c12b77c((int)(v14 + 0x24), v14, (v5 - v7) * 0x24);
                } else {
                    v7 = v5;
                }
                o->tag.f0e = *(volatile unsigned short *)((char *)((char *)g_8c4dc2d4 + 0x0) + (o->tag.f00 << 1)) & 0xffff;
                if ((*(unsigned short *)((char *)((char *)g_8c4dc2d4 + 0x0) + (o->tag.f00 << 1)) & 0xffff) != 0xffff) {
                    *(short *)((char *)((char *)g_8c4dc2d4 + 0x0) + (o->tag.f00 << 1)) += 1;
                }
                *(Block36 *)&((S_x45872 *)(v3 + v7 * 0x24))->f00 = *(Block36 *)&o->tag;
                v4->f00 += 1;
                return 1;
            }
        }
    }
    return 0;
}
