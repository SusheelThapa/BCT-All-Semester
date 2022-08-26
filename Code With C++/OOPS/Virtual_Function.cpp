#include <iostream>
#include <cstring>

using namespace std;

class CWH
{
protected:
    char title[30];
    float rating;

public:
    CWH(char *s, float r)
    {
        strcpy(title, s);
        rating = r;
    }

    void display()
    {
        cout << "In the CWH display class" << endl
             << endl;
    }
};

class CWHVideo : public CWH
{
    int video_length;

public:
    CWHVideo(char *s, float r, int vl) : CWH(s, r)
    {
        video_length = vl;
    }

    void display(void)
    {
        cout << "Title: " << title << endl;
        cout << "Rating: " << rating << endl;
        cout << "Video Length: " << video_length << " minutes" << endl
             << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(char *s, float r, int w) : CWH(s, r)
    {
        words = w;
    }
    void display(void)
    {
        cout << "Title: " << title << endl;
        cout << "Rating: " << rating << endl;
        cout << "Words Count: " << words << " words" << endl
             << endl;
    }
};
int main()
{
    char *title = new char[30];
    float rating;
    int length, video_length, words;

    cout << "<===NOT USING POINTER===>" << endl;

    //Creating Object of CWHVideo
    strcpy(title, "C++ Programming");
    rating = 4.6;
    video_length = 14;

    CWHVideo CPlusPlusVideo = CWHVideo(title, rating, video_length);
    CPlusPlusVideo.display();

    //Creating Object of CWHText
    strcpy(title, "C++ Text");
    words = 1000;
    rating = 3.69;

    CWHText CPlusPlusText(title, rating, words);
    CPlusPlusText.display();

    cout << endl
         << endl
         << "<===USING POINTER===>" << endl;

    //Trying to get both result using pointer
    CWH *pointer[2];
    pointer[0] = &CPlusPlusVideo;
    pointer[1] = &CPlusPlusText;

    pointer[0]->display();
    pointer[1]->display();

    /*
    When we try to get access to function(display) using pointer(Base Class pointer pointing to derived class) also all Class have its individual display function then 
    
    it doesnot throw error but gives us undesired result
    if we donot specific vitual function in Base Class

    As there will be  two function with same name when we inherited Base Class in Derived Class due to which,it throws undesirable results

    Rules for virtual functions
        ->They cannot be static
        ->They are accessed by object pointer
        ->Virtual functions can be friend of another class
        ->Virtual function may not be use in base class
        ->If a virtual function is defined in a base class, there is no necessity of redefining in the derived class;
    */

    return 0;
}