/* SDK pool group 0x8c370860-0x8c37087c (Hitachi SHC): a setter and getter for
   one field of a work area reached through a global pointer. The literal pool
   (0x0fbc offset word, padding, pointer address) follows the second function. */
typedef struct WorkArea {
    char unknown0[0xfbc];
    int value;
} WorkArea;

extern WorkArea *g_work_area_8c562834;

void set_work_value_8c370860(int value)
{
    g_work_area_8c562834->value = value;
}

int get_work_value_8c37086a(void)
{
    return g_work_area_8c562834->value;
}
