#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

/*
一组会议有开始时间和结束时间，要安排在同一个会议室开会，
如何安排可以使开的会议最多
[6.5-7,6-8,7.5-8,8-9,6-10,9-10]
先按照结束时间从小到大的顺序排列
然后找离这次结束时间最近的下次会议开始时间,并且要保证下次开始时间大于本次结束时间
*/

struct meeting
{
    float start;
    float end;

    meeting(float s, float e)
    {
        start = s;
        end = e;
    }
};

bool compare(meeting a , meeting b)
{
    return a.end<b.end;
}

void MeetingArrange(meeting* MeetingArray, int MeetingNum)
{
    if (MeetingArrange == nullptr)
        return;

    std::sort(MeetingArray,&MeetingArray[MeetingNum],compare);

    float current = MeetingArray[0].end;

    std::vector<meeting*> arrange;
    arrange.push_back(&MeetingArray[0]);

    for(int i = 1; i < MeetingNum; i++)
    {
        if(MeetingArray[i].start >= current)
        {
            current = MeetingArray[i].end;
            arrange.push_back(&MeetingArray[i]);
        }
    }

    for(auto i: arrange)
    {
        std::cout<<i->start<<"--";
        std::cout<<i->end<<std::endl;
    }
}

int main()
{
    meeting a(7,9);
    meeting b(7,8);
    meeting c(6.5,7);
    meeting d(8,8.5);
    meeting e(8,8.3);

    meeting array[] = {a,b,c,d,e};
    MeetingArrange(&array[0],sizeof(array)/sizeof(meeting));
}