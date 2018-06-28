

/**
 * 为什么p合法而lp非法
 */

int i = 42;
void *p = &i;   //因为void*可以指向任何类型的数
long *lp = &i;  //lp是一个long类型的指针，只可以指向long类型的数
