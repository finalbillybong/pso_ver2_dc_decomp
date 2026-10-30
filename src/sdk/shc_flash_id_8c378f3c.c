/* Reads (and optionally byte-swaps) a 5-word identifier block (Hitachi SHC). */
extern int cmd_begin_8c378bf8(int mode);
extern int cmd_reset_8c378cfc(int arg);
extern int cmd_read_8c378d88(int n, char *buf);
extern int cmd_poll_8c378e04(void);
extern char *cmd_result_8c37873c(void);
extern int cmd_write_8c378dc4(int n, char *buf);

int flash_id_8c378f3c(int arg)
{
    int mask = arg;
    char buf[0x3c];
    int r;
    char *s;
    char *dst;
    int i;
    int n;

    r = cmd_begin_8c378bf8(2);
    if (r == -8) {
        r = cmd_reset_8c378cfc(0);
        if (r) goto fail;
    } else if (r) goto fail;
    goto y0;
y0: ;
    r = cmd_read_8c378d88(5, buf);
    if (r) goto fail;
    goto z0;
z0: ;
    do {
        r = cmd_poll_8c378e04();
    } while (r == 2);
    if (r != 1) goto fail;
    dst = cmd_result_8c37873c() + 0x10;
    if (mask == 0) {
        s = buf;
        n = 8;
        while (n) {
            *dst = *s++;
            n--;
            dst++;
        }
        goto ok;
    }
    s = buf + 7;
    dst += 7;
    i = 0;
    while (i < 5) {
        if (mask & 1) {
            *s = *dst;
            if (i == 4) {
                dst--;
                *--s = *dst;
                dst--;
                *--s = *dst;
                dst--;
                *--s = *dst;
            }
        }
        mask >>= 1;
        s--;
        dst--;
        i++;
    }
    r = cmd_write_8c378dc4(5, buf);
    if (r) goto fail;
    do {
        r = cmd_poll_8c378e04();
    } while (r == 2);
    if (r == 1) goto ok;
fail:
    return -1;
ok:
    return 0;
}
