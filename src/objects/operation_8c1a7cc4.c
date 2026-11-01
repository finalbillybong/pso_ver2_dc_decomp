typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c323e1c[];
extern void njPrintSize_8c38c5aa(int);
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
void operation_8c1a7cc4(void)
{
    njPrintSize_8c38c5aa(0xe);
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x40008, (void *)((g_8c323e1c + 0x50)));
    njPrintColor_8c38c5b6(-0xf0f10);
    njPrintSize_8c38c5aa(0xc);
}
