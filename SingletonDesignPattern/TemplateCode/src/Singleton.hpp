#include <mutex>

using namespace std;

class Singleton
{
    private:

    static Singleton* singleton;
    static mutex mutexKey;
    string value;

    private:
    Singleton(string s) : value(s) {}
    ~Singleton() {}

    public:

    Singleton(const Singleton& obj) = delete;
    void operator=(const Singleton& obj) = delete;
    static Singleton* GetInstance(const string& s);
    void DoSomeTask();
};