// ! Storage : Memory.
// ! Default value : An unpredictable value, often called a garbage value.
// ! scope :Local to the block in which the variable is defined
// ! life :Till the control remains within the block in which the
// ! variable is defined.

/*
#include <stdio.h>
int main()
{
    auto int i, j;
    printf("%d %d\n", i, j);
    return 0;
}
*/

///*
#include <stdio.h>
int main()
{
    auto int i = 1;
    {
        auto int i = 2;
        {
            auto int i = 3;
            printf("%d ", i);
        }
        printf("%d ", i);
    }
    printf("%d\n", i);
    return 0;
}
//*/