/* Pool group 0x8c3cfec4-0x8c3cffbc (Hitachi SHC): bit-banged serial output on
   the port at 0xa1001750 and a bounded wait for its ready bit. */
#define PORT ((volatile unsigned char *)0xa1001750)

extern unsigned char port_read_8c3d05a8(volatile unsigned char *);
extern void port_write_8c3d0614(volatile unsigned char *, unsigned char);
extern void delay_8c3cfc00(int);

void serial_send_8c3cfec4(int bits, unsigned long data)
{
    unsigned char base, high;
    unsigned long mask;
    int i;
    base = port_read_8c3d05a8(PORT);
    for (i = 0, mask = 0x80000000; i < bits; i++, mask >>= 1) {
        if (data & mask) {
            port_write_8c3d0614(PORT, base | 2);
            port_write_8c3d0614(PORT, base | 6);
        } else {
            port_write_8c3d0614(PORT, base);
            port_write_8c3d0614(PORT, base | 4);
        }
        port_write_8c3d0614(PORT, base);
    }
}

int serial_wait_8c3cff40(void)
{
    unsigned char base;
    unsigned long i;
    unsigned char v;
    base = port_read_8c3d05a8(PORT);
    port_write_8c3d0614(PORT, base | 8);
    for (i = 0; i < 0x400000; i++) {
        v = port_read_8c3d05a8(PORT);
        if (v & 1) break;
        delay_8c3cfc00(1);
    }
    port_write_8c3d0614(PORT, base);
    if (i == 0x400000) return -1;
    return 0;
}
