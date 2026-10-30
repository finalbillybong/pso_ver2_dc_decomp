/* SDK pool group 0x8c35c1d8-0x8c35c1f0 (Hitachi SHC): copies a four-word global record. */
extern int g_record_8c3f62f0[4];

void get_record_8c35c1d8(int *out)
{
    out[0] = g_record_8c3f62f0[0];
    out[1] = g_record_8c3f62f0[1];
    out[2] = g_record_8c3f62f0[2];
    out[3] = g_record_8c3f62f0[3];
}
