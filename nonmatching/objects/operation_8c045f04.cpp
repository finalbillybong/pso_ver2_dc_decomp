/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c045f04
 * function: operation_8c045f04
 * language: c++
 * reference size: 512 bytes
 * compiled size: 512 bytes (+0.0%)
 * differing lines: 46 of 224 reference instruction lines
 * differing bytes: 39
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg1 Arg1;
typedef struct Arg1_0 Arg1_0;
typedef struct Arg1_33c Arg1_33c;
typedef struct S_x50368 S_x50368;
typedef struct S_x9216 S_x9216;
class Object;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
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
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual int v28(Arg1 *, int, float);
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    int fe0;
} ObjectData;
struct Arg1 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x2d4];
    Arg1_33c *f33c;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_x50368 {
    Vector3 f00;
};
struct Arg1_0 {
    char unknown0[0x8];
    float f08;
    int f0c;
};
struct S_x9216 {
    float f00;
};
struct Arg1_33c {
    char unknown0[0x8];
    float f08;
    int f0c;
};
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njUnitMatrix_8c37b5c4(int);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be280(int, Frame *, Frame *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int angle_difference(int, int);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern "C" int operation_8c045f04(Object *o, Arg1 *a1, float f0)
{
    Frame frame;
    int r;
    int i;
    int off;
    float d;
    float rr;
    float t1;
    int t2;
    int mask;
    int k;
    r = -1;
    if (a1 != 0) {
        if (((ObjectData *)o)->fdc != 0) {
            njPushMatrixEx_8c38ae68();
            njUnitMatrix_8c37b5c4(0);
            njTranslate_8c3829bc(0, -a1->f3c, -a1->f40, -a1->f44);
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            mask = 0x4000000;
            k = 0x33c;
            for (i = 0; ((ObjectData *)o)->fe0 > i; i++) {
                off = i * 0x2c;
                if ((*(int *)((char *)(int *)((char *)((ObjectData *)o)->fdc + 0x18) + off) & mask) == 0) {
                    *(Vector3 *)&frame.f00 = *(Vector3 *)((char *)((ObjectData *)o)->fdc + off);
                    call_8c3be280(0, &frame, &frame);
                }
                d = frame.f00.f00 * frame.f00.f00 + frame.f00.f08 * frame.f00.f08;
                rr = (*(Arg1_33c **)((char *)a1 + k))->f08 + *(float *)((char *)(int *)((char *)((ObjectData *)o)->fdc + 0xc) + off);
                rr = rr * rr;
                t1 = errno_wrap_8c130334(frame.f00.f00, frame.f00.f08);
                t2 = angle_difference(a1->f64, (int)(t1 * 65536.0f / 6.28318405f));
                if (rr > d && (*(Arg1_33c **)((char *)a1 + k))->f0c > t2) {
                    r = i;
                    break;
                }
            }
            njPopMatrixEx_8c38ad10();
            if (r == -1) {
                return 0;
            }
        } else {
            *(Vector3 *)&frame.f00 = ((ObjectData *)o)->f3c;
            vector_sub_in_place_8c37f6f0(&frame, (void *)(&a1->f3c));
            d = frame.f00.f00 * frame.f00.f00 + frame.f00.f08 * frame.f00.f08;
            rr = a1->f33c->f08;
            rr = rr * rr;
            rr = rr * rr;
            t1 = errno_wrap_8c130334(frame.f00.f00, frame.f00.f08);
            t2 = angle_difference(a1->f64, (int)(t1 * 65536.0f / 6.28318405f));
            if (d > rr || t2 > a1->f33c->f0c) {
                return 0;
            }
        }
        if (o->v28(a1, r, f0) != 0) {
            return 1;
        }
    }
    return 0;
}
