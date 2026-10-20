typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c470324;
extern int g_8c4dbb08;
extern int g_8c4dbb0c;
extern int operation_8c01018c(int);
extern int operation_8c19b054(void);
extern int call_8c372d38(int, void *);
int operation_8c0e92e0(void)
{
    int v1;
    v1 = (int)(g_8c4dbb08 + g_8c4dbb0c);
    switch (g_8c470324) {
    case 0:
        switch (operation_8c01018c((int)((void *)0x8c319870))) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            v1 -= g_8c4dbb08;
            break;
        }
        break;
    case 1:
        switch (call_8c372d38((int)((char)operation_8c19b054()), (void *)((void *)0x8c319870))) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            v1 -= g_8c4dbb08;
            break;
        }
        break;
    }
    switch (operation_8c01018c((int)((void *)0x8c3198c1))) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        v1 -= g_8c4dbb0c;
        break;
    default:
        switch (operation_8c01018c((int)((void *)0x8c319912))) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            v1 -= g_8c4dbb0c;
            break;
        }
    }
    return v1;
}
