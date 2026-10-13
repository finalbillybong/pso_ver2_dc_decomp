typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
class Object {
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
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x378];
    int f3e0;
    int f3e4;
} ObjectData;
extern "C" char g_8c300a74[];
extern "C" int call_8c05a0a8(void);
extern "C" int pack_ids_8c05a09c(int, int);
extern "C" void call_8c38c73a(int, void *);
extern "C" void call_8c05ba9c(Object *, int);
extern "C" void call_8c1086fc(void);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c05baa8(void);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c38ad10(void);
extern "C" void call_8c391cc4(void);
extern "C" void operation_8c09502c(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = call_8c05a0a8();
    if (t1 != 0 && ((ObjectData *)o)->f3e0 == 0) {
        if (((((ObjectData *)o)->f3e4 & 0x100)) != 0) {
            t2 = pack_ids_8c05a09c(0, 0);
            call_8c38c73a(t2, (void *)((g_8c300a74 + 0x15c)));
        } else {
            if (((((ObjectData *)o)->f3e4 & 0x200)) != 0) {
                t3 = pack_ids_8c05a09c(0, 0);
                call_8c38c73a(t3, (void *)((g_8c300a74 + 0x16c)));
            } else {
                t4 = pack_ids_8c05a09c(0, 0);
                call_8c38c73a(t4, (void *)((g_8c300a74 + 0x17d)));
            }
        }
    }
    t5 = o->v11(400.0f, 15.0f);
    if (t5 != 0) {
        call_8c05ba9c(o, 0);
        call_8c1086fc();
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c05baa8();
        call_8c3aa716((void *)(((ObjectData *)o)->f38));
        call_8c38ad10();
        call_8c391cc4();
    }
}
