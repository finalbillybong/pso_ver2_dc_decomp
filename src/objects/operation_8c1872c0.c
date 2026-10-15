typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c319afc S_g8c319afc;
typedef struct S_g8c44be04 S_g8c44be04;
typedef struct Object Object;
typedef struct Arg0_3c Arg0_3c;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Arg0_3c *f3c;
    char unknown40[0x4];
    int f44;
    int f48;
};
extern S_g8c44be04 *g_8c44be04;
extern S_L8c41cba0 g_8c41cba0;
extern void call_8c186e28(void *, void *);
extern void call_8c186d00(void *, void *);
extern int update_text_buffer(void *);
extern void call_8c186c6c(void *, void *);
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c1872c0(Object *o)
{
    int v140;
    int v137;
    int v138;
    int v139;
    int t1;
    if (((*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c)) & 0x10)) != 0) {
        o->f44 -= 1;
    }
    if (((*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c)) & 0x20)) != 0) {
        o->f44 += 1;
    }
    if (!(o->f44 >= 0)) {
        o->f44 = 2;
    }
    if (o->f44 > 2) {
        o->f44 = 0;
    }
    if (((*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c)) & 4)) != 0) {
        if (o->f44 != 0) {
            if (o->f44 == 1) {
                goto L_8c187368;
            }
            if (o->f44 == 2) {
                goto L_8c187370;
            }
        } else {
            call_8c186e28(g_8c44be04, (void *)(o->f3c));
            goto L_8c18737c;
L_8c187368:;
            o->f48 = 6;
            goto L_8c18737c;
L_8c187370:;
            call_8c186d00(g_8c44be04, (void *)(((char *)o + 0x64)));
        }
    }
L_8c18737c:;
    if (((o->f48 & 2)) != 0) {
        t1 = update_text_buffer((void *)(((char *)o + 0x4c)));
        if (t1 > 0) {
            if (((o->f48 & 4)) != 0) {
                call_8c186c6c(g_8c44be04, (void *)(((char *)o + 0x64)));
                o->f48 = 1;
            }
            if (((o->f48 & 8)) == 0) {
                goto L_8c1873dc;
            }
            call_8c186d00(g_8c44be04, (void *)(((char *)o + 0x64)));
            o->f48 = 1;
        } else {
            if (t1 == 0) {
                o->f48 = 1;
            }
        }
    }
L_8c1873dc:;
    call_8c38c5b6(-0xf0f10);
    v137 = (int)-0xff0001;
    v138 = (int)-0xf0f10;
    v139 = (int)0x120000;
    v140 = (int)0;
    while (3 > v140) {
        if (v140 == o->f44) {
            call_8c38c5b6(v137);
        } else {
            call_8c38c5b6(v138);
        }
        call_8c38cf80((int)(v140 + 0xa | v139), (void *)(*(S_g8c319afc **)((char *)0x8c319afc + (v140 << 2))));
        v140 = (int)(v140 + 1);
    }
    call_8c38c5b6(-0xf0f10);
}
