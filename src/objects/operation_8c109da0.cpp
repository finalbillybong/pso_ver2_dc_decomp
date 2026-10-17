typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block76 {
    int words[19];
} Block76;
typedef struct Frame Frame;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d7bbc S_g8c4d7bbc;
typedef struct S_g8c4d7bbc_0 S_g8c4d7bbc_0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
class Object;
typedef struct Block_frame_0 {
    char unknown0[0xc];
    Vector3 f0c;
    char unknown18[0x20];
    float f38;
    char unknown3c[0x4];
    int f40;
    int f44;
    char unknown48[0x4];
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
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76(int, void *);
};
typedef struct ObjectData {
    char unknown0[0x40];
    float f40;
    char unknown44[0x364];
    int f3a8;
    char unknown3ac[0x18];
    int f3c4;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
    Vector3 f4c;
};
struct S_g8c4d7bbc_0 {
    char unknown0[0x3c];
    int f3c;
};
extern Block76 g_8c30ba54;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d7bbc *g_8c4d7bbc;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void apply_actor_matrix_frame(void *);
extern "C" int allocate_block(void *, unsigned int);
extern "C" void initialize_panel_8c087d8c(void *, void *, void *);
extern "C" void operation_8c109da0(Object *o)
{
    Frame frame;
    int v4;
    int v2;
    int v1;
    int v7;
    int v6;
    int t1;
    if (!(((ObjectData *)o)->f3c4 >= 2)) {
        ((ObjectData *)o)->f3c4 += 1;
        if (((ObjectData *)o)->f3c4 != 1) {
            if (((ObjectData *)o)->f3c4 == 2) {
                goto L_8c109dd8;
            }
        } else {
            v1 = (int)0;
            ((ObjectData *)o)->f3a8 = 5;
            v4 = (int)5;
            goto L_8c109de0;
L_8c109dd8:;
            v2 = (int)5;
            ((ObjectData *)o)->f3a8 = 0xd;
            v4 = (int)0xd;
        }
        v1 = (int)v2;
L_8c109de0:;
        apply_actor_matrix_frame((void *)o);
        v6 = (int)0x42c;
        while (v4 > v1) {
            v7 = (int)*(short *)((char *)0x8c30b928 + (v1 << 1));
            o->v76(*(short *)((char *)0x8c30b8fc + (v7 << 1)), &(&frame)->f4c);
            *(Block76 *)&(&frame)->f00 = *(Block76 *)&g_8c30ba54;
            *(Vector3 *)&(&frame)->f00.f0c = *(Vector3 *)&(&frame)->f4c;
            (&frame)->f00.f38 = ((ObjectData *)o)->f40;
            (&frame)->f00.f40 = (int)(*(int *)((char *)0x8c4d7c18 + (v7 << 2)));
            (&frame)->f00.f44 = (int)((*(S_g8c4d7bbc_0 **)((char *)((char *)g_8c4d7bbc + 0x0) + (v6)))->f3c);
            t1 = allocate_block(g_8c4d97e0, (unsigned int)0x78);
            if (t1 != 0) {
                initialize_panel_8c087d8c((void *)t1, g_8c44be98, (void *)(&frame));
            }
            v1 = (int)(v1 + 1);
        }
    }
}
