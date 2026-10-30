/* Character-class test, disabled in input modes 1 and 2 (Hitachi SHC). */
extern int g_input_mode_8c4f0864;

int is_marked_code_8c1f9e88(unsigned char c)
{
    int mode = g_input_mode_8c4f0864;
    if (mode == 1 || mode == 2) return 0;
    switch (c) {
    case 0x9d: case 0xa1: case 0xa3: case 0xa5: case 0xa7: case 0xa9: case 0xc3:
    case 0xe3: case 0xe5: case 0xe7: case 0xee: case 0xf2: case 0xf3:
        return 1;
    }
    return 0;
}
