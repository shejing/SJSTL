#include <new.h>

template <class T1, class T2>
inline void construct(T1* p, const T2& value)
{
    new (p) T1(value);
}

template <class T>
inline void destory(T* pointer)
{
    pointer->~T();
}