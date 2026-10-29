typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db520 S_g8c4db520;
typedef struct S_g8c4db524 S_g8c4db524;
typedef struct Arg0_114 Arg0_114;
class Object;
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
    virtual int v16();
    virtual void v17();
};
typedef struct ObjectData {
    char unknown0[0xd4];
    unsigned short fd4;
    char unknownd6[0xe];
    int fe4;
    float fe8;
    float fec;
    char unknownf0[0x1c];
    int f10c;
    int f110;
    Arg0_114 *f114;
    int f118;
} ObjectData;
struct S_c8c021ef8 {
    char unknown0[0x350];
    int f350;
};
extern int g_8c418248;
extern S_g8c44be84 *g_8c44be84;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4db520 *g_8c4db520;
extern S_g8c4db524 *g_8c4db524;
extern "C" int operation_8c03d338(void);
extern "C" int operation_8c0eea7c(int, float);
extern "C" void operation_8c027090(int);
extern "C" void call_8c0a6a10(int);
extern "C" int hierarchy_is_active(void *);
extern "C" int allocate_block(void *, unsigned int);
extern "C" void initialize_loader_8c173578(void *, void *, int);
extern "C" void reparent_hierarchy_node(void *, void *);
extern "C" void reset_effect_table_state(void);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void operation_8c02688c(void *);
extern "C" void operation_8c0f1204(Object *o)
{
    int v34;
    char *v35;
    char *v37;
    int v36;
    int v13;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    S_c8c021ef8 *t9;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        o->v15();
        return;
    }
    if (((ObjectData *)o)->fe4 != 0) {
        if (((ObjectData *)o)->fe4 == 1) {
            goto L_8c0f1282;
        }
        if (((ObjectData *)o)->fe4 == 2) {
            goto L_8c0f1298;
        }
        if (((ObjectData *)o)->fe4 == 3) {
            goto L_8c0f1368;
        }
    } else {
        t2 = o->v16();
        if (t2 == 0) {
        } else {
            t3 = operation_8c0eea7c((int)o, 4900.0f);
            if (t3 == 0) {
            } else {
                if (!(((ObjectData *)o)->f110 > 0)) {
                } else {
                    ((ObjectData *)o)->fe4 = 1;
                    goto L_8c0f13c2;
L_8c0f1282:;
                    if (((ObjectData *)o)->f118 != 1) {
                    } else {
                        operation_8c027090((int)o);
                        goto L_8c0f13c2;
L_8c0f1298:;
                        if ((((ObjectData *)o)->fd4 & 0xffff) == g_8c418248) {
                            ((ObjectData *)o)->fe4 = 3;
                            call_8c0a6a10(0xe4);
                            if (((ObjectData *)o)->f10c >= 0x64 && 0x3e8 > ((ObjectData *)o)->f10c) {
                                v34 = (int)g_8c4db520;
                                if (v34 != 0) {
                                    t4 = hierarchy_is_active((void *)v34);
                                    if (t4 != 0) {
                                        t5 = allocate_block(g_8c4d97e0, (unsigned int)0xa8);
                                        if (t5 != 0) {
                                            initialize_loader_8c173578((void *)t5, g_8c4db520, (int)(((ObjectData *)o)->f110));
                                        }
                                        ((ObjectData *)o)->f114 = (Arg0_114 *)(int)t5;
                                        if (((ObjectData *)o)->f114 == 0) {
                                            goto L_8c0f13c2;
                                        }
                                        reparent_hierarchy_node((void *)(((ObjectData *)o)->f114), g_8c44be84);
                                        goto L_8c0f13c2;
                                    }
                                }
                            }
                            v35 = (char *)g_8c4db524;
                            if (v35 == 0) {
                                goto L_8c0f13c2;
                            }
                            t6 = hierarchy_is_active((void *)v35);
                            if (t6 == 0) {
                                goto L_8c0f13c2;
                            }
                            t7 = allocate_block(g_8c4d97e0, (unsigned int)0xa8);
                            if (t7 != 0) {
                                initialize_loader_8c173578((void *)t7, g_8c4db524, (int)(((ObjectData *)o)->f110));
                            }
                            ((ObjectData *)o)->f114 = (Arg0_114 *)(int)t7;
                            if (((ObjectData *)o)->f114 == 0) {
                                goto L_8c0f13c2;
                            }
                            reparent_hierarchy_node((void *)(((ObjectData *)o)->f114), g_8c44be84);
                        } else {
                            ((ObjectData *)o)->fe4 = 1;
                            ((ObjectData *)o)->fd4 = 0xffff;
                            goto L_8c0f13c2;
L_8c0f1368:;
                            v37 = (char *)((ObjectData *)o)->f114;
                            if (v37 != 0) {
                                t8 = hierarchy_is_active((void *)v37);
                                if (t8 == 0) {
                                    goto L_8c0f1382;
                                }
                            }
                            if (((ObjectData *)o)->f114 == 0) {
L_8c0f1382:;
                                ((ObjectData *)o)->fe4 = 0;
                                ((ObjectData *)o)->f114 = (Arg0_114 *)0;
                                reset_effect_table_state();
                                v36 = (int)g_8c418248;
                                if ((((ObjectData *)o)->fd4 & 0xffff) == v36) {
                                    t9 = lookup_low_id(v36);
                                    if (t9 != 0) {
                                        v13 = (int)(((t9->f350 & 1)) != 0);
                                        if (v13 != 0) {
                                            operation_8c02688c((void *)t9);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
L_8c0f13c2:;
    ((ObjectData *)o)->fe8 += 1.0f;
    if (((ObjectData *)o)->fec < ((ObjectData *)o)->fe8) {
        ((ObjectData *)o)->fe8 -= ((ObjectData *)o)->fec;
    }
    o->v17();
}
