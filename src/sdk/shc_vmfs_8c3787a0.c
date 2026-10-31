typedef struct {
    unsigned short id;
    char data[0x3c];
    unsigned short crc;
} Hdr;

typedef struct {
    short port;
    short state;
    int dev;
    int size;
    char *buf;
    int count;
    int nblocks;
    int nfat;
    int busy;
    int status;
    int phase;
    int block;
    int result;
    char *src;
    Hdr hdr;
} Fs;

typedef struct {
    int dev;
    int size;
} Info;

extern Fs *g_fs_cur_8c3fbfb8;
extern Fs g_fs_8c56d0b0;
extern char str_8c3f77d4[];
extern int fs_info_8c378750(int, Info *);
extern int fs_dev_read_8c378764(int, void *, int);
extern int fs_dev_write_8c378778(int, void *, int);
extern int fs_dev_check_8c37878c(int);
extern unsigned short fs_crc_8c378f00(int, void *);

int fs_memeq_8c3787a0(char *a, char *b, int n)
{
    while (n-- > 0) {
        if (*a++ != *b++) return 0;
    }
    return 1;
}

void fs_copy32_8c3787bc(int *src, int *dst, int n)
{
    n /= 4;
    while (n-- > 0) {
        *dst++ = *src++;
    }
}

void fs_copy8_8c3787d8(char *src, char *dst, int n)
{
    while (n-- > 0) {
        *dst++ = *src++;
    }
}

void fs_fill_8c3787ec(char *p, int n)
{
    while (n > 0) {
        n--;
        *p++ = -1;
    }
}

int fs_count_8c378800(char *p, int n)
{
    int i;
    int j;
    int count;
    char c;

    count = 0;
    i = n * 64;
    while (i > 0) {
        c = *p++;
        for (j = 8; j > 0; j--) {
            if (c & 0x80) goto done;
            c <<= 1;
            count++;
        }
        i--;
    }
done:
    return count;
}

int fs_pack_8c378838(int count, char *dst, int n)
{
    int i;
    int k;
    char b;

    for (i = n * 64; i > 0; i--) {
        if (count >= 8) {
            *dst++ = 0;
            count -= 8;
        } else if (count > 0) {
            for (k = 0; k < 8; k++) {
                b <<= 1;
                if (count > 0) count--;
                else b |= 1;
            }
            *dst++ = b;
        } else {
            *dst++ = -1;
        }
    }
    return 0;
}

int fs_check_8c378886(Fs *fs, Hdr *h)
{
    int i;
    unsigned short c;
    unsigned char *p;

    i = 0x3c;
    p = (unsigned char *)h + 2;
    do {
        if (*p++ != 0xff) goto bad;
    } while (--i > 0);
    c = fs_crc_8c378f00(0x3e, h);
    if (((unsigned short *)h)[0x1f] == c) goto ok;
bad:
    return 0;
ok:
    p = (unsigned char *)h;
    for (i = 0x40; i != 0; i--) *p++ = 0xff;
    return 1;
}

int fs_load_8c3788d6(Fs *fs)
{
    char *buf;
    int dev;
    int off;
    int n;
    int addr;
    int r;
    Hdr *h;
    unsigned short c;

    buf = fs->buf;
    dev = fs->dev;
    r = fs_dev_read_8c378764(dev, buf, 0x40);
    if (r == -1) goto fail;
    off = (fs->nblocks + 1) * 64;
    r = fs_dev_read_8c378764(dev + off, buf + off, fs->nfat * 64);
    if (r == -1) goto fail;
    fs->count = n = fs_count_8c378800(buf + off, fs->nfat);
    addr = dev + 0x40;
    if (fs->state == 0) {
        h = &fs->hdr;
        if (n > 0) do {
            r = fs_dev_read_8c378764(addr, h, 0x40);
            if (r == -1) {
            fail:
                return -1;
            }
            if (h->id == 0xffff) break;
            c = fs_crc_8c378f00(0x3e, h);
            if (((unsigned short *)h)[0x1f] != c) goto next;
            if (h->id >= fs->nblocks) goto next;
            fs_copy32_8c3787bc((int *)h, (int *)(buf + (h->id + 1) * 64), 0x40);
        next:
            n--;
            addr += 0x40;
        } while (n > 0);
        return 0;
    }
    return -6;
}

int fs_flush_8c3789bc(Fs *fs)
{
    int dev;
    Hdr *p;
    int addr;
    int i;
    int n;
    int off;
    int r;

    dev = fs->dev;
    if (fs->state == 0) {
        p = (Hdr *)fs->buf;
        addr = dev;
        r = fs_dev_write_8c378778(dev, p++, 0x40);
        if (r != 0x40) goto fail;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto count;
count:
        i = fs->nblocks;
        addr += 0x40;
        n = 0;
        if (i > 0) do {
            if (p->id == 0xffff) goto next;
            if (fs_check_8c378886(fs, p) != 0) goto next;
            r = fs_dev_write_8c378778(addr, p, 0x40);
            if (r != 0x40) goto fail;
            addr += 0x40;
            n++;
        next:
            i--;
            p++;
        } while (i > 0);
        off = (fs->nblocks + 1) * 64;
        fs_pack_8c378838(n, (char *)p, fs->nfat);
        r = fs_dev_write_8c378778(dev + off, p, fs->nfat * 64);
        if (r != fs->nfat * 64) {
        fail:
            return -2;
        }
        fs->count = n;
        return 0;
    }
    return -6;
}

int fs_write_hdr_8c378a78(Fs *fs)
{
    Hdr *h;
    int off;
    int moff;
    int r;
    unsigned short c;

    if (fs->state == 0) {
        h = &fs->hdr;
        h->id = fs->block;
        fs_copy8_8c3787d8(fs->src, h->data, 0x3c);
        c = fs_crc_8c378f00(0x3e, h);
        ((unsigned short *)h)[0x1f] = c;
        off = (fs->block + 1) * 64;
        fs_copy32_8c3787bc((int *)h, (int *)(fs->buf + off), 0x40);
        if (fs->count >= fs->nblocks) return -10;
        moff = (fs->nblocks + 1) * 64;
        fs_pack_8c378838(fs->count + 1, fs->buf + moff, fs->nfat);
        r = fs_dev_write_8c378778(fs->dev + moff, fs->buf + moff, fs->nfat * 64);
        if (r != fs->nfat * 64) goto fail;
        off = (fs->count + 1) * 64;
        fs->count++;
        r = fs_dev_write_8c378778(fs->dev + off, h, 0x40);
        if (r != 0x40) {
        fail:
            return -2;
        }
        return 0;
    }
    return -6;
}

int fs_read_blk_8c378b40(Fs *fs)
{
    Hdr *h;
    unsigned short c;

    if (fs->state == 0) {
        h = (Hdr *)(fs->buf + (fs->block + 1) * 64);
        fs_copy8_8c3787d8(h->data, fs->src, 0x3c);
        if (h->id != 0xffff) {
            c = fs_crc_8c378f00(0x3e, h);
            if (h->crc != c) return -4;
        }
        return 0;
    }
    return -6;
}

int fs_step_8c378b98(Fs *fs)
{
    int ret;
    int r;

    switch (fs->phase) {
    case 0:
        r = fs_write_hdr_8c378a78(fs);
        if (r == -10) {
            fs->phase = 1;
            goto one;
        }
        ret = r;
        break;
    case 1:
        ret = fs_dev_check_8c37878c(fs->dev);
        if (ret == -1) {
            ret = -3;
            break;
        }
        fs->phase = 2;
    one:
        ret = 1;
        break;
    case 2:
        ret = fs_flush_8c3789bc(fs);
        break;
    default:
        ret = -2;
        break;
    }
    return ret;
}

int fs_mount_8c378bf8(int port, char *buf)
{
    Fs *fs;
    Info info;
    char *h;
    int st;
    int r;

    if (port < 1 || port >= 5) return -7;
    g_fs_cur_8c3fbfb8 = &g_fs_8c56d0b0;
    fs_info_8c378750(port, &info);
    g_fs_cur_8c3fbfb8->port = port;
    g_fs_cur_8c3fbfb8->dev = info.dev;
    g_fs_cur_8c3fbfb8->size = info.size;
    g_fs_cur_8c3fbfb8->nfat = (g_fs_cur_8c3fbfb8->size + 0x7fff) >> 15;
    g_fs_cur_8c3fbfb8->nblocks = (g_fs_cur_8c3fbfb8->size >> 6) - g_fs_cur_8c3fbfb8->nfat - 1;
    g_fs_cur_8c3fbfb8->buf = buf;
    g_fs_cur_8c3fbfb8->busy = 0;
    g_fs_cur_8c3fbfb8->status = 0;
    g_fs_cur_8c3fbfb8->result = 0;
    r = fs_dev_read_8c378764(g_fs_cur_8c3fbfb8->dev, &g_fs_cur_8c3fbfb8->hdr, 0x40);
    if (r == -1) return -1;
    h = (char *)&g_fs_cur_8c3fbfb8->hdr;
    r = fs_memeq_8c3787a0(h, str_8c3f77d4, 0xc);
    if (r == 0) goto bad;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto check;
check:
    fs = g_fs_cur_8c3fbfb8;
    if (fs->port != ((Hdr *)h)->data[0xe]) goto bad;
    fs->state = ((Hdr *)h)->data[0xf];
    st = g_fs_cur_8c3fbfb8->state;
    if (st != 0 && st != 1) {
    bad:
        return -8;
    }
    fs_fill_8c3787ec(g_fs_cur_8c3fbfb8->buf, g_fs_cur_8c3fbfb8->size);
    r = fs_load_8c3788d6(g_fs_cur_8c3fbfb8);
    if (r != 0) return r;
    return 0;
}

int fs_format_8c378cfc(int mode)
{
    Fs *fs;
    char *h;
    int r;

    fs = g_fs_cur_8c3fbfb8;
    if (fs == 0) return -11;
    if (mode != 0 && mode != 1) return -6;
    r = fs_dev_check_8c37878c(fs->dev);
    if (r != 0) return -3;
    h = (char *)&g_fs_cur_8c3fbfb8->hdr;
    fs_copy8_8c3787d8(str_8c3f77d4, h, 0x10);
    g_fs_cur_8c3fbfb8->state = mode;
    h[0x11] = mode;
    h[0x10] = g_fs_cur_8c3fbfb8->port;
    r = fs_dev_write_8c378778(g_fs_cur_8c3fbfb8->dev, h, 0x12);
    if (r != 0x12) return -2;
    fs_fill_8c3787ec(g_fs_cur_8c3fbfb8->buf, g_fs_cur_8c3fbfb8->size);
    r = fs_load_8c3788d6(g_fs_cur_8c3fbfb8);
    if (r != 0) return r;
    return 0;
}

int fs_read_8c378d88(int block, char *dst)
{
    Fs *fs;

    fs = g_fs_cur_8c3fbfb8;
    if (fs == 0) return -11;
    if (fs->busy != 0) return -9;
    if (block < 0 || block >= fs->nblocks) return -5;
    fs->busy = 1;
    g_fs_cur_8c3fbfb8->status = 2;
    g_fs_cur_8c3fbfb8->block = block;
    g_fs_cur_8c3fbfb8->src = dst;
    return 0;
}

int fs_write_8c378dc4(int block, char *src)
{
    Fs *fs;

    fs = g_fs_cur_8c3fbfb8;
    if (fs == 0) return -11;
    if (fs->busy != 0) return -9;
    if (block < 0 || block >= fs->nblocks) return -5;
    fs->busy = 2;
    g_fs_cur_8c3fbfb8->status = 2;
    g_fs_cur_8c3fbfb8->block = block;
    g_fs_cur_8c3fbfb8->src = src;
    g_fs_cur_8c3fbfb8->phase = 0;
    return 0;
}

int fs_poll_8c378e04(void)
{
    Fs *fs;
    int r;

    fs = g_fs_cur_8c3fbfb8;
    if (fs == 0) return 0;
    switch (fs->busy) {
    case 0:
        break;
    case 1:
        r = fs_read_blk_8c378b40(fs);
        g_fs_cur_8c3fbfb8->busy = 0;
        if (r != 0) g_fs_cur_8c3fbfb8->status = 3;
        else g_fs_cur_8c3fbfb8->status = 1;
        g_fs_cur_8c3fbfb8->result = r;
        break;
    case 2:
        r = fs_step_8c378b98(fs);
        if (r == 1) break;
        g_fs_cur_8c3fbfb8->busy = 0;
        if (r != 0) g_fs_cur_8c3fbfb8->status = 3;
        else g_fs_cur_8c3fbfb8->status = 1;
        g_fs_cur_8c3fbfb8->result = r;
        break;
    default:
        fs->busy = 0;
        g_fs_cur_8c3fbfb8->status = 0;
        break;
    }
    return g_fs_cur_8c3fbfb8->status;
}

int fs_result_8c378e86(void)
{
    Fs *fs;

    fs = g_fs_cur_8c3fbfb8;
    if (fs == 0) return -11;
    return fs->result;
}

void fs_close_8c378e98(void)
{
    g_fs_cur_8c3fbfb8 = 0;
}

int fs_sync_8c378ea0(void)
{
    Fs *fs;
    int r;

    fs = g_fs_cur_8c3fbfb8;
    if (fs == 0) return -11;
    r = fs_dev_check_8c37878c(fs->dev);
    if (r == -1) r = -3;
    else r = fs_flush_8c3789bc(g_fs_cur_8c3fbfb8);
    return r;
}

int fs_free_8c378ee4(void)
{
    Fs *fs;

    fs = g_fs_cur_8c3fbfb8;
    if (fs == 0) return -11;
    return fs->nblocks - fs->count;
}
