typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    int f00;
};
extern int call_8c18de4c(int);
extern int call_8c379038(int);
extern int call_8c379108(Frame *);
extern void call_8c37904a(void);
extern void call_8c18de08(int);
int operation_8c04c338(void)
{
    Frame frame;
    int v1;
    int v5;
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = call_8c18de4c(0x4000);
    t2 = call_8c379038(t1);
    v1 = (int)-1;
    if (t2 == v1) {
        (&frame)->f00 = 1;
    } else {
        t3 = call_8c379108((Frame *)((&frame)));
        if (t3 == -1) {
            (&frame)->f00 = 1;
        }
    }
    call_8c37904a();
    switch ((&frame)->f00) {
    case 0:
        (&frame)->f00 = 0;
        break;
    case 1:
        (&frame)->f00 = 1;
        break;
    case 2:
        (&frame)->f00 = 2;
        break;
    case 3:
        (&frame)->f00 = 3;
        break;
    case 4:
        (&frame)->f00 = 4;
        break;
    case 5:
    default:
        (&frame)->f00 = 1;
        break;
    }
    call_8c18de08(t1);
    return (int)((&frame)->f00);
}
