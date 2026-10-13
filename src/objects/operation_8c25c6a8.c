typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
extern int lookup_low_id(int);
extern int operation_8c0298b0(void *);
extern int current_effect_mode(void);
int operation_8c25c6a8(void)
{
    int t1;
    int t2;
    int t3;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        t2 = operation_8c0298b0((void *)t1);
        if (t2 == 0) {
            goto L_8c25c6c8;
        }
    }
    return 0;
L_8c25c6c8:;
    if (*(int *)0x8c4dc800 == 0) {
        return 0;
    }
    t3 = current_effect_mode();
    switch (t3) {
    case 0:
    case 15:
    case 16:
    case 17:
            return 0;
    }
    return 1;
}
