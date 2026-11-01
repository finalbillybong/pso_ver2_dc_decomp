/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c073c2c
 * function: handle_6x5D_drop_meseta_or_stacked_item_8c073c2c
 * language: c
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 28 of 86 reference instruction lines
 * differing bytes: 19
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
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x1];
    unsigned char f01;
    char unknown2[0x2];
    short f04;
    short f06;
    float f08;
    float f0c;
    Block20 f10;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    float f04;
    float f08;
    short f0c;
    short f0e;
    char unknown10[0x14];
};
struct S_vv1 {
    Block20 f00;
};
extern void operation_1c7dd4(void *);
extern void operation_8c1c9f04(void *, int);
extern void operation_8c1c9730(void *);
extern void create_floor_item_8c162de4(void *, int);
void handle_6x5D_drop_meseta_or_stacked_item_8c073c2c(Object *o)
{
    Object *base;
    Frame frame;
    S_vv1 *v1;
    base = o;
    if (base->f04 != 0xf) {
        (&frame)->f01 = 0;
        (&frame)->f00 = -1;
        (&frame)->f02 = -1;
        (&frame)->f04 = 0.0f;
        (&frame)->f08 = 0.0f;
        (&frame)->f0c = -1;
        (&frame)->f0e = 0;
        v1 = (S_vv1 *)((char *)(&frame) + 0x10);
        operation_1c7dd4((void *)v1);
        (&frame)->f00 = base->f04;
        (&frame)->f04 = base->f08;
        (&frame)->f08 = base->f0c;
        (&frame)->f0c = base->f06;
        *(Block20 *)&v1->f00 = *(Block20 *)&base->f10;
        if ((base->f01 << 2) == 0x24) {
            operation_8c1c9f04((void *)(&base->f10), 0);
        } else {
            operation_8c1c9f04((void *)(&base->f10), 2);
        }
        operation_8c1c9730((void *)v1);
        create_floor_item_8c162de4((void *)(&frame), 0);
    }
}
