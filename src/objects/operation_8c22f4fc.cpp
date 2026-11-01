typedef struct S3 {
    char c[3];
} S3;
typedef struct S5 {
    char c[5];
} S5;
typedef struct S7 {
    char c[7];
} S7;
typedef struct Object {
    char unknown0[0xe4];
    int tab[8];
    int f104;
} Object;
extern "C" int g_8c506524;
extern "C" signed char g_8c506528;
extern "C" S5 g_8c3385bc;
extern "C" S5 g_8c3385c1;
extern "C" S5 g_8c3385c6;
extern "C" S5 g_8c3385cb;
extern "C" S7 g_8c3385d0;
extern "C" S7 g_8c3385d7;
extern "C" S3 g_8c3385de;
extern "C" S5 g_8c3385e1;
extern "C" S5 g_8c3385e6;
extern "C" S3 g_8c3385eb;
extern "C" S5 g_8c3385ee;
extern "C" S3 g_8c3385f3;
extern "C" S3 g_8c3385f6;
extern "C" S5 g_8c3385f9;
extern "C" S7 g_8c3385fe;
extern "C" S7 g_8c338605;
extern "C" char g_8c41cba0[];
extern "C" int call_8c3727a0(int);
extern "C" int operation_8c01d858(void *, int, int, int);
extern "C" int operation_8c01d844(void *, int, int, int);
extern "C" void call_8c22fdb0(Object *, void *, int);
extern "C" void operation_8c22f4fc(Object *o)
{
    for (unsigned char i = 0; i < 8; i++) {
        *(int *)((char *)o->tab + (i << 2)) = call_8c3727a0(i);
    }
    if (*(int *)((char *)o->tab + (g_8c506528 << 2)) == 0) {
        for (unsigned char j = 0; j < 8; j++) {
            if (*(int *)((char *)o->tab + (j << 2)) != 0) {
                g_8c506528 = j;
                break;
            }
            g_8c506528 = 0;
        }
    }
    if (g_8c506524 != 0) {
        return;
    }
    switch (g_8c506528) {
    case 0:
    case 2:
    case 4:
    case 6:
        {
            char *b = g_8c41cba0 + 0x20;
            if (operation_8c01d858(b, 0x20, 6, 1) != 0 || operation_8c01d844(g_8c41cba0 + 0x110, 0x20, 6, 1) != 0) {
                S5 s0 = g_8c3385bc;
                call_8c22fdb0(o, &s0, 0);
            }
            if (operation_8c01d858(b, 0x10, 6, 1) != 0 || operation_8c01d844(g_8c41cba0 + 0x110, 0x10, 6, 1) != 0) {
                S5 s1 = g_8c3385c1;
                call_8c22fdb0(o, &s1, 0);
            }
        }
        break;
    case 1:
    case 3:
    case 5:
    case 7:
        {
            char *b = g_8c41cba0 + 0x20;
            if (operation_8c01d858(b, 0x10, 6, 1) != 0 || operation_8c01d844(g_8c41cba0 + 0x110, 0x10, 6, 1) != 0) {
                S5 s2 = g_8c3385c6;
                call_8c22fdb0(o, &s2, 0);
            }
            if (operation_8c01d858(b, 0x20, 6, 1) != 0 || operation_8c01d844(g_8c41cba0 + 0x110, 0x20, 6, 1) != 0) {
                S5 s3 = g_8c3385cb;
                call_8c22fdb0(o, &s3, 0);
            }
        }
        break;
    }
    switch (g_8c506528) {
    case 0:
    case 1:
        {
            char *b = g_8c41cba0 + 0x20;
            if (operation_8c01d858(b, 0x80, 6, 1) != 0 || operation_8c01d844(g_8c41cba0 + 0x110, 0x80, 6, 1) != 0) {
                S7 s4 = g_8c3385d0;
                call_8c22fdb0(o, &s4, 0);
            }
            if (operation_8c01d858(b, 0x40, 6, 1) != 0 || operation_8c01d844(g_8c41cba0 + 0x110, 0x40, 6, 1) != 0) {
                S7 s5 = g_8c3385d7;
                call_8c22fdb0(o, &s5, 1);
            }
        }
        return;
    case 2:
    case 3:
        {
            unsigned char c;
            char *b = g_8c41cba0 + 0x20;
            if (operation_8c01d858(b, 0x40, 6, 1) != 0 || operation_8c01d844(g_8c41cba0 + 0x110, 0x40, 6, 1) != 0) {
                S3 s6;
                c = g_8c506528;
                s6 = g_8c3385de;
                call_8c22fdb0(o, &s6, 0);
                if (g_8c506528 == c) {
                    S5 s7;
                    o->f104 = 1;
                    s7 = g_8c3385e1;
                    call_8c22fdb0(o, &s7, 1);
                }
            }
            if (!(operation_8c01d858(b, 0x80, 6, 1) != 0 || operation_8c01d844(g_8c41cba0 + 0x110, 0x80, 6, 1) != 0)) {
                return;
            }
            S5 s8;
            c = g_8c506528;
            s8 = g_8c3385e6;
            call_8c22fdb0(o, &s8, 0);
            if (g_8c506528 == c) {
                S3 s9;
                o->f104 = 0;
                s9 = g_8c3385eb;
                call_8c22fdb0(o, &s9, 1);
            }
        }
        return;
    case 4:
    case 5:
        {
            char *b = g_8c41cba0 + 0x20;
            unsigned char c;
            unsigned char c2;
            if (operation_8c01d858(b, 0x40, 6, 1) != 0 || operation_8c01d844(g_8c41cba0 + 0x110, 0x40, 6, 1) != 0) {
                S5 s10;
                c = g_8c506528;
                s10 = g_8c3385ee;
                call_8c22fdb0(o, &s10, 0);
                if (c == g_8c506528) {
                    S3 s11;
                    o->f104 = 1;
                    s11 = g_8c3385f3;
                    call_8c22fdb0(o, &s11, 1);
                }
            }
            if (!(operation_8c01d858(b, 0x80, 6, 1) != 0 || operation_8c01d844(g_8c41cba0 + 0x110, 0x80, 6, 1) != 0)) {
                return;
            }
            S3 s12;
            c2 = g_8c506528;
            s12 = g_8c3385f6;
            call_8c22fdb0(o, &s12, 0);
            if (c2 == g_8c506528) {
                S5 s13;
                o->f104 = 0;
                s13 = g_8c3385f9;
                call_8c22fdb0(o, &s13, 1);
            }
        }
        return;
    case 6:
    case 7:
        {
            char *b = g_8c41cba0 + 0x20;
            if (operation_8c01d858(b, 0x40, 6, 1) != 0 || operation_8c01d844(g_8c41cba0 + 0x110, 0x40, 6, 1) != 0) {
                S7 s14 = g_8c3385fe;
                call_8c22fdb0(o, &s14, 0);
            }
            if (operation_8c01d858(b, 0x80, 6, 1) != 0 || operation_8c01d844(g_8c41cba0 + 0x110, 0x80, 6, 1) != 0) {
                S7 s15 = g_8c338605;
                call_8c22fdb0(o, &s15, 1);
            }
        }
        return;
    }
}
