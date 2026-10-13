typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern char g_8c470340;
extern char g_8c470341;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c3806f6(int, int, int);
extern void call_8c01d9dc(void);
extern void call_8c01c250(int);
extern void call_8c01c244(int);
extern void operation_8c180aac(void);
extern int allocate_block(void *, unsigned int);
extern void call_8c0e97b4(int);
extern void call_8c380516(void);
void operation_8c0e9930(void)
{
    int t1;
    call_8c3806f6(0, 0, 0);
    call_8c01d9dc();
    call_8c01c250(2);
    if (g_8c470341 != 0) {
        if (g_8c470341 == 1) {
            goto L_8c0e9964;
        }
    } else {
        call_8c01c244(1);
        goto L_8c0e9970;
L_8c0e9964:;
        operation_8c180aac();
        call_8c01c244(9);
    }
L_8c0e9970:;
    g_8c470340 = 0;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x28);
    if (t1 != 0) {
        call_8c0e97b4(t1);
    }
    call_8c380516();
}
