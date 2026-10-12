typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c09f278(int, void *);
void operation_8c09f220(void)
{
    int t1;
    if (*(int *)0x8c46ed84 != 0) {
        t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x94);
        if (t1 != 0) {
            call_8c09f278(t1, *(S_g8c44be98 **)0x8c44be98);
        }
        *(int *)0x8c46ed80 = t1;
        return;
    }
    *(int *)0x8c46ed80 = 0;
}
