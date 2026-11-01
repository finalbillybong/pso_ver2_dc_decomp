typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db520 S_g8c4db520;
typedef struct S_g8c4db524 S_g8c4db524;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_3cc Arg0_3cc;
typedef struct Arg0_3d0 Arg0_3d0;
typedef struct S_vv36 S_vv36;
class Object;
typedef struct Block_frame_30 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_30;
typedef struct Block_frame_24 {
    float f00;
    float f04;
    float f08;
} Block_frame_24;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
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
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94(int);
};
typedef struct ObjectData {
    char unknown0[0x64];
    int f64;
    char unknown68[0x6c];
    unsigned short fd4;
    char unknownd6[0xa6];
    int f17c;
    char unknown180[0x18a];
    short f30a;
    short f30c;
    char unknown30e[0x26];
    Arg0_334 *f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x16];
    Arg0_36c *f36c;
    char unknown370[0x54];
    int f3c4;
    int f3c8;
    Arg0_3cc *f3cc;
    Arg0_3d0 *f3d0;
} ObjectData;
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    Block_frame_c f0c;
    char f18;
    char f19;
    short f1a;
    short f1c;
    short f1e;
    short f20;
    short f22;
    Block_frame_24 f24;
    Block_frame_30 f30;
};
struct Arg0_334 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x1a];
    Vector3 f3c;
};
struct Arg0_36c {
    char unknown0[0x8];
    int f08;
};
struct S_vv36 {
    char unknown0[0x4];
    short f04;
};
struct S_c8c021ef8 {
    char unknown0[0x350];
    int f350;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4db520 *g_8c4db520;
extern S_g8c4db524 *g_8c4db524;
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float call_8c130334(float, float);
extern "C" void operation_8c036840(int);
extern "C" int angle_difference(int, int);
extern "C" int angle_step(int, int, int);
extern "C" int spawn_node_8c0a49c8(int);
extern "C" void visit_actor_context_a(void);
extern "C" void call_8c0a6a10(void);
extern "C" int hierarchy_is_active(void *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TQuestThread_ctor_1_8c173578(void *, void *, int);
extern "C" void visit_actor_context_b(void);
extern "C" void reset_effect_table_state(void);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void operation_8c02688c(void *);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void operation_8c1209d8(Object *o)
{
    Frame frame;
    int ang;
    S_vv36 *p;
    S_c8c021ef8 *u;
    int t;
    if ((((ObjectData *)o)->fd4 & 0xffff) != (int)g_8c418248 || ((ObjectData *)o)->f334 == 0 || ((ObjectData *)o)->f3c4 <= 0) {
        ((ObjectData *)o)->f30c = 3;
    }
    switch (((ObjectData *)o)->f30c) {
    case 0:
        *(Vector3 *)&frame.f30 = ((ObjectData *)o)->f334->f3c;
        vector_sub_in_place_8c37f6f0(&frame.f30, (char *)o + 0x3c);
        ang = (int)(call_8c130334(frame.f30.f00, frame.f30.f08) * 65536.0f / 6.28318405f);
        switch (((ObjectData *)o)->f3c8) {
        case 1001:
        case 1002:
        case 1003:
            ((ObjectData *)o)->f30c = 1;
            o->v94(0);
            frame.f18 = 0x1a;
            frame.f19 = 1;
            frame.f18 = 0x3d;
            frame.f19 = 1;
            frame.f1c = 0;
            frame.f1e = 0;
            frame.f20 = -1;
            frame.f22 = -1;
            frame.f24.f08 = 0.0f;
            frame.f24.f04 = 0.0f;
            frame.f24.f00 = 0.0f;
            frame.f18 = 0x3e;
            frame.f19 = 6;
            frame.f1a = ((ObjectData *)o)->f334->f20;
            *(Vector3 *)&frame.f24 = ((ObjectData *)o)->f334->f3c;
            frame.f1e = ang + 0x8000;
            operation_8c036840((int)&frame.f18);
            break;
        default:
            if (((ObjectData *)o)->f36c->f08 > angle_difference(((ObjectData *)o)->f64, ang)) {
                ((ObjectData *)o)->f30c = 1;
                ((ObjectData *)o)->f64 = ang;
                o->v94(0);
                frame.f00 = 0x1a;
                frame.f01 = 1;
                frame.f00 = 0x3d;
                frame.f01 = 1;
                frame.f04 = 0;
                frame.f06 = 0;
                frame.f08 = -1;
                frame.f0a = -1;
                frame.f0c.f08 = 0.0f;
                frame.f0c.f04 = 0.0f;
                frame.f0c.f00 = 0.0f;
                frame.f00 = 0x3e;
                frame.f01 = 6;
                frame.f02 = ((ObjectData *)o)->f334->f20;
                *(Vector3 *)&frame.f0c = ((ObjectData *)o)->f334->f3c;
                frame.f06 = ((ObjectData *)o)->f64 + 0x8000;
                operation_8c036840((int)&frame);
            } else {
                ((ObjectData *)o)->f64 = angle_step(((ObjectData *)o)->f64, ang, ((ObjectData *)o)->f36c->f08);
            }
            break;
        }
        break;
    case 1:
        ((ObjectData *)o)->f30c = 2;
        switch (((ObjectData *)o)->f3c8) {
        case 1001:
            ((ObjectData *)o)->f3d0 = (Arg0_3d0 *)spawn_node_8c0a49c8(7);
            visit_actor_context_a();
            break;
        case 1002:
            ((ObjectData *)o)->f3d0 = (Arg0_3d0 *)spawn_node_8c0a49c8(9);
            visit_actor_context_a();
            break;
        case 1003:
            ((ObjectData *)o)->f3d0 = (Arg0_3d0 *)spawn_node_8c0a49c8(8);
            visit_actor_context_a();
            break;
        default:
            call_8c0a6a10();
            break;
        }
        if (((ObjectData *)o)->f3c8 >= 0x64 && ((ObjectData *)o)->f3c8 < 0x3e8 && g_8c4db520 != 0 && hierarchy_is_active(g_8c4db520) != 0) {
            t = heap_alloc_8c122700(g_8c4d97e0, 0xa8);
            if (t != 0) TQuestThread_ctor_1_8c173578((void *)t, g_8c4db520, ((ObjectData *)o)->f3c4);
            ((ObjectData *)o)->f3cc = (Arg0_3cc *)t;
        } else if (((ObjectData *)o)->f3c8 >= 0x3e8 && g_8c4db524 != 0 && hierarchy_is_active(g_8c4db524) != 0) {
            t = heap_alloc_8c122700(g_8c4d97e0, 0xa8);
            if (t != 0) TQuestThread_ctor_1_8c173578((void *)t, g_8c4db524, ((ObjectData *)o)->f3c4);
            ((ObjectData *)o)->f3cc = (Arg0_3cc *)t;
        }
        break;
    case 2:
        if ((((ObjectData *)o)->f3cc != 0 && hierarchy_is_active(((ObjectData *)o)->f3cc) == 0) || ((ObjectData *)o)->f3cc == 0) {
            ((ObjectData *)o)->f30c = 3;
            ((ObjectData *)o)->f17c = 0;
            switch (((ObjectData *)o)->f3c8) {
            case 1001:
            case 1002:
            case 1003:
                visit_actor_context_b();
                p = (S_vv36 *)((ObjectData *)o)->f3d0;
                if (p != 0) {
                    p->f04 |= 1;
                    ((ObjectData *)o)->f3d0 = 0;
                }
                break;
            default:
                reset_effect_table_state();
                break;
            }
            if (((ObjectData *)o)->f334 != 0 && (int)g_8c418248 == ((ObjectData *)o)->f334->f20) {
                u = lookup_low_id((int)g_8c418248);
                if (u != 0) {
                    t = (u->f350 & 1) != 0;
                    if (t != 0) operation_8c02688c(u);
                }
            }
        }
        break;
    case 3:
        ((ObjectData *)o)->f30a = 0;
        ((ObjectData *)o)->f30c = 0;
        ((ObjectData *)o)->fd4 = ((ObjectData *)o)->f354 = 0xffff;
        ((ObjectData *)o)->f334 = 0;
        ((ObjectData *)o)->f3cc = 0;
        break;
    }
    refresh_follow_effect_8c052180(o);
}
