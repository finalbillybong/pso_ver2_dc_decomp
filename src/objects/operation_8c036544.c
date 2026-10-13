typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0x8];
    short f08;
    char unknowna[0xa];
};
extern void call_8c204010(Frame *);
extern int call_8c3d04fa(void);
int operation_8c036544(void)
{
    Frame frame;
    int t1;
    if (*(int *)0x8c461c00 == 0) {
        call_8c204010((Frame *)((&frame)));
        switch ((&frame)->f08) {
        case 5:
        case 8:
                return 0;
        }
    } else {
        t1 = call_8c3d04fa();
        if (t1 == 0) {
            return 0;
        }
    }
    return 1;
}
