#include "stack.h"
Stack::Stack() {
    top = 0;
}

bool Stack::isempty() const
{   
    return top==0;
}

bool Stack::isfull() const
{
    return top==Max;
}

bool Stack::push(Item &a)
{
    if (top < Max) {
        item[top] = a;
        top++;
        return true;
}
    else
        return false;
}

bool Stack::pop(Item &b)
{
    if (top > 0) {
        b = item[top - 1];
        top--;
        return true;
}
    else
        return false;
}
