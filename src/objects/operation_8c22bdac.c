typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c506300 S_g8c506300;
typedef struct S_vv28 S_vv28;
struct S_vv28 {
    int f00;
};
extern int call_8c18de4c(int);
extern void call_8c12b154(int, void *, int);
extern int call_8c34cd84(int, void *, int, void *);
extern int call_8c34ce88(int);
extern void operation_8c104c60(void);
void operation_8c22bdac(void)
{
    S_vv28 *v28;
    int v26;
    int v30;
    int v25;
    int v29;
    int t1;
    int t2;
    int t3;
    int t4;
    unsigned int v31;
    v28 = (S_vv28 *)(void *)0x8c004000;
    v31 = 0x1000;
    for (v26 = 0; v31 > (unsigned int)(short)v26; v26++) {
        if ((v28++)->f00 != 0) {
            for (;;) {
            }
        }
    }
    t1 = call_8c18de4c(0x268);
    *(int *)0x8c506300 = (int)(t1);
    t2 = call_8c18de4c(0x1c);
    *(int *)0x8c506304 = (int)(t2);
    call_8c12b154(t2, (void *)((void *)0x8c2e1b28), 0x1c);
    t3 = call_8c34cd84(0xb8, (void *)((void *)0x8c2e1b28), 0, (void *)(*(S_g8c506300 **)0x8c506300));
    if (t3 != 0) {
        return;
    }
    v30 = (int)0;
    v29 = (int)v30;
L_8c22be00:;
    t4 = call_8c34ce88(0xb8);
    if (t4 == 2) {
        operation_8c104c60();
        goto L_8c22be00;
    } else {
        v25 = (int)t4;
    }
    if (v25 == 3) {
        return;
    }
    if (!(3 > v29)) {
        return;
    }
    call_8c34cd84(0xb8, (void *)((void *)0x8c2e1b28), 0, (void *)(*(S_g8c506300 **)0x8c506300));
    v29 = (int)(v29 + 1);
    goto L_8c22be00;
}
