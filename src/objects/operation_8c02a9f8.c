extern int operation_1e9610(void *);
extern int operation_8c1e9dc0(void *);
extern int operation_02c350(void *);
short operation_8c02a9f8(void *a0, int a1)
{
    switch (a1) {
    case 1:
    default:
        return operation_1e9610(a0);
    case 2:
    case 3:
        return operation_8c1e9dc0(a0);
    case 4:
        return *(short *)(0x8c2e731c + ((short)operation_02c350(a0) << 1));
    case 5:
        return *(short *)(0x8c2e7358 + ((short)operation_02c350(a0) << 1));
    case 6:
        return *(short *)(0x8c2e7376 + ((short)operation_02c350(a0) << 1));
    case 7:
        return *(short *)(0x8c2e7394 + ((short)operation_02c350(a0) << 1));
    case 8:
        return *(short *)(0x8c2e73f6 + ((short)operation_02c350(a0) << 1));
    case 9:
        return *(short *)(0x8c2e7414 + ((short)operation_02c350(a0) << 1));
    case 10:
        return *(short *)(0x8c2e73d8 + ((short)operation_02c350(a0) << 1));
    case 11:
        return *(short *)(0x8c2e7504 + ((short)operation_02c350(a0) << 1));
    case 12:
        return *(short *)(0x8c2e74e6 + ((short)operation_02c350(a0) << 1));
    case 13:
        return *(short *)(0x8c2e746e + ((short)operation_02c350(a0) << 1));
    case 14:
        return *(short *)(0x8c2e7432 + ((short)operation_02c350(a0) << 1));
    case 15:
        return *(short *)(0x8c2e748c + ((short)operation_02c350(a0) << 1));
    }
}
