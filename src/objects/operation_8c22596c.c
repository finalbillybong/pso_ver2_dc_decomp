typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c5060c0 S_g8c5060c0;
typedef struct S_g8c5060c4 S_g8c5060c4;
extern void call_8c122774(void *, void *);
extern int call_8c257e2c(int);
extern int allocate_block(void *, unsigned int);
extern void call_8c2259fc(int);
extern void call_8c12b154(int, int, int);
void operation_8c22596c(int a0)
{
    int v29;
    int t1;
    int t2;
    if (*(int *)0x8c5060c4 != 0) {
        call_8c122774((void *)(*(S_g8c5060c0 **)0x8c5060c0), (void *)(*(S_g8c5060c4 **)0x8c5060c4));
        *(int *)0x8c5060c4 = 0;
    }
    if (a0 != 0) {
        t1 = call_8c257e2c(a0);
        t2 = allocate_block((void *)(*(S_g8c5060c0 **)0x8c5060c0), (unsigned int)(t1 + 1));
        v29 = (int)t2;
        if (t2 == 0) {
            do {
                call_8c2259fc(0);
                v29 = allocate_block((void *)(*(S_g8c5060c0 **)0x8c5060c0), (unsigned int)(t1 + 1));
            } while (v29 == 0);
        }
        call_8c12b154(v29, a0, (int)(t1 + 1));
        *(int *)0x8c5060c4 = (int)(v29);
    }
}
