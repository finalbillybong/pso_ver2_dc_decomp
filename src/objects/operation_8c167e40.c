typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern void call_8c013620(void *, int);
extern void call_8c167eb8(void);
void operation_8c167e40(void)
{
    int v21;
    int t1;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c3177bc), 0, 0, 0);
    }
    *(int *)0x8c4db380 = (int)(t1);
    call_8c013620((void *)((void *)0x8c3177cc), 0x50);
    v21 = (int)0;
    while (4 > v21) {
        *(int *)((char *)0x8c4db2e0 + (v21 << 2)) = 0;
        v21 = (int)(v21 + 1);
    }
    call_8c167eb8();
}
