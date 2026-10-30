typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c1794c8 S_c8c1794c8;
typedef struct Frame Frame;
typedef struct S_g8c3267a8 S_g8c3267a8;
typedef struct S_g8c467240 S_g8c467240;
class S_vv9;
typedef struct Block_frame_8 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_8;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct S_c8c1794c8 {
    char unknown0[0x20];
    int f20;
};
class S_vv9 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25(int, int, Block8);
};
typedef struct S_vv9Data {
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    Vector3 f3c;
} S_vv9Data;
struct Frame {
    Block_frame_0 f00;
    Block_frame_8 f08;
};
extern int g_8c467874;
extern "C" S_c8c1794c8 *record30_8c1794c8(int);
extern "C" int create_effect_777c(void *, int);
extern "C" void set_effect_bits(void *, unsigned short);
extern "C" int ring_actor_eligible(unsigned short);
extern "C" float call_8c38d7d8(void *, int);
extern "C" void call_8c05fbf8(int, int, int, int);
extern "C" void operation_8c191504(int);
extern "C" void operation_8c1b349c(int a0)
{
    Frame frame;
    int v8;
    S_vv9 *v9;
    int v10;
    int v13;
    char *v4;
    int v11;
    int v3;
    int v12;
    int t1;
    float t3;
    int v7;
    float v2;
    int t2;
    S_c8c1794c8 *t4;
    int pm10;
    t4 = record30_8c1794c8(0x36);
    pm10 = t4->f20;
    v2 = (float)(float)pm10;
    v3 = 0;
    v4 = (char *)(int)(void *)0x8c4e2840;
    while (v3 < 0x40) {
        t1 = create_effect_777c((void *)v4, (int)(*(S_g8c3267a8 **)(((v3 & 1) << 2) + (char *)0x8c3267a8)));
        if (!(t1 == 0)) {
            int pm7;
            pm7 = 0x40;
            set_effect_bits((void *)t1, (unsigned short)pm7);
        }
        v3 = (int)(v3 + 1);
        v4 = (char *)(v4 + 0xc);
    }
    v7 = (int)g_8c467874;
    v8 = (int)0;
    while (v7 > v8) {
        v10 = (int)(unsigned char)(0);
        v9 = (S_vv9 *)*(S_g8c467240 **)((char *)0x8c467240 + (v8 << 2));
        if (0 != v9) {
            short pm9;
            pm9 = ((S_vv9Data *)v9)->f20;
            t2 = ring_actor_eligible((unsigned short)((short)((int)(int)pm9)));
            if (t2 != 0) {
                void *pm8;
                pm8 = (void *)0x8c4e2840;
                *(Vector3 *)&(&frame)->f08 = *(Vector3 *)&((S_vv9Data *)v9)->f3c;
                (&frame)->f08.f04 = 0.0f;
                v12 = (int)0;
                v11 = (int)pm8;
                for (; v12 < 0x40; ) {
                    t3 = call_8c38d7d8((void *)(&(&frame)->f08), v11);
                    if (25.0f > t3) {
                        v13 = (int)1;
                        goto L_8c1b3552;
                    }
                    v12 = (int)(v12 + 1);
                    v11 = (int)(v11 + 0xc);
                }
                v13 = (int)v10;
            L_8c1b3552:
                ;
                if (v13 != 0) {
                    int pm6;
                    (&frame)->f00.f00 = 0;
                    (&frame)->f00.f04 = v2;
                    pm6 = 0;
                    v9->v25(a0, pm6, *(Block8 *)&(&frame)->f00);
                }
                v3 = (int)v12;
                v10 = (int)v13;
            }
        }
        v8 = (int)(v8 + 1);
    }
    call_8c05fbf8(0x30018, 0, 0, 0);
    operation_8c191504(1);
}
