/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c206b08
 * function: operation_8c206b08
 * language: c
 * reference size: 88 bytes
 * compiled size: 88 bytes (+0.0%)
 * differing lines: 8 of 36 reference instruction lines
 * differing bytes: 8
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0x11];
    char f11;
    char unknown12[0x12];
};
extern void memset_8c12b880(void *, int, int);
extern void strncpy_8c12b154(void *, int, int);
extern void call_8c2069b4(void *, Frame *);
extern int strncmp(void *, Frame *, int);
int operation_8c206b08(int a0)
{
    void *pm2;
    int t1;
    Frame frame;
    memset_8c12b880((void *)(&(&frame)->f11), 0, 0x11);
    memset_8c12b880((void *)(&frame), 0, 0x11);
    pm2 = (void *)(&(&frame)->f11);
    strncpy_8c12b154(pm2, a0, 0x10);
    call_8c2069b4((void *)(&(&frame)->f11), ((&frame)));
    pm2 = (void *)(&(&frame)->f11);
    t1 = strncmp(pm2, (Frame *)((&frame)), 0x10);
    return (t1);
}
