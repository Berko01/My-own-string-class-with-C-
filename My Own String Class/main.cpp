#include <iostream>
using namespace std;

class myString
{
public:
    char *str1;
    char *str2;
    char *s;

    int STRLEN(char *);
    char *STRCPY(char *);
    bool STRCMP(char *, char *);
    void STRCAT(char *, char *, char *);
    void STRREV(char *, char *);
    void STRPRINT(char *str);
};

void myString::STRCAT(char *str1, char *str2, char *full_string)
{

    int i = STRLEN(str1);

    while (i > 0)
    {
        *full_string = *str1;
        str1++;
        full_string++;
        i--;
    }
    i = STRLEN(str2);

    while (i > 0)
    {
        *full_string = *str2;
        str2++;
        full_string++;
        i--;
    }
}

void myString::STRPRINT(char *str)
{
    int i = STRLEN(str);
    while (i > 0)
    {
        cout << *str;
        str++;
        i--;
    }
    cout << endl;
}

int myString::STRLEN(char *str)
{
    int len = 0;
    while (*str != '\0')
    {
        str++;
        len++;
    }

    return len;
}

char *myString::STRCPY(char *str)
{

    char *cpystr;
    char *firststr;

    int i = STRLEN(str);

    firststr = cpystr;
    while (0 < i)
    {
        i--;
        *cpystr = *str;
        cpystr++;
        str++;
    }

    return (firststr);
}

bool myString::STRCMP(char *str1, char *str2)
{
    if (STRLEN(str1) != STRLEN(str2))
    {
        return false;
    }

    while (*str1 != '\0')
    {
        if (*str1 != *str2)
        {
            return false;
        }
        else
        {
            str1++;
            str2++;
        }
    }

    return true;
}

void myString::STRREV(char *str, char *rev)
{

    int i = STRLEN(str);
    int j = 1;

    char *cpyStr=new char[1000];
    rev=cpyStr;
   

    while (j != i + 1)
    {
        cout << "girdi";
        *cpyStr = str[i - j];
        j++;
        cpyStr++;
    }

    while(*rev!='/0')
    {
        cout<<*rev;
        rev++;
    }
    
}

int main()
{

    myString deneme;
    deneme.str1 = new char[1000];
    deneme.s = new char[1000];
    deneme.str2 = new char[1000];

    cout << "String 1 giriniz." << endl;
    cin >> deneme.str1;
    cout << "String 2 giriniz." << endl;
    cin >> deneme.str2;
    cout << deneme.STRLEN(deneme.str1) << endl;
    deneme.STRPRINT(deneme.str1);
    deneme.STRPRINT(deneme.str2);
    deneme.STRLEN(deneme.str2);

    // deneme.STRCAT(deneme.str1, deneme.str2, deneme.s);
    // deneme.STRPRINT(deneme.s);
    // cout<<deneme.STRLEN(deneme.s)<<endl;

    // char *temp=deneme.STRCPY(deneme.str1);
    cout << endl;
    cout << deneme.STRCMP(deneme.str1, deneme.str2);

    deneme.STRREV(deneme.str1, deneme.s);
    
    cout<<endl;

    return 0;
}
