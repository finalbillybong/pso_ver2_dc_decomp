typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
extern void call_8c029228(void);
extern int lookup_low_id(int);
extern void operation_8c02641c(void *);
void operation_8c16e548(void)
{
    int t1;
    call_8c029228();
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        operation_8c02641c((void *)t1);
    }
}
