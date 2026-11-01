/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0eccd8
 * function: operation_8c0eccd8
 * language: c
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 18 of 64 reference instruction lines
 * differing bytes: 23
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
    char unknown0[0x28];
    int f28;
    char unknown2c[0x6c];
    float f98;
    char unknown9c[0x4];
    float fa0;
    char unknowna4[0x14];
    float fb8;
    char unknownbc[0x4];
    float fc0;
    char unknownc4[0x14];
    float fd8;
    char unknowndc[0x4];
    float fe0;
    char unknowne4[0x14];
    float ff8;
    char unknownfc[0x4];
    float f100;
    char unknown104[0x14];
    float f118;
    char unknown11c[0x4];
    float f120;
    char unknown124[0x14];
    float f138;
    char unknown13c[0x4];
    float f140;
};
void operation_8c0eccd8(Object *o)
{
    float v1;
    float v2;
    v1 = (float)((float)o->f28 * 60.0f + 133.0f);
    o->f138 = v1;
    o->f118 = v1;
    o->ff8 = v1;
    o->fd8 = v1;
    o->fb8 = v1;
    o->f98 = v1;
    v2 = (float)((float)o->f28 * 60.0f + 161.0f);
    o->fa0 = o->fc0 = o->fe0 = o->f100 = o->f120 = o->f140 = v2;
}
