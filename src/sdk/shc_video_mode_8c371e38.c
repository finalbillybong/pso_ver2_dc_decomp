/* SDK pool group 0x8c371e38-0x8c371e5c (Hitachi SHC): reads the video output
   mode bits from a hardware register. */
static unsigned int read_mode_bits_8c371e4a(void);

int video_mode_8c371e38(void)
{
    unsigned int mode;
    mode = 3 & (read_mode_bits_8c371e4a() >> 8);
    return mode;
}

static unsigned int read_mode_bits_8c371e4a(void)
{
    unsigned short value;
    value = *(unsigned short *)0xff800030;
    return value & 0x300;
}
