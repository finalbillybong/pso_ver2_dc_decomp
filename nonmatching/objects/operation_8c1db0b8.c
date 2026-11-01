/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1db0b8
 * function: operation_8c1db0b8
 * language: c
 * reference size: 648 bytes
 * compiled size: 660 bytes (+1.9%)
 * differing lines: 370 of 289 reference instruction lines
 * differing bytes: 501
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vec3f {
    float x;
    float y;
    float z;
} Vec3f;
typedef struct Vec3i {
    int x;
    int y;
    int z;
} Vec3i;
typedef struct Frame {
    char unknown0[0x8];
    int a;
    int b;
} Frame;
typedef struct Res {
    char unknown0[0x42c];
    Frame *frames;
} Res;
typedef struct Object {
    char unknown0[0x70];
    float size;
    char unknown74[0x28];
    float spread;
    int n;
    int *fa4;
    int *fa8;
    Vec3f *pos;
    float *vy;
    Vec3i *rot;
    Vec3i *drot;
} Object;
extern Res *g_8c4e2f40;
extern int rand(void);
void operation_8c1db0b8(Object *o)
{
    int kf;
    int i;
    int off;
    int k;
    int idx;
    float s;
    kf = 0x42c;
    for (i = 0; i < o->n; i++) {
        k = i << 2;
        off = i * 0xc;
        *(int *)((char *)&o->rot->x + off) += *(int *)((char *)&o->drot->x + off);
        *(int *)((char *)&o->rot->y + off) += *(int *)((char *)&o->drot->y + off);
        *(int *)((char *)&o->rot->z + off) += *(int *)((char *)&o->drot->z + off);
        *(float *)((char *)&o->pos->y + off) += *(float *)((char *)o->vy + k);
        if (*(float *)((char *)&o->pos->y + off) > 2000.0f) {
            idx = (int)((float)rand() / 32768.0f * 4.0f);
            *(int *)((char *)o->fa4 + k) = *(int *)((char *)&(*(Frame **)((char *)g_8c4e2f40 + kf))->a + (idx << 4));
            *(int *)((char *)o->fa8 + k) = *(int *)((char *)&(*(Frame **)((char *)g_8c4e2f40 + kf))->b + (idx << 4));
            *(float *)((char *)&o->pos->x + off) = o->spread * ((float)rand() / 32768.0f);
            *(float *)((char *)&o->pos->y + off) = 0.0f;
            *(float *)((char *)&o->pos->z + off) = o->spread * ((float)rand() / 32768.0f);
            s = o->size * 0.5f;
            *(float *)((char *)o->vy + k) = s * ((float)rand() / 32768.0f) + s;
            *(int *)((char *)&o->rot->x + off) = (int)((float)rand() / 32768.0f * 65535.0f);
            *(int *)((char *)&o->rot->y + off) = (int)((float)rand() / 32768.0f * 65535.0f);
            *(int *)((char *)&o->rot->z + off) = (int)((float)rand() / 32768.0f * 65535.0f);
            *(int *)((char *)&o->drot->x + off) = (int)((float)rand() / 32768.0f * 4096.0f);
            *(int *)((char *)&o->drot->y + off) = (int)((float)rand() / 32768.0f * 4096.0f);
            *(int *)((char *)&o->drot->z + off) = (int)((float)rand() / 32768.0f * 4096.0f);
        }
    }
}
