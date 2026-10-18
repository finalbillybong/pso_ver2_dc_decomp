typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Object Object;
typedef struct S_vv5 S_vv5;
struct S_vv5 {
    char f00;
    char unknown1[0x1];
    short f02;
};
struct Object {
    char unknown0[0x68];
    int f68;
    char unknown6c[0x4];
    int f70;
};
extern int g_8c46f560;
extern Block16 g_8c46f564;
extern int g_8c4e3164;
extern int g_8c575570;
extern Block16 g_8c5755ac;
extern void call_8c37dd28(int, int);
extern void call_8c37df90(int, int);
extern void call_8c37e02c(int, int);
extern void call_8c38c0f0(void *);
extern void call_8c391c94(void);
extern void call_8c391cc4(void);
void operation_8c1f2718(Object *o)
{
    int v4;
    S_vv5 *v5;
    int v6;
    int v9;
    int v8;
    int v7;
    int v37;
    v4 = (int)0;
    while (v4 != 2) {
        v5 = (S_vv5 *)((char *)(&*(int *)((char *)((char *)o + 0x0) + (v4 << 3))) + 0xd0);
        v6 = (int)((v5->f00 & 0xe0) == 0xe0);
        if (v6 == 0 && g_8c4e3164 == (v5->f00 & 7)) {
            v7 = (int)(((v5->f00 & 0x20)) != 0);
            if (v7 != 0) {
                call_8c37dd28(0, (int)((int)((float)v5->f02 * 65536.0f / 360.0f)));
            } else {
                v8 = (int)(((v5->f00 & 0x40)) != 0);
                if (v8 != 0) {
                    call_8c37df90(0, (int)((int)((float)v5->f02 * 65536.0f / 360.0f)));
                } else {
                    v9 = (int)(((v5->f00 & 0x80)) != 0);
                    if (v9 != 0) {
                        call_8c37e02c(0, (int)((int)((float)v5->f02 * 65536.0f / 360.0f)));
                    }
                }
            }
        }
        v4 = (int)(v4 + 1);
    }
    if (*(int *)((char *)((char *)o + 0x74) + (o->f70 << 2)) == (int)g_8c4e3164) {
        if (((o->f68 & 0x20)) == 0) {
            g_8c46f560 = (int)(g_8c575570);
            g_8c575570 |= 0x10;
            *(Block16 *)&g_8c46f564 = *(Block16 *)&g_8c5755ac;
            call_8c38c0f0((void *)(((char *)o + 0xbc)));
            call_8c391c94();
            o->f68 |= 0x20;
        }
        v37 = (int)o->f70;
        if (v37 == 2) {
            return;
        }
        o->f70 = v37 + 1;
        return;
    }
    if (((o->f68 & 0x20)) != 0) {
        call_8c391cc4();
        *(Block16 *)&g_8c5755ac = *(Block16 *)&g_8c46f564;
        g_8c575570 = (int)(g_8c46f560);
        o->f68 &= -0x21;
    }
}
