typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c01c25c(void);
void operation_8c184850(void)
{
    int t1;
    *(int *)0x8c4dbb44 += 1;
    t1 = call_8c01c25c();
    if (t1 != 1) {
        switch (*(int *)0x8c4dbb40) {
        case 0:
        case 1:
            *(int *)0x8c4dbb40 = 2;
            return;
        case 2:
            if (((*(int *)0x8c4dbb44 & 7)) != 0) {
                return;
            }
            *(int *)0x8c4dbb40 = 3;
            return;
        case 3:
            if (((*(int *)0x8c4dbb44 & 7)) != 0) {
                return;
            }
            *(int *)0x8c4dbb40 = 4;
            return;
        case 4:
            if (((*(int *)0x8c4dbb44 & 7)) == 0) {
                *(int *)0x8c4dbb40 = 2;
            }
        }
    }
}
