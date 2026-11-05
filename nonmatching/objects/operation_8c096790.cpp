/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c096790
 * function: operation_8c096790
 * language: c++
 * reference size: 196 bytes
 * compiled size: 196 bytes (+0.0%)
 * differing lines: 2 of 77 reference instruction lines
 * differing bytes: 4
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
typedef struct S_L8c300c84 S_L8c300c84;
struct S_L8c300c84 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
    Vector3 f30;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c300c48;
extern Vector3 g_8c300c54;
extern Vector3 g_8c300c60;
extern Vector3 g_8c300c6c;
extern Vector3 g_8c300c78;
extern int g_8c469e48;
extern char g_8c469e4c;
extern S_L8c300c84 g_8c300c84;
extern "C" char gc_8c300c84[];
extern "C" void call_8c096dfc(int);
extern "C" void operation_8c096790(int a0)
{
    if (g_8c469e4c == 0) {
        {
            Vector3 *p_ = (Vector3 *)&g_8c300c48;
            *(Vector3 *)&*(Vector3 *)(gc_8c300c84 + 0x0) = *p_;
        }
        *(Vector3 *)&*(Vector3 *)(gc_8c300c84 + 0xc) = *(Vector3 *)&g_8c300c54;
        *(Vector3 *)&*(Vector3 *)(gc_8c300c84 + 0x18) = *(Vector3 *)&g_8c300c60;
        *(Vector3 *)&*(Vector3 *)(gc_8c300c84 + 0x24) = *(Vector3 *)&g_8c300c6c;
        *(Vector3 *)&*(Vector3 *)(gc_8c300c84 + 0x30) = *(Vector3 *)&g_8c300c78;
        g_8c469e4c = 1;
    }
    (((PmfObj *)(a0))->*(*(PMF_0 *)(g_8c469e48 * 0xc + gc_8c300c84)))();
    call_8c096dfc(a0);
}
