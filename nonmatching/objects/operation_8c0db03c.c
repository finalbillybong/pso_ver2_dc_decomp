/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0db03c
 * function: operation_8c0db03c
 * language: c
 * reference size: 356 bytes
 * compiled size: 356 bytes (+0.0%)
 * differing lines: 22 of 148 reference instruction lines
 * differing bytes: 22
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
typedef struct S_c8c03ed10 S_c8c03ed10;
typedef struct Frame Frame;
struct Frame {
    int f00;
    unsigned short f04;
    char unknown6[0x4];
    short f0a;
};
extern void *g_8c46fe00;
extern int g_8c46fe04;
extern char g_8c307430[];
extern int operation_8c03ed10(int);
extern void call_8c38ab0c(void *, Frame *);
extern void call_8c38a9e2(int);
extern void call_8c38aa5c(int, int, void *);
extern void operation_8c03ed70(int);
extern void load_prs_resource_sized_8c033d18(void *, void *);
extern void call_8c3827d8(void *);
extern void call_8c38a984(int, int);
void operation_8c0db03c(int a0)
{
    Frame frame;
    (&frame)->f00 = operation_8c03ed10((int)((void *)g_8c307430));
    call_8c38ab0c((void *)((g_8c307430 + 0xc)), (Frame *)((&frame)));
    call_8c38a9e2((int)((unsigned short)(&frame)->f04));
    call_8c38aa5c(0x100, (int)((&frame)->f0a), (S_c8c03ed10 *)(&frame)->f00);
    call_8c38ab0c((void *)((g_8c307430 + 0x1e)), (Frame *)((&frame)));
    call_8c38a9e2((int)((unsigned short)(&frame)->f04));
    call_8c38aa5c(0x300, (int)((&frame)->f0a), (S_c8c03ed10 *)(&frame)->f00);
    call_8c38ab0c((void *)((g_8c307430 + 0x32)), (Frame *)((&frame)));
    call_8c38a9e2((int)((unsigned short)(&frame)->f04));
    call_8c38aa5c(0, (int)((&frame)->f0a), (S_c8c03ed10 *)(&frame)->f00);
    operation_8c03ed70((int)((void *)g_8c307430));
    switch (a0) {
    case 0:
        load_prs_resource_sized_8c033d18((void *)((g_8c307430 + 0x44)), (void *)((void *)0x8c31d0ac));
        g_8c46fe00 = (void *)0x8c31d0ac;
        g_8c46fe04 = 0;
        call_8c3827d8((void *)((void *)0x8c31d0ac));
        call_8c38a984(0, 0x10);
        call_8c38a984(1, 0x10);
        call_8c38a984(2, 0x10);
        call_8c38a984(3, 0x10);
        call_8c38a984(4, 0x10);
        call_8c38a984(0xa, 0x30);
        call_8c38a984(5, 0x10);
        call_8c38a984(6, 0);
        call_8c38a984(7, 0);
        call_8c38a984(8, 0);
        call_8c38a984(9, 0);
        return;
    case 1:
        load_prs_resource_sized_8c033d18((void *)((g_8c307430 + 0x50)), (void *)((void *)0x8c31d0c0));
        g_8c46fe00 = (void *)0x8c31d0c0;
        g_8c46fe04 = 0;
        call_8c3827d8((void *)((void *)0x8c31d0c0));
        call_8c38a984(0, 0x10);
    }
}
