#ifndef _ABSTRACTCLASS_H
#define _ABSTRACTCLASS_H

class AbstractClass
{
    void templateMethod() final
    {
        primitiveOperation1();
        primitiveOperation2();
        concreteOperation();
    }

    virtual void primitiveOperation1();
    virtual void primitiveOperation2();
    void concreteOperation() final{}
    void hook() {}
}


#endif
