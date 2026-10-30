/* SDK pool group 0x8c348100-0x8c348128 (Hitachi SHC): stores a value in the
   object when the check at 0x8c347458 succeeds. */
typedef struct Object {
    int unknown0[3];
    int value;
} Object;

extern int check_object_8c347458(Object *);

int attach_value_8c348100(Object *object, int value)
{
    int result = check_object_8c347458(object);
    if (result) goto done;
    object->value = value;
done:
    return result;
}
