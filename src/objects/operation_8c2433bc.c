typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8_s6dc S_c8c021ef8_s6dc;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c510c88 S_g8c510c88;
typedef struct S_g8c510c88_18 S_g8c510c88_18;
typedef struct S_g8c510c88_1c S_g8c510c88_1c;
typedef struct S_g8c510c88_20 S_g8c510c88_20;
struct S_g8c510c88 {
    char f00;
    char f01;
    char f02;
    char f03;
    char f04;
    char f05;
    char f06;
    char f07;
    char f08;
    char f09;
    char f0a;
    char f0b;
    char f0c;
    char unknownd[0x4];
    char f11;
    char f12;
    char f13;
    char unknown14[0x4];
    S_g8c510c88_18 *f18;
    S_g8c510c88_1c *f1c;
    S_g8c510c88_20 *f20;
    int f24;
    short f28;
};
struct S_c8c021ef8_s6dc {
    char unknown0[0x10];
    float f10;
    float f14;
    char unknown18[0x8];
    float f20;
    float f24;
    char unknown28[0x8];
    float f30;
    float f34;
    char unknown38[0x8];
    float f40;
    float f44;
    char unknown48[0x8];
    float f50;
    float f54;
};
extern float g_8c33aa54;
extern float g_8c33aa58;
extern float g_8c33aa5c;
extern float g_8c33aa60;
extern float g_8c33aa64;
extern float g_8c33aa68;
extern float g_8c33aa6c;
extern S_g8c418248 *g_8c418248;
extern int g_8c467874;
extern S_g8c510c88 *g_8c510c88;
extern float g_8c510ce0;
extern float g_8c510ce4;
extern void call_8c238fd4(void *);
extern void store_bounded3_8c2390f0(void *, unsigned char);
extern void store_bounded_8c239100(void *, unsigned char);
extern void store_bounded_8c239110(void *, unsigned char);
extern void store_bounded_8c239120(void *, unsigned char);
extern void operation_8c239130(void *, char);
extern void operation_8c239140(void *, char);
extern void operation_8c239150(void *, char);
extern void operation_8c239160(void *, char);
extern void operation_8c239170(void *, char);
extern void operation_8c239190(void *, char);
extern void operation_8c2391a0(void *, char);
extern void operation_8c2391d0(void *, int);
extern void call_8c239394(void *, char, int);
extern void operation_8c2391b0(void *, char);
extern void call_8c2393d4(void *, int);
extern void operation_8c2391c0(void *, char);
extern void operation_239370(void *, unsigned char);
extern void operation_239340(void *, signed char);
extern void operation_239310(void *, short);
extern void operation_2392fc(void *, int);
extern void initialize_object_8c2391e4(void *, short);
extern int lookup_low_id(int);
extern void operation_8c239180(void *, int);
extern void store_bounded_8c2390e0(void *, unsigned char);
extern void call_8c02b2d8(void);
void operation_8c2433bc(int a0, int a1)
{
    int v4;
    int v2;
    int v6;
    int v11;
    int v3;
    int v5;
    int v14;
    int t1;
    int t2;
    int t3;
    call_8c238fd4((void *)((void *)0x8c41ce5c));
    if (a1 == 0) {
    } else {
        store_bounded3_8c2390f0((void *)((void *)0x8c41ce5c), (unsigned char)(g_8c510c88->f00));
        store_bounded_8c239100((void *)((void *)0x8c41ce5c), (unsigned char)(g_8c510c88->f01));
        store_bounded_8c239110((void *)((void *)0x8c41ce5c), (unsigned char)(g_8c510c88->f02));
        store_bounded_8c239120((void *)((void *)0x8c41ce5c), (unsigned char)(g_8c510c88->f03));
        operation_8c239130((void *)((void *)0x8c41ce5c), g_8c510c88->f04);
        operation_8c239140((void *)((void *)0x8c41ce5c), g_8c510c88->f05);
        operation_8c239150((void *)((void *)0x8c41ce5c), g_8c510c88->f06);
        operation_8c239160((void *)((void *)0x8c41ce5c), g_8c510c88->f07);
        operation_8c239170((void *)((void *)0x8c41ce5c), g_8c510c88->f08);
        operation_8c239190((void *)((void *)0x8c41ce5c), g_8c510c88->f0a);
        operation_8c2391a0((void *)((void *)0x8c41ce5c), g_8c510c88->f0b);
        operation_8c2391d0((void *)((void *)0x8c41ce5c), (int)(g_8c510c88->f0c));
        a1 = (int)0;
        while (4 > a1) {
            call_8c239394((void *)((void *)0x8c41ce5c), *(char *)((char *)((char *)g_8c510c88 + 0xd) + (a1)), a1);
            a1 = (int)(a1 + 1);
        }
        operation_8c2391b0((void *)((void *)0x8c41ce5c), g_8c510c88->f11);
        call_8c2393d4((void *)((void *)0x8c41ce5c), (int)(g_8c510c88->f12));
        operation_8c2391c0((void *)((void *)0x8c41ce5c), g_8c510c88->f13);
        operation_239370((void *)((void *)0x8c41ce5c), (unsigned char)(g_8c510c88->f18));
        operation_239340((void *)((void *)0x8c41ce5c), (signed char)(g_8c510c88->f1c));
        operation_239310((void *)((void *)0x8c41ce5c), (short)(g_8c510c88->f20));
        operation_2392fc((void *)((void *)0x8c41ce5c), (int)(g_8c510c88->f24));
        initialize_object_8c2391e4((void *)((void *)0x8c41ce5c), g_8c510c88->f28);
        v2 = (int)0;
        if (g_8c510c88->f09 == 1) {
            v11 = (int)v2;
            if (g_8c467874 == 4) {
                v3 = (int)0x7b4;
                v4 = (int)1;
                v5 = (int)-1;
                while (4 > v2) {
                    t1 = lookup_low_id(v2);
                    if (t1 != 0) {
                        v4 = 1 - v4;
                        v6 = v4 != 0 ? 1 : 2;
                        *(int *)((char *)0x8c510d00 + (v2 << 2)) = (int)(v6);
                        *(int *)((char *)((char *)t1 + 0x0) + (v3)) = (int)(*(int *)((char *)0x8c510d00 + (v2 << 2)));
                    } else {
                        *(int *)((char *)0x8c510d00 + (v2 << 2)) = (int)(v5);
                    }
                    v2 = (int)(v2 + 1);
                }
                a1 = (int)v5;
                v11 = (int)1;
            }
            v2 = (int)v11;
        }
        v14 = (int)(v2 != 0);
        operation_8c239180((void *)((void *)0x8c41ce5c), v14);
        t2 = lookup_low_id((int)g_8c418248);
        if (t2 != 0) {
            ((S_c8c021ef8_s6dc *)((char *)t2 + 0x6dc))->f44 = g_8c33aa54;
            ((S_c8c021ef8_s6dc *)((char *)t2 + 0x6dc))->f40 = g_8c33aa64;
            ((S_c8c021ef8_s6dc *)((char *)t2 + 0x6dc))->f34 = g_8c33aa58;
            ((S_c8c021ef8_s6dc *)((char *)t2 + 0x6dc))->f30 = g_8c510ce0;
            ((S_c8c021ef8_s6dc *)((char *)t2 + 0x6dc))->f14 = g_8c33aa5c;
            ((S_c8c021ef8_s6dc *)((char *)t2 + 0x6dc))->f10 = g_8c33aa68;
            ((S_c8c021ef8_s6dc *)((char *)t2 + 0x6dc))->f24 = g_8c33aa60;
            ((S_c8c021ef8_s6dc *)((char *)t2 + 0x6dc))->f20 = g_8c33aa6c;
            ((S_c8c021ef8_s6dc *)((char *)t2 + 0x6dc))->f54 = g_8c510ce4;
            ((S_c8c021ef8_s6dc *)((char *)t2 + 0x6dc))->f50 = g_8c510ce4;
        }
        store_bounded_8c2390e0((void *)((void *)0x8c41ce5c), (unsigned char)1);
    }
    t3 = lookup_low_id((int)g_8c418248);
    if (t3 != 0) {
        call_8c02b2d8();
    }
}
