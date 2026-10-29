typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c21e328(int a0)
{
    int v1;
    switch (a0) {
    case 3:
        v1 = 1;
        break;
    case 9:
        v1 = 6;
        break;
    case 10:
        v1 = 8;
        break;
    case 11:
        v1 = 7;
        break;
    case 12:
        v1 = 9;
        break;
    case 15:
        v1 = 3;
        break;
    case 16:
        v1 = 4;
        break;
    case 17:
        v1 = 5;
        break;
    case 18:
        v1 = 0;
        break;
    case 2:
        v1 = 2;
        break;
    case 0:
    case 1:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 13:
    case 14:
    default:
        v1 = 0xe;
        break;
    }
    return v1;
}
