/* SDK pool group 0x8c348044-0x8c34806c (Hitachi SHC): stores a field after a
   successful check. */
typedef struct Object {
    int unknown0[8];
    int value;
} Object;

extern int check_8c347458(Object *object);

int set_checked_8c348044(Object *object, int value)
{
    int result = check_8c347458(object);
    if (result) goto done;
    object->value = value;
done:
    return result;
}
