#include "subject.h"

int main()
{
    observer_child* observerinstance = new observer_child();
    weathersubject weathinstance;
    weathinstance.register_observer(observerinstance);
    weathinstance.notify();
}