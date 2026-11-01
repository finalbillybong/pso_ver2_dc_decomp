/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d8ed8
 * function: operation_8c0d8ed8
 * language: c
 * reference size: 244 bytes
 * compiled size: 244 bytes (+0.0%)
 * differing lines: 8 of 74 reference instruction lines
 * differing bytes: 14
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
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x40c];
    unsigned short f430;
    short f432;
    short f434;
    short f436;
    float f438;
    int f43c;
    unsigned short f440;
    short f442;
    short f444;
    char unknown446[0x2];
    unsigned short f448;
    short f44a;
    short f44c;
    char unknown44e[0x2];
    unsigned short f450;
    short f452;
    short f454;
    char unknown456[0x2];
    int f458;
    unsigned short f45c;
    short f45e;
    float f460;
    float f464;
};
extern void set_fields_8c0daf8c(void *);
void operation_8c0d8ed8(Object *o)
{
    int v1;
    unsigned short m;
    o->f20 = 0;
    v1 = (int)0;
    while (4 > v1) {
        set_fields_8c0daf8c((void *)((int)o + v1 * 0xfc + 0x40));
        v1 = (int)(v1 + 1);
    }
    m = 0xffff;
    o->f440 = m;
    o->f442 = 0;
    o->f444 = 0;
    o->f448 = m;
    o->f44a = 0;
    o->f44c = 0;
    o->f430 = m;
    o->f432 = 0;
    o->f434 = 0;
    o->f436 = 0;
    o->f438 = 0.0f;
    o->f43c = 0;
    o->f450 = m;
    o->f452 = 0;
    o->f454 = 0;
    o->f458 = 0;
    o->f45e = o->f45c = m;
    o->f460 = 0.0f;
    o->f464 = 640000.0f;
}
