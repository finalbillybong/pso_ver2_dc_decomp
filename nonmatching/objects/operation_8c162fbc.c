/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c162fbc
 * function: operation_8c162fbc
 * language: c
 * reference size: 380 bytes
 * compiled size: 380 bytes (+0.0%)
 * differing lines: 4 of 164 reference instruction lines
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
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c418258 S_g8c418258;
typedef struct S_g8c44be04 S_g8c44be04;
typedef struct Object Object;
typedef struct S_x84816 S_x84816;
typedef struct Block_frame_24 {
    char unknown0[0x4];
    unsigned short f04;
    char unknown6[0x6];
} Block_frame_24;
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
struct Object {
    char unknown0[0x2c];
    short f2c;
    char unknown2e[0x2];
    short f30;
    char unknown32[0xa];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x344];
    int f38c;
};
struct Frame {
    char f0c;
    char f0d;
    char unknowne[0x2];
    char f10;
    char f11;
    short f12;
    float f14;
    float f18;
    short f1c;
    short f1e;
    char f20;
    char unknown21[0x3];
};
struct S_x84816 {
    Vector3 f00;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c163d20(int);
extern int get_current_area_8c032b10(void);
extern int operation_8c011290(int, int);
extern void operation_8c036964(void *);
void operation_8c162fbc(Object *o)
{
    Block_frame_24 row;
    Frame msg;
    Vector3 pos;
    int v81;
    S_c8c021ef8 *t1;
    S_c8c021ef8 *t2;
    int t3;
    int t4;
    int t5;
    if (o == 0) {
        return;
    }
    t1 = lookup_low_id((int)(*(S_g8c418258 **)0x8c418258));
    t2 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 == 0 || t2 == 0) {
        return;
    }
    t3 = operation_8c163d20((int)(*(S_g8c44be04 **)0x8c44be04));
    if (t3 != 0) {
        if (t1->f37c == t2->f37c && *(int *)0x8c418258 != *(int *)0x8c418248) {
            return;
        }
        v81 = (int)o->f30;
        if (v81 != -1) {
            *(Vector3 *)&row = *(Vector3 *)&((S_x84816 *)(*(int *)0x8c46ed10 + v81 * 0xc))->f00;
            if (row.f04 != 0xffff) {
                msg.f18 = 0.0f;
                msg.f14 = 0.0f;
                msg.f1c = 0;
                msg.f1e = 0;
                msg.f11 = 0;
                msg.f10 = 0;
                msg.f0c = 0x60;
                msg.f0d = 5;
                msg.f0c = 0x60;
                msg.f0d = 6;
                msg.f10 = *(int *)0x8c44be04;
                msg.f11 = o->f38c;
                msg.f12 = o->f30;
                msg.f14 = o->f3c;
                msg.f18 = o->f44;
                msg.f1c = o->f2c;
                t4 = get_current_area_8c032b10();
                msg.f20 = t4;
                pos.x = msg.f14;
                pos.y = 100.0f;
                pos.z = msg.f18;
                t5 = operation_8c011290((int)(&pos), 1);
                if (t5 != 0) {
                    operation_8c036964((void *)(&msg));
                }
            }
        }
    }
}
