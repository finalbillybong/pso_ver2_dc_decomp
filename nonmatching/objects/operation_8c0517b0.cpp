/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0517b0
 * function: operation_8c0517b0
 * language: c++
 * reference size: 444 bytes
 * compiled size: 444 bytes (+0.0%)
 * differing lines: 2 of 195 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_s3c S_vv4_s3c;
typedef struct S_vv8 S_vv8;
typedef struct S_x496 S_x496;
class Object;
typedef struct Block_vv4_3c {
    Block8 f00;
    char unknown8[0x4];
} Block_vv4_3c;
typedef struct Block_frame_0 {
    Block8 f00;
    int f08;
} Block_frame_0;
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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual int v20(int);
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0x2c4];
    Vector3 f318;
    Vector3 f324;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
    Vector3 f18;
};
struct S_x496 {
    Vector3 f00;
};
struct S_vv4 {
    char unknown0[0x3c];
    Block_vv4_3c f3c;
};
struct S_vv4_s3c {
    char unknown0[0x8];
    int f08;
};
struct S_vv8 {
    Vector3 f00;
};
extern "C" void call_8c3bdf60(void *, void *);
extern "C" int operation_8c011214(int, int, int);
extern "C" float object_random_fraction(void *);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void njRotateY_8c37df90(int, int);
extern "C" void call_8c3be38c(int, int, void *);
extern "C" void njPopMatrix_8c38accc(int);
extern "C" int operation_8c051ff4(void *, void *, void *);
extern "C" void vector_sub_in_place_8c37f6f0(S_vv8 *, int);
extern "C" int operation_8c0517b0(Object *o)
{
    Frame frame;
    int v3;
    int v2;
    int v1;
    S_vv4 *v4;
    S_vv8 *v8;
    int v9;
    int t1;
    int t2;
    float t3;
    int t4;
    int t5;
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((ObjectData *)o)->f324;
    call_8c3bdf60((void *)(&(&frame)->f18), (void *)(((char *)o + 0x318)));
    t1 = o->v20(0x1e);
    if (t1 != 0) {
        t2 = operation_8c011214((int)(((char *)o + 0x324)), (int)(&(&frame)->f18), -1);
        if (t2 != 0) {
            return 0;
        }
        t3 = object_random_fraction((void *)o);
        if (0.5f > t3) {
            v1 = (int)-1;
        } else {
            v1 = (int)1;
        }
        v4 = (S_vv4 *)o;
        v2 = (int)0x318;
        v3 = (int)0;
        while (0xf > v3) {
            if (v3 == 0) {
                *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x496 *)((int)v4 + v2))->f00;
            } else {
                njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                njRotateY_8c37df90(0, (int)(v1 * (v3 << 0xc)));
                call_8c3be38c(0, (int)((int)v4 + v2), (void *)(&(&frame)->f0c));
                njPopMatrix_8c38accc(1);
            }
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&v4->f3c;
            call_8c3bdf60((void *)(&frame), (void *)(&(&frame)->f0c));
            t4 = operation_8c051ff4((void *)v4, (void *)(&frame), (void *)0);
            if (t4 == 1) {
                *(Vector3 *)&v4->f3c = *(Vector3 *)&(&frame)->f00;
                v8 = (S_vv8 *)((int)v4 + 0x318);
                *(Vector3 *)&v8->f00 = *(Vector3 *)&v4->f3c;
                v9 = (int)((int)v4 + 0x48);
                vector_sub_in_place_8c37f6f0(v8, v9);
                return 1;
            }
            v3 = (int)(v3 + 1);
        }
        return 0;
    }
    t5 = operation_8c051ff4((void *)o, (void *)(&(&frame)->f18), (void *)0);
    if (t5 == 1) {
        *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&(&frame)->f18;
        *(Vector3 *)&((ObjectData *)o)->f318 = *(Vector3 *)&((ObjectData *)o)->f3c;
        vector_sub_in_place_8c37f6f0((S_vv8 *)(((char *)o + 0x318)), (int)(((char *)o + 0x48)));
        return 1;
    }
    return 0;
}
