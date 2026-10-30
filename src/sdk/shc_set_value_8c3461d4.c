/* SDK pool group 0x8c3461d4 (Hitachi SHC): stores a value in the current
   object; reports error 0x0d000001 when there is none. */
typedef struct Object {
    char unknown0[0x438];
    int value;
} Object;

extern Object *g_current_8c3fac48;
extern void report_error_8c346118(int (*)(int), int);

int set_value_8c3461d4(int value)
{
    Object *object = g_current_8c3fac48;
    int error = 0;
    if (object == 0) error = 0xd000001;
    else object->value = value;
    if (error) report_error_8c346118(set_value_8c3461d4, error);
    return error;
}
