/* SDK pool group 0x8c347a44 (Hitachi SHC): copies a field of the current
   object, if any, to the caller. */
typedef struct Object {
    char unknown0[0x7c];
    int value;
} Object;

extern Object *g_current_8c3fac48;

int get_field_8c347a44(int *result)
{
    if (g_current_8c3fac48 == 0) goto done;
    *result = g_current_8c3fac48->value;
done:
    return 0;
}
