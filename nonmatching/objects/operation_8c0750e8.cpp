/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0750e8
 * function: operation_8c0750e8
 * language: c++
 * reference size: 228 bytes
 * compiled size: 228 bytes (+0.0%)
 * differing lines: 4 of 97 reference instruction lines
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
class S_c8c03b55c;
struct Object {
    char unknown0[0xe6];
    unsigned short fe6;
};
struct S_c8c021ef8 {
    char unknown0[0x330];
    short f330;
    short f332;
    char unknown334[0xd0];
    char f404[0x13];
};
class S_c8c03b55c {
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
    virtual void v21(int);
    virtual void v22(int);
};
typedef struct S_c8c03b55cData {

} S_c8c03b55cData;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" S_c8c03b55c *operation_8c03b55c(int, int);
extern "C" void set_330(void *, short);
extern "C" void operation_8c0750e8(Object *o, int a1, int a2)
{
    S_c8c021ef8 *t1;
    int v4;
    short v2;
    short v3;
    int v1;
    int v7;
    S_c8c03b55c *t2;
    S_c8c03b55c *t3;
    if ((short)a1 >= 0 && 0x13 > (short)a1 && (short)a2 >= 0 && 0x1d >= (short)a2) {
        t1 = lookup_low_id((int)(o->fe6 & 0xffff));
        if (t1 != 0) {
            v1 = (int)0xbcc;
            v2 = (short)t1->f330;
            v3 = (short)t1->f332;
            v4 = (int)9;
            while (v4 != 0xd) {
                t2 = operation_8c03b55c((int)((int)t1 + v1), v4);
                if (t2 != 0) {
                    t2->v22(1);
                }
                v4 = (int)(v4 + 1);
            }
            t1->f404[(short)a1] = a2;
            a1 = (int)9;
            v7 = (int)0xbcc;
            while (a1 != 0xd) {
                t3 = operation_8c03b55c((int)((int)t1 + v7), a1);
                if (t3 != 0) {
                    t3->v21(1);
                }
                a1 = (int)(a1 + 1);
            }
            set_330((void *)t1, v2);
            t1->f332 = v3;
        }
    }
}
