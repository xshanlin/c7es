#ifndef C7SINGLETON_H
#define C7SINGLETON_H

template<class T>
class C7Singleton {
public:
    C7Singleton() {
     }
    virtual ~C7Singleton() {
    }

public:
    static T& Instance() {
        return m_instanceObj;
    }

private:
    static T m_instanceObj;
};

#endif // C7SINGLETON_H
