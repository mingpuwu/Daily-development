#ifndef SUBJECT_H
#define SUBJECT_H
#include <vector>
#include <iostream>

class observer
{
public:
    observer() = default;
    virtual ~observer() = default;
    virtual void update() = 0;
};

class subject
{
public:
    virtual void register_observer(observer*) = 0;
    virtual void notify() = 0;
};

class weathersubject : public subject
{
public:
    weathersubject() = default;
    void register_observer(observer* ob)
    {
        observerarray_list.push_back(ob);
    }

    void notify()
    {
        for(auto ob : observerarray_list)
        {
            ob->update();
        }
    }
private:
    std::vector<observer*> observerarray_list;
};

class observer_child : public observer
{
public:
    observer_child() = default;
    ~observer_child() = default;
    void update()
    {
        std::cout<<"update"<<std::endl;
    }
};

#endif