extern int **g_8c4db408;
extern int call_8c2480e4(int *);
void operation_8c170d28(int a0, int a1)
{
    switch (call_8c2480e4(*(int **)((char *)g_8c4db408 + ((unsigned char)a0 << 2)))) {
    case 2:
        *(int *)((char *)g_8c4db408 + ((unsigned char)a1 << 2)) = 2;
        break;
    case 1:
        *(int *)((char *)g_8c4db408 + ((unsigned char)a1 << 2)) = 1;
        break;
    case 0:
        *(int *)((char *)g_8c4db408 + ((unsigned char)a1 << 2)) = 0;
        break;
    case -1:
        *(int *)((char *)g_8c4db408 + ((unsigned char)a1 << 2)) = 3;
        break;
    case -2:
        *(int *)((char *)g_8c4db408 + ((unsigned char)a1 << 2)) = 4;
        break;
    case -3:
        *(int *)((char *)g_8c4db408 + ((unsigned char)a1 << 2)) = 5;
        break;
    case -4:
    default:
        *(int *)((char *)g_8c4db408 + ((unsigned char)a1 << 2)) = 6;
        break;
    }
}
