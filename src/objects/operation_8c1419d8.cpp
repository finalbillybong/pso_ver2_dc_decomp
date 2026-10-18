typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_g8c467880 S_g8c467880;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_x4880 S_x4880;
class Object;
class S_vv3;
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
    virtual void v24(void *, float);
};
typedef struct ObjectData {
    char unknown0[0xdc];
    Arg0_dc *fdc;
    char unknowne0[0x254];
    Arg0_334 *f334;
    char unknown338[0x24];
    int f35c;
    char unknown360[0x10];
    float f370;
} ObjectData;
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
};
struct S_x4880 {
    Block8 f00;
};
class S_vv3 {
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
    virtual void v25(Object *, int, Block8);
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct S_vv3Data {

} S_vv3Data;
extern "C" void update_object_center(void *);
extern "C" void operation_8c05426c(void *, int, int);
extern "C" void clear_words_8c053d64(void);
extern "C" void call_8c0521a0(Object *);
extern "C" void call_8c027090(Object *);
extern "C" int current_effect_mode(void);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void operation_8c1419d8(Object *o)
{
    S_vv3 *v3;
    int v2;
    int v1;
    int t1;
    update_object_center((void *)o);
    ((ObjectData *)o)->f370 -= 1.0f;
    if (0.0f > ((ObjectData *)o)->f370) {
        ((ObjectData *)o)->fdc->f0c = 15.0f;
        operation_8c05426c((void *)o, 0, 0x200);
        clear_words_8c053d64();
        call_8c0521a0(o);
        v2 = (int)0;
        v1 = (int)0x360;
        while (0x10 > v2) {
            v3 = (S_vv3 *)*(S_g8c467880 **)((char *)0x8c467880 + (v2 << 2));
            if (v3 == 0) {
                goto L_8c141a76;
            }
            v3->v25(o, 0, *(Block8 *)&((S_x4880 *)((int)o + v1))->f00);
            if (5 > *(int *)((char *)((char *)o + 0x0) + (v1))) {
                v3->v27(o, 0.0f);
            }
            v2 = (int)(v2 + 1);
        }
L_8c141a76:;
        o->v24(((ObjectData *)o)->f334, 1.0f);
    }
    if (((ObjectData *)o)->f35c == 1) {
        call_8c027090(o);
    }
    t1 = current_effect_mode();
    switch (t1) {
    case 8:
    case 9:
    case 10:
        call_8c05fd7c(0x40018, o, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        break;
    }
}
