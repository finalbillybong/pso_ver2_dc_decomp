/* SDK pool group 0x8c349c50-0x8c349c98 (Hitachi SHC): two query wrappers, one
   converting the result from 1/2048 units with rounding toward zero. */
extern int query_8c358172(int key);

int query_scaled_8c349c50(int key, int *out)
{
    int value = query_8c358172(key);
    *out = (value + 0x7ff) / 2048;
    return 1;
}

int query_raw_8c349c78(int key, int *out)
{
    *out = query_8c358172(key);
    return 1;
}
